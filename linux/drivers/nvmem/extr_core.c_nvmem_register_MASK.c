
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int groups; int of_node; TYPE_3__* parent; int * bus; int * type; } ;
struct nvmem_device {int id; int stride; int word_size; int read_only; TYPE_2__ dev; int reg_write; int reg_read; int type; int priv; int size; scalar_t__ owner; int cells; int refcnt; } ;
struct nvmem_config {int id; scalar_t__ compat; int ncells; int cells; scalar_t__ name; scalar_t__ read_only; TYPE_3__* dev; int no_of_node; int reg_write; int reg_read; int type; int priv; int size; scalar_t__ word_size; scalar_t__ stride; scalar_t__ owner; } ;
struct TYPE_11__ {int of_node; TYPE_1__* driver; } ;
struct TYPE_9__ {scalar_t__ owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvmem_device* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,struct nvmem_device*) ;
 int FUNC_3 (TYPE_2__*,char*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,char*,char*,...) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*,char*) ;
 int FUNC_9 (int *,int ,int ,int ) ;
 int FUNC_10 (struct nvmem_device*) ;
 int FUNC_11 (int *) ;
 struct nvmem_device* FUNC_12 (int,int ) ;
 int FUNC_13 (struct nvmem_device*,int ,int ) ;
 int FUNC_14 (struct nvmem_device*) ;
 int FUNC_15 (struct nvmem_device*) ;
 int VAR_4 ;
 int FUNC_16 (struct nvmem_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_17 (struct nvmem_device*,struct nvmem_config const*) ;
 int FUNC_18 (struct nvmem_device*,struct nvmem_config const*) ;
 int FUNC_19 (struct nvmem_device*,struct nvmem_config const*) ;
 int FUNC_20 (TYPE_2__*) ;

struct nvmem_device *FUNC_21(const struct nvmem_config *VAR_8)
{
 struct nvmem_device *VAR_9;
 int VAR_10;

 if (!VAR_8->dev)
  return FUNC_0(-VAR_0);

 VAR_9 = FUNC_12(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 VAR_10 = FUNC_9(&VAR_5, 0, 0, VAR_2);
 if (VAR_10 < 0) {
  FUNC_10(VAR_9);
  return FUNC_0(VAR_10);
 }

 FUNC_11(&VAR_9->refcnt);
 FUNC_1(&VAR_9->cells);

 VAR_9->id = VAR_10;
 VAR_9->owner = VAR_8->owner;
 if (!VAR_9->owner && VAR_8->dev->driver)
  VAR_9->owner = VAR_8->dev->driver->owner;
 VAR_9->stride = VAR_8->stride ?: 1;
 VAR_9->word_size = VAR_8->word_size ?: 1;
 VAR_9->size = VAR_8->size;
 VAR_9->dev.type = &VAR_7;
 VAR_9->dev.bus = &VAR_4;
 VAR_9->dev.parent = VAR_8->dev;
 VAR_9->priv = VAR_8->priv;
 VAR_9->type = VAR_8->type;
 VAR_9->reg_read = VAR_8->reg_read;
 VAR_9->reg_write = VAR_8->reg_write;
 if (!VAR_8->no_of_node)
  VAR_9->dev.of_node = VAR_8->dev->of_node;

 if (VAR_8->id == -1 && VAR_8->name) {
  FUNC_4(&VAR_9->dev, "%s", VAR_8->name);
 } else {
  FUNC_4(&VAR_9->dev, "%s%d",
        VAR_8->name ? : "nvmem",
        VAR_8->name ? VAR_8->id : VAR_9->id);
 }

 VAR_9->read_only = FUNC_8(VAR_8->dev, "read-only") ||
      VAR_8->read_only || !VAR_9->reg_write;

 VAR_9->dev.groups = FUNC_17(VAR_9, VAR_8);

 FUNC_7(&VAR_9->dev);

 FUNC_3(&VAR_9->dev, "Registering nvmem device %s\n", VAR_8->name);

 VAR_10 = FUNC_5(&VAR_9->dev);
 if (VAR_10)
  goto err_put_device;

 if (VAR_8->compat) {
  VAR_10 = FUNC_19(VAR_9, VAR_8);
  if (VAR_10)
   goto err_device_del;
 }

 if (VAR_8->cells) {
  VAR_10 = FUNC_13(VAR_9, VAR_8->cells, VAR_8->ncells);
  if (VAR_10)
   goto err_teardown_compat;
 }

 VAR_10 = FUNC_15(VAR_9);
 if (VAR_10)
  goto err_remove_cells;

 VAR_10 = FUNC_14(VAR_9);
 if (VAR_10)
  goto err_remove_cells;

 FUNC_2(&VAR_6, VAR_3, VAR_9);

 return VAR_9;

err_remove_cells:
 FUNC_16(VAR_9);
err_teardown_compat:
 if (VAR_8->compat)
  FUNC_18(VAR_9, VAR_8);
err_device_del:
 FUNC_6(&VAR_9->dev);
err_put_device:
 FUNC_20(&VAR_9->dev);

 return FUNC_0(VAR_10);
}
