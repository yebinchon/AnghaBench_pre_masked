
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_8__ {int writesize; int size; int erasesize; scalar_t__ name; int _write; int _read; int _erase; int writebufsize; int flags; int type; TYPE_1__ dev; struct spear_smi* priv; } ;
struct spear_snor_flash {int bank; int fast_mode; TYPE_3__ mtd; int dev_id; int erase_cmd; int page_size; int base_addr; int lock; } ;
struct spear_smi_plat_data {int num_flashes; struct spear_smi_flash_info* board_flash_info; } ;
struct spear_smi_flash_info {int size; int nr_partitions; struct mtd_partition* partitions; scalar_t__ name; int mem_base; scalar_t__ fast_mode; } ;
struct spear_smi {TYPE_2__* pdev; struct spear_snor_flash** flash; } ;
struct platform_device {int dev; } ;
struct mtd_partition {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_9__ {int sectorsize; int device_id; int erase_cmd; int pagesize; scalar_t__ name; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 struct spear_smi_plat_data* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int,...) ;
 int FUNC_3 (int *,int ,int) ;
 struct spear_snor_flash* FUNC_4 (int *,int,int ) ;
 TYPE_5__* VAR_7 ;
 int FUNC_5 (TYPE_3__*,struct mtd_partition*,int) ;
 int FUNC_6 (TYPE_3__*,struct device_node*) ;
 int FUNC_7 (int *) ;
 struct spear_smi* FUNC_8 (struct platform_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (struct spear_smi*,int) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_11,
     u32 VAR_12, struct device_node *VAR_13)
{
 struct spear_smi *VAR_14 = FUNC_8(VAR_11);
 struct spear_smi_flash_info *VAR_15;
 struct spear_smi_plat_data *VAR_16;
 struct spear_snor_flash *VAR_17;
 struct mtd_partition *VAR_18 = ((void*)0);
 int VAR_19 = 0;
 int VAR_20;
 int VAR_21 = 0;

 VAR_16 = FUNC_1(&VAR_11->dev);
 if (VAR_12 > VAR_16->num_flashes - 1)
  return -VAR_0;

 VAR_15 = &VAR_16->board_flash_info[VAR_12];
 if (!VAR_15)
  return -VAR_2;

 VAR_17 = FUNC_4(&VAR_11->dev, sizeof(*VAR_17), VAR_4);
 if (!VAR_17)
  return -VAR_3;
 VAR_17->bank = VAR_12;
 VAR_17->fast_mode = VAR_15->fast_mode ? 1 : 0;
 FUNC_7(&VAR_17->lock);


 VAR_20 = FUNC_9(VAR_14, VAR_12);
 if (VAR_20 < 0) {
  FUNC_2(&VAR_14->pdev->dev, "smi-nor%d not found\n", VAR_12);
  return VAR_20;
 }

 VAR_17->base_addr = FUNC_3(&VAR_11->dev, VAR_15->mem_base,
     VAR_15->size);
 if (!VAR_17->base_addr)
  return -VAR_1;

 VAR_14->flash[VAR_12] = VAR_17;
 VAR_17->mtd.priv = VAR_14;

 if (VAR_15->name)
  VAR_17->mtd.name = VAR_15->name;
 else
  VAR_17->mtd.name = VAR_7[VAR_20].name;

 VAR_17->mtd.dev.parent = &VAR_11->dev;
 FUNC_6(&VAR_17->mtd, VAR_13);
 VAR_17->mtd.type = VAR_6;
 VAR_17->mtd.writesize = 1;
 VAR_17->mtd.flags = VAR_5;
 VAR_17->mtd.size = VAR_15->size;
 VAR_17->mtd.erasesize = VAR_7[VAR_20].sectorsize;
 VAR_17->page_size = VAR_7[VAR_20].pagesize;
 VAR_17->mtd.writebufsize = VAR_17->page_size;
 VAR_17->erase_cmd = VAR_7[VAR_20].erase_cmd;
 VAR_17->mtd._erase = VAR_8;
 VAR_17->mtd._read = VAR_9;
 VAR_17->mtd._write = VAR_10;
 VAR_17->dev_id = VAR_7[VAR_20].device_id;

 FUNC_2(&VAR_14->pdev->dev, "mtd .name=%s .size=%llx(%lluM)\n",
   VAR_17->mtd.name, VAR_17->mtd.size,
   VAR_17->mtd.size / (1024 * 1024));

 FUNC_2(&VAR_14->pdev->dev, ".erasesize = 0x%x(%uK)\n",
   VAR_17->mtd.erasesize, VAR_17->mtd.erasesize / 1024);


 if (VAR_15->partitions) {
  VAR_18 = VAR_15->partitions;
  VAR_19 = VAR_15->nr_partitions;
 }


 VAR_21 = FUNC_5(&VAR_17->mtd, VAR_18, VAR_19);
 if (VAR_21) {
  FUNC_0(&VAR_14->pdev->dev, "Err MTD partition=%d\n", VAR_21);
  return VAR_21;
 }

 return 0;
}
