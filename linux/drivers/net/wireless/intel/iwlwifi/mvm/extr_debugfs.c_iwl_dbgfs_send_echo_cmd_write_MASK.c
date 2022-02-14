
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int mutex; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct iwl_mvm*) ;
 int FUNC_1 (struct iwl_mvm*,int ,int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t
FUNC_4(struct iwl_mvm *VAR_2, char *VAR_3,
         size_t VAR_4, loff_t *VAR_5)
{
 int VAR_6;

 if (!FUNC_0(VAR_2))
  return -VAR_1;

 FUNC_2(&VAR_2->mutex);
 VAR_6 = FUNC_1(VAR_2, VAR_0, 0, 0, ((void*)0));
 FUNC_3(&VAR_2->mutex);

 return VAR_6 ?: VAR_4;
}
