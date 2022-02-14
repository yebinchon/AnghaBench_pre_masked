
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {int ls_flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,int*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_2(struct dlm_ls *VAR_1, const char *VAR_2, size_t VAR_3)
{
 int VAR_4;
 int VAR_5 = FUNC_0(VAR_2, 0, &VAR_4);

 if (VAR_5)
  return VAR_5;
 if (VAR_4 == 1)
  FUNC_1(VAR_0, &VAR_1->ls_flags);
 return VAR_3;
}
