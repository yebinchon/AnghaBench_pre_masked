
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {int ls_global_id; } ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int ,int *) ;

__attribute__((used)) static ssize_t FUNC_1(struct dlm_ls *VAR_0, const char *VAR_1, size_t VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1, 0, &VAR_0->ls_global_id);

 if (VAR_3)
  return VAR_3;
 return VAR_2;
}
