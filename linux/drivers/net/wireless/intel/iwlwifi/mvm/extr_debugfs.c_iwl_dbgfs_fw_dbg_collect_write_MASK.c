
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int fwrt; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,size_t,int *) ;

__attribute__((used)) static ssize_t FUNC_1(struct iwl_mvm *VAR_1,
           char *VAR_2, size_t VAR_3,
           loff_t *VAR_4)
{
 if (VAR_3 == 0)
  return 0;

 FUNC_0(&VAR_1->fwrt, VAR_0, VAR_2,
      (VAR_3 - 1), ((void*)0));

 return VAR_3;
}
