
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct resource {scalar_t__ start; } ;
struct TYPE_9__ {int parent; } ;
struct mtd_info {int name; TYPE_3__ dev; } ;
struct TYPE_8__ {int dev_ready; int select_chip; int write_buf; int read_buf; int read_byte; int chip_delay; int cmd_ctrl; int IO_ADDR_W; int IO_ADDR_R; } ;
struct TYPE_7__ {int algo; int mode; } ;
struct TYPE_10__ {TYPE_2__ legacy; TYPE_1__ ecc; } ;
struct fsl_upm_nand {int mchip_count; scalar_t__* rnb_gpio; TYPE_4__ chip; int dev; int chip_delay; int io_base; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,int ,struct device_node*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mtd_info*,int *,int ) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,struct device_node*) ;
 struct mtd_info* FUNC_5 (TYPE_4__*) ;
 struct device_node* FUNC_6 (struct device_node const*,int *) ;
 int FUNC_7 (struct device_node*) ;

__attribute__((used)) static int FUNC_8(struct fsl_upm_nand *VAR_11,
    const struct device_node *VAR_12,
    const struct resource *VAR_13)
{
 struct mtd_info *VAR_14 = FUNC_5(&VAR_11->chip);
 int VAR_15;
 struct device_node *VAR_16;

 VAR_11->chip.legacy.IO_ADDR_R = VAR_11->io_base;
 VAR_11->chip.legacy.IO_ADDR_W = VAR_11->io_base;
 VAR_11->chip.legacy.cmd_ctrl = VAR_6;
 VAR_11->chip.legacy.chip_delay = VAR_11->chip_delay;
 VAR_11->chip.legacy.read_byte = VAR_8;
 VAR_11->chip.legacy.read_buf = VAR_7;
 VAR_11->chip.legacy.write_buf = VAR_10;
 VAR_11->chip.ecc.mode = VAR_4;
 VAR_11->chip.ecc.algo = VAR_3;
 if (VAR_11->mchip_count > 1)
  VAR_11->chip.legacy.select_chip = VAR_9;

 if (VAR_11->rnb_gpio[0] >= 0)
  VAR_11->chip.legacy.dev_ready = VAR_5;

 VAR_14->dev.parent = VAR_11->dev;

 VAR_16 = FUNC_6(VAR_12, ((void*)0));
 if (!VAR_16)
  return -VAR_0;

 FUNC_4(&VAR_11->chip, VAR_16);
 VAR_14->name = FUNC_0(VAR_2, "0x%llx.%pOFn", (u64)VAR_13->start,
         VAR_16);
 if (!VAR_14->name) {
  VAR_15 = -VAR_1;
  goto err;
 }

 VAR_15 = FUNC_3(&VAR_11->chip, VAR_11->mchip_count);
 if (VAR_15)
  goto err;

 VAR_15 = FUNC_2(VAR_14, ((void*)0), 0);
err:
 FUNC_7(VAR_16);
 if (VAR_15)
  FUNC_1(VAR_14->name);
 return VAR_15;
}
