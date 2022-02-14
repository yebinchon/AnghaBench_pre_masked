
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcie_service_card {int msix_enable; scalar_t__ msi_enable; } ;
struct mwifiex_adapter {int int_status; scalar_t__ ps_state; int pm_wakeup_fw_try; int cmd_sent; int data_sent; int wakeup_timer; int pps_uapsd_mode; int int_lock; struct pcie_service_card* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_2 (struct mwifiex_adapter*) ;
 scalar_t__ FUNC_3 (struct mwifiex_adapter*) ;
 int FUNC_4 (struct mwifiex_adapter*) ;
 int FUNC_5 (struct mwifiex_adapter*) ;
 int FUNC_6 (struct mwifiex_adapter*) ;
 int FUNC_7 (struct mwifiex_adapter*) ;
 scalar_t__ FUNC_8 (struct mwifiex_adapter*,int ,int*) ;
 scalar_t__ FUNC_9 (struct mwifiex_adapter*,int ,int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct mwifiex_adapter *VAR_9)
{
 int VAR_10;
 u32 VAR_11 = 0;
 unsigned long VAR_12;
 struct pcie_service_card *VAR_13 = VAR_9->card;

 FUNC_10(&VAR_9->int_lock, VAR_12);
 if (!VAR_13->msi_enable) {

  VAR_11 = VAR_9->int_status;
 }
 VAR_9->int_status = 0;
 FUNC_11(&VAR_9->int_lock, VAR_12);

 if (VAR_13->msi_enable) {
  if (FUNC_3(VAR_9)) {
   if (FUNC_8(VAR_9, VAR_6,
          &VAR_11)) {
    FUNC_1(VAR_9, VAR_0,
         "Read register failed\n");
    return -1;
   }

   if ((VAR_11 != 0xFFFFFFFF) && (VAR_11)) {
    if (FUNC_9(VAR_9,
            VAR_6,
            ~VAR_11)) {
     FUNC_1(VAR_9, VAR_0,
          "Write register failed\n");
     return -1;
    }
    if (!VAR_9->pps_uapsd_mode &&
        VAR_9->ps_state == VAR_8) {
     VAR_9->ps_state = VAR_7;
     VAR_9->pm_wakeup_fw_try = 0;
     FUNC_0(&VAR_9->wakeup_timer);
    }
   }
  }
 }

 if (VAR_11 & VAR_2) {
  FUNC_1(VAR_9, VAR_5, "info: TX DNLD Done\n");
  VAR_10 = FUNC_7(VAR_9);
  if (VAR_10)
   return VAR_10;
 }
 if (VAR_11 & VAR_4) {
  FUNC_1(VAR_9, VAR_5, "info: Rx DATA\n");
  VAR_10 = FUNC_6(VAR_9);
  if (VAR_10)
   return VAR_10;
 }
 if (VAR_11 & VAR_3) {
  FUNC_1(VAR_9, VAR_5, "info: Rx EVENT\n");
  VAR_10 = FUNC_5(VAR_9);
  if (VAR_10)
   return VAR_10;
 }
 if (VAR_11 & VAR_1) {
  if (VAR_9->cmd_sent) {
   FUNC_1(VAR_9, VAR_5,
        "info: CMD sent Interrupt\n");
   VAR_9->cmd_sent = 0;
  }

  VAR_10 = FUNC_4(VAR_9);
  if (VAR_10)
   return VAR_10;
 }

 FUNC_1(VAR_9, VAR_5,
      "info: cmd_sent=%d data_sent=%d\n",
      VAR_9->cmd_sent, VAR_9->data_sent);
 if (!VAR_13->msi_enable && !VAR_13->msix_enable &&
     VAR_9->ps_state != VAR_8)
  FUNC_2(VAR_9);

 return 0;
}
