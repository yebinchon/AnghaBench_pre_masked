
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_sta {int dummy; } ;


 int FUNC_0 (struct iwl_mvm_sta*) ;

__attribute__((used)) static int FUNC_1(struct iwl_mvm_sta *VAR_0,
    struct iwl_mvm_sta *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 > VAR_3)
  return 1;
 if (VAR_2 < VAR_3)
  return -1;
 return 0;
}
