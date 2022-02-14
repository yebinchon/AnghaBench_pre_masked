
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {int of_node; } ;
struct platform_device {TYPE_9__ dev; } ;
struct map_info {int dummy; } ;
struct ltq_mtd {TYPE_4__* mtd; TYPE_8__* map; TYPE_2__* res; } ;
struct cfi_private {int addr_unlock1; int addr_unlock2; } ;
struct TYPE_16__ {int bankwidth; struct cfi_private* fldrv_priv; int map_priv_1; int copy_to; int copy_from; int write; int read; int name; int virt; int size; int phys; } ;
struct TYPE_13__ {TYPE_9__* parent; } ;
struct TYPE_15__ {TYPE_1__ dev; } ;
struct TYPE_14__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_9__*,char*) ;
 int FUNC_3 (TYPE_9__*,TYPE_2__*) ;
 void* FUNC_4 (TYPE_9__*,int,int ) ;
 TYPE_4__* FUNC_5 (char*,TYPE_8__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,int *,int ) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 TYPE_2__* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct ltq_mtd*) ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_12(struct platform_device *VAR_12)
{
 struct ltq_mtd *VAR_13;
 struct cfi_private *VAR_14;
 int VAR_15;

 VAR_13 = FUNC_4(&VAR_12->dev, sizeof(struct ltq_mtd), VAR_3);
 if (!VAR_13)
  return -VAR_1;

 FUNC_10(VAR_12, VAR_13);

 VAR_13->res = FUNC_9(VAR_12, VAR_4, 0);
 if (!VAR_13->res) {
  FUNC_2(&VAR_12->dev, "failed to get memory resource\n");
  return -VAR_0;
 }

 VAR_13->map = FUNC_4(&VAR_12->dev, sizeof(struct map_info),
        VAR_3);
 if (!VAR_13->map)
  return -VAR_1;

 VAR_13->map->phys = VAR_13->res->start;
 VAR_13->map->size = FUNC_11(VAR_13->res);
 VAR_13->map->virt = FUNC_3(&VAR_12->dev, VAR_13->res);
 if (FUNC_0(VAR_13->map->virt))
  return FUNC_1(VAR_13->map->virt);

 VAR_13->map->name = VAR_9;
 VAR_13->map->bankwidth = 2;
 VAR_13->map->read = VAR_10;
 VAR_13->map->write = VAR_11;
 VAR_13->map->copy_from = VAR_7;
 VAR_13->map->copy_to = VAR_8;

 VAR_13->map->map_priv_1 = VAR_6;
 VAR_13->mtd = FUNC_5("cfi_probe", VAR_13->map);
 VAR_13->map->map_priv_1 = VAR_5;

 if (!VAR_13->mtd) {
  FUNC_2(&VAR_12->dev, "probing failed\n");
  return -VAR_2;
 }

 VAR_13->mtd->dev.parent = &VAR_12->dev;
 FUNC_8(VAR_13->mtd, VAR_12->dev.of_node);

 VAR_14 = VAR_13->map->fldrv_priv;
 VAR_14->addr_unlock1 ^= 1;
 VAR_14->addr_unlock2 ^= 1;

 VAR_15 = FUNC_7(VAR_13->mtd, ((void*)0), 0);
 if (VAR_15) {
  FUNC_2(&VAR_12->dev, "failed to add partitions\n");
  goto err_destroy;
 }

 return 0;

err_destroy:
 FUNC_6(VAR_13->mtd);
 return VAR_15;
}
