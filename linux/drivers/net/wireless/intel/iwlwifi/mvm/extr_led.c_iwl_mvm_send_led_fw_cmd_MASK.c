
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int dummy; } ;
struct iwl_led_cmd {int status; } ;
struct iwl_host_cmd {int flags; int data; int len; int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct iwl_mvm*) ;
 int FUNC_4 (struct iwl_mvm*,struct iwl_host_cmd*) ;

__attribute__((used)) static void FUNC_5(struct iwl_mvm *VAR_3, bool VAR_4)
{
 struct iwl_led_cmd VAR_5 = {
  .status = FUNC_2(VAR_4),
 };
 struct iwl_host_cmd VAR_6 = {
  .id = FUNC_1(VAR_2, VAR_1),
  .len = sizeof(VAR_5), 
  .data = &VAR_5, 
  .flags = VAR_0,
 };
 int VAR_7;

 if (!FUNC_3(VAR_3))
  return;

 VAR_7 = FUNC_4(VAR_3, &VAR_6);

 if (VAR_7)
  FUNC_0(VAR_3, "LED command failed: %d\n", VAR_7);
}
