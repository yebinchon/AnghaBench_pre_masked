
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx23885_tsport {size_t sram_chno; int reg_ts_int_stat; int slock; int mpegq; int dma_ctl_val; int reg_dma_ctl; int reg_ts_int_msk; int reg_gpcnt; } ;
struct cx23885_dev {int * sram_channels; int name; struct cx23885_tsport ts1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cx23885_dev*) ;
 int FUNC_1 (struct cx23885_dev*,int *) ;
 int FUNC_2 (struct cx23885_tsport*,int *,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct cx23885_dev *VAR_8, u32 VAR_9)
{

 struct cx23885_tsport *VAR_10 = &VAR_8->ts1;
 int VAR_11 = 0;
 int VAR_12 = 0;

 if (VAR_9 == 0)
  return VAR_12;

 VAR_11 = FUNC_4(VAR_10->reg_gpcnt);
 FUNC_6(7, "status: 0x%08x  mask: 0x%08x count: 0x%x\n",
  VAR_9, FUNC_4(VAR_10->reg_ts_int_msk), VAR_11);

 if ((VAR_9 & VAR_0) ||
  (VAR_9 & VAR_2) ||
  (VAR_9 & VAR_6) ||
  (VAR_9 & VAR_4) ||
  (VAR_9 & VAR_7) ||
  (VAR_9 & VAR_1) ||
  (VAR_9 & VAR_5)) {
  FUNC_7("%s: V4L mpeg risc op code error, status = 0x%x\n",
         VAR_8->name, VAR_9);
  if (VAR_9 & VAR_0)
   FUNC_6(1, "        VID_B_MSK_BAD_PKT\n");
  if (VAR_9 & VAR_2)
   FUNC_6(1, "        VID_B_MSK_OPC_ERR\n");
  if (VAR_9 & VAR_6)
   FUNC_6(1, "        VID_B_MSK_VBI_OPC_ERR\n");
  if (VAR_9 & VAR_4)
   FUNC_6(1, "        VID_B_MSK_SYNC\n");
  if (VAR_9 & VAR_7)
   FUNC_6(1, "        VID_B_MSK_VBI_SYNC\n");
  if (VAR_9 & VAR_1)
   FUNC_6(1, "        VID_B_MSK_OF\n");
  if (VAR_9 & VAR_5)
   FUNC_6(1, "        VID_B_MSK_VBI_OF\n");

  FUNC_3(VAR_10->reg_dma_ctl, VAR_10->dma_ctl_val);
  FUNC_1(VAR_8,
   &VAR_8->sram_channels[VAR_10->sram_chno]);
  FUNC_0(VAR_8);
 } else if (VAR_9 & VAR_3) {
  FUNC_6(7, "        VID_B_MSK_RISCI1\n");
  FUNC_8(&VAR_10->slock);
  FUNC_2(VAR_10, &VAR_10->mpegq, VAR_11);
  FUNC_9(&VAR_10->slock);
 }
 if (VAR_9) {
  FUNC_5(VAR_10->reg_ts_int_stat, VAR_9);
  VAR_12 = 1;
 }

 return VAR_12;
}
