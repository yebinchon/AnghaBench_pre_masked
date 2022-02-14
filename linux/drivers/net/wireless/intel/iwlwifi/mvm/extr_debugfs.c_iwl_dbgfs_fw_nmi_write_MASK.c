
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int trans; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iwl_mvm*) ;

__attribute__((used)) static ssize_t FUNC_2(struct iwl_mvm *VAR_1, char *VAR_2,
          size_t VAR_3, loff_t *VAR_4)
{
 if (!FUNC_1(VAR_1))
  return -VAR_0;

 FUNC_0(VAR_1->trans);

 return VAR_3;
}
