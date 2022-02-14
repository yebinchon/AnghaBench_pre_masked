
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rf_reset {scalar_t__ last_reset_jiffies; int reset_success_count; int reset_reject_count; int reset_request_count; } ;
struct iwl_priv {struct iwl_rf_reset rf_reset; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct iwl_priv*) ;
 int FUNC_3 (struct iwl_priv*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

int FUNC_6(struct iwl_priv *VAR_5, bool VAR_6)
{
 struct iwl_rf_reset *VAR_7;

 if (FUNC_4(VAR_3, &VAR_5->status))
  return -VAR_0;

 if (!FUNC_3(VAR_5)) {
  FUNC_1(VAR_5, "force reset rejected: not associated\n");
  return -VAR_1;
 }

 VAR_7 = &VAR_5->rf_reset;
 VAR_7->reset_request_count++;
 if (!VAR_6 && VAR_7->last_reset_jiffies &&
     FUNC_5(VAR_7->last_reset_jiffies +
         VAR_2, VAR_4)) {
  FUNC_0(VAR_5, "RF reset rejected\n");
  VAR_7->reset_reject_count++;
  return -VAR_0;
 }
 VAR_7->reset_success_count++;
 VAR_7->last_reset_jiffies = VAR_4;
 FUNC_0(VAR_5, "perform radio reset.\n");
 FUNC_2(VAR_5);
 return 0;
}
