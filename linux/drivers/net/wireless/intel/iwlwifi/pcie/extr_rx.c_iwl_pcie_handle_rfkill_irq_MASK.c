
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isr_statistics {int rfkill; } ;
struct iwl_trans_pcie {scalar_t__ opmode_down; int wait_command_queue; int mutex; struct isr_statistics isr_stats; } ;
struct iwl_trans {int status; } ;


 int FUNC_0 (struct iwl_trans*,char*) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (struct iwl_trans*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct iwl_trans *VAR_3)
{
 struct iwl_trans_pcie *VAR_4 = FUNC_1(VAR_3);
 struct isr_statistics *VAR_5 = &VAR_4->isr_stats;
 bool VAR_6, VAR_7, VAR_8;

 FUNC_6(&VAR_4->mutex);
 VAR_7 = FUNC_10(VAR_1, &VAR_3->status);
 VAR_6 = FUNC_4(VAR_3);
 if (VAR_6) {
  FUNC_8(VAR_1, &VAR_3->status);
  FUNC_8(VAR_0, &VAR_3->status);
 }
 if (VAR_4->opmode_down)
  VAR_8 = VAR_6;
 else
  VAR_8 = FUNC_10(VAR_1, &VAR_3->status);

 FUNC_2(VAR_3, "RF_KILL bit toggled to %s.\n",
   VAR_6 ? "disable radio" : "enable radio");

 VAR_5->rfkill++;

 if (VAR_7 != VAR_8)
  FUNC_5(VAR_3, VAR_8);
 FUNC_7(&VAR_4->mutex);

 if (VAR_6) {
  if (FUNC_9(VAR_2,
           &VAR_3->status))
   FUNC_0(VAR_3,
       "Rfkill while SYNC HCMD in flight\n");
  FUNC_11(&VAR_4->wait_command_queue);
 } else {
  FUNC_3(VAR_0, &VAR_3->status);
  if (VAR_4->opmode_down)
   FUNC_3(VAR_1, &VAR_3->status);
 }
}
