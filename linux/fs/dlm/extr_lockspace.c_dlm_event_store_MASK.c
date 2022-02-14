
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {int ls_uevent_wait; int ls_flags; int ls_uevent_result; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct dlm_ls *VAR_1, const char *VAR_2, size_t VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2, 0, &VAR_1->ls_uevent_result);

 if (VAR_4)
  return VAR_4;
 FUNC_1(VAR_0, &VAR_1->ls_flags);
 FUNC_2(&VAR_1->ls_uevent_wait);
 return VAR_3;
}
