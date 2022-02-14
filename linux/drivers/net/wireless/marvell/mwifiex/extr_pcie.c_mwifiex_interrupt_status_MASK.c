
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcie_service_card {scalar_t__ msix_enable; scalar_t__ msi_enable; } ;
struct mwifiex_adapter {int int_status; scalar_t__ ps_state; int pm_wakeup_fw_try; int int_lock; int wakeup_timer; int pps_uapsd_mode; struct pcie_service_card* card; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_3 (struct mwifiex_adapter*) ;
 scalar_t__ FUNC_4 (struct mwifiex_adapter*) ;
 scalar_t__ FUNC_5 (struct mwifiex_adapter*,int ,int*) ;
 scalar_t__ FUNC_6 (struct mwifiex_adapter*,int ,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct mwifiex_adapter *VAR_5,
         int VAR_6)
{
 u32 VAR_7;
 unsigned long VAR_8;
 struct pcie_service_card *VAR_9 = VAR_5->card;

 if (VAR_9->msi_enable) {
  FUNC_7(&VAR_5->int_lock, VAR_8);
  VAR_5->int_status = 1;
  FUNC_8(&VAR_5->int_lock, VAR_8);
  return;
 }

 if (!FUNC_4(VAR_5))
  return;

 if (VAR_9->msix_enable && VAR_6 >= 0) {
  VAR_7 = FUNC_0(VAR_6);
 } else {
  if (FUNC_5(VAR_5, VAR_2,
         &VAR_7)) {
   FUNC_2(VAR_5, VAR_0, "Read register failed\n");
   return;
  }

  if ((VAR_7 == 0xFFFFFFFF) || !VAR_7)
   return;


  FUNC_3(VAR_5);


  if (FUNC_6(VAR_5, VAR_2,
          ~VAR_7)) {
   FUNC_2(VAR_5, VAR_0,
        "Write register failed\n");
   return;
  }
 }

 if (!VAR_5->pps_uapsd_mode &&
     VAR_5->ps_state == VAR_4 &&
     FUNC_4(VAR_5)) {




  VAR_5->ps_state = VAR_3;
  VAR_5->pm_wakeup_fw_try = 0;
  FUNC_1(&VAR_5->wakeup_timer);
 }

 FUNC_7(&VAR_5->int_lock, VAR_8);
 VAR_5->int_status |= VAR_7;
 FUNC_8(&VAR_5->int_lock, VAR_8);
 FUNC_2(VAR_5, VAR_1, "ireg: 0x%08x\n", VAR_7);
}
