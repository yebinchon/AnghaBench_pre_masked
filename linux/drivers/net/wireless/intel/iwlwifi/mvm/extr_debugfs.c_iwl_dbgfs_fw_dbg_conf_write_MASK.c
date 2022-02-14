
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int mutex; int fwrt; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (struct iwl_mvm*) ;
 int FUNC_3 (char*,int ,unsigned int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct iwl_mvm *VAR_3,
        char *VAR_4, size_t VAR_5,
        loff_t *VAR_6)
{
 unsigned int VAR_7;
 int VAR_8;

 if (!FUNC_2(VAR_3))
  return -VAR_1;

 VAR_8 = FUNC_3(VAR_4, 0, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (FUNC_0(VAR_7 >= VAR_2))
  return -VAR_0;

 FUNC_4(&VAR_3->mutex);
 VAR_8 = FUNC_1(&VAR_3->fwrt, VAR_7);
 FUNC_5(&VAR_3->mutex);

 return VAR_8 ?: VAR_5;
}
