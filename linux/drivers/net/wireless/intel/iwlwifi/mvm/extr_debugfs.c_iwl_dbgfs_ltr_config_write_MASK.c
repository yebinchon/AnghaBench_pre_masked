
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int mutex; } ;
struct iwl_ltr_config_cmd {int * ltr_cfg_values; int static_short; int static_long; int flags; int member_0; } ;
typedef size_t ssize_t ;
typedef int ltr_config ;
typedef int loff_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (struct iwl_mvm*,int ,int ,int,struct iwl_ltr_config_cmd*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int *,int *,int *,int *,int *,int *,int *) ;

__attribute__((used)) static ssize_t
FUNC_6(struct iwl_mvm *VAR_3,
      char *VAR_4, size_t VAR_5, loff_t *VAR_6)
{
 int VAR_7;
 struct iwl_ltr_config_cmd VAR_8 = {0};

 if (!FUNC_1(VAR_3))
  return -VAR_1;

 if (FUNC_5(VAR_4, "%x,%x,%x,%x,%x,%x,%x",
     &VAR_8.flags,
     &VAR_8.static_long,
     &VAR_8.static_short,
     &VAR_8.ltr_cfg_values[0],
     &VAR_8.ltr_cfg_values[1],
     &VAR_8.ltr_cfg_values[2],
     &VAR_8.ltr_cfg_values[3]) != 7) {
  return -VAR_0;
 }

 FUNC_3(&VAR_3->mutex);
 VAR_7 = FUNC_2(VAR_3, VAR_2, 0, sizeof(VAR_8),
       &VAR_8);
 FUNC_4(&VAR_3->mutex);

 if (VAR_7)
  FUNC_0(VAR_3, "failed to send ltr configuration cmd\n");

 return VAR_7 ?: VAR_5;
}
