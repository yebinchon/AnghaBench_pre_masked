
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm {int bt_tx_prio; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 size_t VAR_0 ;
 int FUNC_0 (char*,char*,int*) ;

__attribute__((used)) static ssize_t
FUNC_1(struct iwl_mvm *VAR_1, char *VAR_2,
      size_t VAR_3, loff_t *VAR_4)
{
 u32 VAR_5;

 if (FUNC_0(VAR_2, "%u", &VAR_5) != 1)
  return -VAR_0;
 if (VAR_5 > 4)
  return -VAR_0;

 VAR_1->bt_tx_prio = VAR_5;

 return VAR_3;
}
