
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct alcor_sdmmc_host {int irq_status_sd; int cmd_mutex; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct alcor_sdmmc_host*,int) ;
 int FUNC_1 (struct alcor_sdmmc_host*,int) ;
 int FUNC_2 (struct alcor_sdmmc_host*,int) ;
 int FUNC_3 (struct alcor_sdmmc_host*,int) ;
 int FUNC_4 (struct alcor_sdmmc_host*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_9, void *VAR_10)
{
 struct alcor_sdmmc_host *VAR_11 = VAR_10;
 irqreturn_t VAR_12 = VAR_7;
 u32 VAR_13, VAR_14;

 FUNC_7(&VAR_11->cmd_mutex);

 VAR_13 = VAR_11->irq_status_sd;


 if (FUNC_9(!VAR_13 || VAR_0 == VAR_13)) {
  FUNC_5(VAR_11->dev, "unexpected IRQ: 0x%04x\n", VAR_13);
  VAR_12 = VAR_8;
  goto exit;
 }

 VAR_14 = VAR_13 & (VAR_3 | VAR_4);
 if (VAR_14) {
  if (VAR_14 & VAR_5)
   FUNC_3(VAR_11, VAR_14);
  else {
   FUNC_1(VAR_11, VAR_14);
   FUNC_2(VAR_11, VAR_14);
  }
  VAR_13 &= ~(VAR_3 | VAR_4);
 }

 if (VAR_13 & (VAR_1 | VAR_2)) {
  FUNC_0(VAR_11, VAR_13);
  VAR_13 &= ~(VAR_1 | VAR_2);
 }

 if (VAR_13 & VAR_6) {
  FUNC_6(VAR_11->dev,
    "warning: over current detected!\n");
  VAR_13 &= ~VAR_6;
 }

 if (VAR_13)
  FUNC_5(VAR_11->dev, "got not handled IRQ: 0x%04x\n", VAR_13);

exit:
 FUNC_8(&VAR_11->cmd_mutex);
 FUNC_4(VAR_11);
 return VAR_12;
}
