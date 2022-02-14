
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct seq_file {struct atmel_mci* private; } ;
struct TYPE_4__ {scalar_t__ has_cfg_reg; scalar_t__ has_dma_conf_reg; scalar_t__ has_cstor_reg; scalar_t__ has_odd_clk_div; } ;
struct atmel_mci {TYPE_2__ caps; TYPE_1__* pdev; int lock; int regs; } ;
struct TYPE_3__ {int dev; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct seq_file*,char*,int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int ,int ) ;
 int FUNC_3 (int*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct seq_file*,char*,int,...) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct seq_file *VAR_20, void *VAR_21)
{
 struct atmel_mci *VAR_22 = VAR_20->private;
 u32 *VAR_23;
 int VAR_24 = 0;


 VAR_23 = FUNC_2(VAR_15, VAR_19);
 if (!VAR_23)
  return -VAR_18;

 FUNC_4(&VAR_22->pdev->dev);






 FUNC_8(&VAR_22->lock);
 FUNC_3(VAR_23, VAR_22->regs, VAR_15);
 FUNC_9(&VAR_22->lock);

 FUNC_5(&VAR_22->pdev->dev);
 FUNC_6(&VAR_22->pdev->dev);

 FUNC_7(VAR_20, "MR:\t0x%08x%s%s ",
   VAR_23[VAR_12 / 4],
   VAR_23[VAR_12 / 4] & VAR_13 ? " RDPROOF" : "",
   VAR_23[VAR_12 / 4] & VAR_14 ? " WRPROOF" : "");
 if (VAR_22->caps.has_odd_clk_div)
  FUNC_7(VAR_20, "{CLKDIV,CLKODD}=%u\n",
    ((VAR_23[VAR_12 / 4] & 0xff) << 1)
    | ((VAR_23[VAR_12 / 4] >> 16) & 1));
 else
  FUNC_7(VAR_20, "CLKDIV=%u\n",
    (VAR_23[VAR_12 / 4] & 0xff));
 FUNC_7(VAR_20, "DTOR:\t0x%08x\n", VAR_23[VAR_10 / 4]);
 FUNC_7(VAR_20, "SDCR:\t0x%08x\n", VAR_23[VAR_16 / 4]);
 FUNC_7(VAR_20, "ARGR:\t0x%08x\n", VAR_23[VAR_0 / 4]);
 FUNC_7(VAR_20, "BLKR:\t0x%08x BCNT=%u BLKLEN=%u\n",
   VAR_23[VAR_1 / 4],
   VAR_23[VAR_1 / 4] & 0xffff,
   (VAR_23[VAR_1 / 4] >> 16) & 0xffff);
 if (VAR_22->caps.has_cstor_reg)
  FUNC_7(VAR_20, "CSTOR:\t0x%08x\n", VAR_23[VAR_7 / 4]);



 FUNC_0(VAR_20, "SR", VAR_23[VAR_17 / 4]);
 FUNC_0(VAR_20, "IMR", VAR_23[VAR_11 / 4]);

 if (VAR_22->caps.has_dma_conf_reg) {
  u32 VAR_25;

  VAR_25 = VAR_23[VAR_8 / 4];
  FUNC_7(VAR_20, "DMA:\t0x%08x OFFSET=%u CHKSIZE=%u%s\n",
    VAR_25, VAR_25 & 3,
    ((VAR_25 >> 4) & 3) ?
     1 << (((VAR_25 >> 4) & 3) + 1) : 1,
    VAR_25 & VAR_9 ? " DMAEN" : "");
 }
 if (VAR_22->caps.has_cfg_reg) {
  u32 VAR_26;

  VAR_26 = VAR_23[VAR_2 / 4];
  FUNC_7(VAR_20, "CFG:\t0x%08x%s%s%s%s\n",
    VAR_26,
    VAR_26 & VAR_4 ? " FIFOMODE_ONE_DATA" : "",
    VAR_26 & VAR_3 ? " FERRCTRL_CLEAR_ON_READ" : "",
    VAR_26 & VAR_5 ? " HSMODE" : "",
    VAR_26 & VAR_6 ? " LSYNC" : "");
 }

 FUNC_1(VAR_23);

 return VAR_24;
}
