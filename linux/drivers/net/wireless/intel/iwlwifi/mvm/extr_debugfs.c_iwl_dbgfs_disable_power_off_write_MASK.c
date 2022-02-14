
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int disable_power_off; int disable_power_off_d3; int mutex; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct iwl_mvm*) ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int*) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct iwl_mvm *VAR_2, char *VAR_3,
       size_t VAR_4, loff_t *VAR_5)
{
 int VAR_6, VAR_7;

 if (!FUNC_0(VAR_2))
  return -VAR_1;

 if (!FUNC_5("disable_power_off_d0=", VAR_3, 21)) {
  if (FUNC_4(VAR_3 + 21, "%d", &VAR_7) != 1)
   return -VAR_0;
  VAR_2->disable_power_off = VAR_7;
 } else if (!FUNC_5("disable_power_off_d3=", VAR_3, 21)) {
  if (FUNC_4(VAR_3 + 21, "%d", &VAR_7) != 1)
   return -VAR_0;
  VAR_2->disable_power_off_d3 = VAR_7;
 } else {
  return -VAR_0;
 }

 FUNC_2(&VAR_2->mutex);
 VAR_6 = FUNC_1(VAR_2);
 FUNC_3(&VAR_2->mutex);

 return VAR_6 ?: VAR_4;
}
