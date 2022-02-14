
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx23885_tsport {size_t sram_chno; int reg_ts_int_stat; int slock; int mpegq; int reg_gpcnt; int dma_ctl_val; int reg_dma_ctl; struct cx23885_dev* dev; } ;
struct cx23885_dev {int * sram_channels; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cx23885_dev*,int *) ;
 int FUNC_1 (struct cx23885_tsport*,int *,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct cx23885_tsport *VAR_5, u32 VAR_6)
{
 struct cx23885_dev *VAR_7 = VAR_5->dev;
 int VAR_8 = 0;
 u32 VAR_9;

 if ((VAR_6 & VAR_2) ||
  (VAR_6 & VAR_0) ||
  (VAR_6 & VAR_4) ||
  (VAR_6 & VAR_1)) {

  if (VAR_6 & VAR_2)
   FUNC_5(7, " (VID_BC_MSK_OPC_ERR 0x%08x)\n",
    VAR_2);

  if (VAR_6 & VAR_0)
   FUNC_5(7, " (VID_BC_MSK_BAD_PKT 0x%08x)\n",
    VAR_0);

  if (VAR_6 & VAR_4)
   FUNC_5(7, " (VID_BC_MSK_SYNC    0x%08x)\n",
    VAR_4);

  if (VAR_6 & VAR_1)
   FUNC_5(7, " (VID_BC_MSK_OF      0x%08x)\n",
    VAR_1);

  FUNC_6("%s: mpeg risc op code error\n", VAR_7->name);

  FUNC_2(VAR_5->reg_dma_ctl, VAR_5->dma_ctl_val);
  FUNC_0(VAR_7,
   &VAR_7->sram_channels[VAR_5->sram_chno]);

 } else if (VAR_6 & VAR_3) {

  FUNC_5(7, " (RISCI1            0x%08x)\n", VAR_3);

  FUNC_7(&VAR_5->slock);
  VAR_9 = FUNC_3(VAR_5->reg_gpcnt);
  FUNC_1(VAR_5, &VAR_5->mpegq, VAR_9);
  FUNC_8(&VAR_5->slock);

 }
 if (VAR_6) {
  FUNC_4(VAR_5->reg_ts_int_stat, VAR_6);
  VAR_8 = 1;
 }

 return VAR_8;
}
