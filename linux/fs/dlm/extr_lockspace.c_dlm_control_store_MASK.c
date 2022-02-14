
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {int ls_local_handle; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct dlm_ls* FUNC_0 (int ) ;
 int FUNC_1 (struct dlm_ls*) ;
 int FUNC_2 (struct dlm_ls*) ;
 int FUNC_3 (struct dlm_ls*) ;
 int FUNC_4 (char const*,int ,int*) ;

__attribute__((used)) static ssize_t FUNC_5(struct dlm_ls *VAR_1, const char *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4 = VAR_3;
 int VAR_5;
 int VAR_6 = FUNC_4(VAR_2, 0, &VAR_5);

 if (VAR_6)
  return VAR_6;
 VAR_1 = FUNC_0(VAR_1->ls_local_handle);
 if (!VAR_1)
  return -VAR_0;

 switch (VAR_5) {
 case 0:
  FUNC_2(VAR_1);
  break;
 case 1:
  FUNC_1(VAR_1);
  break;
 default:
  VAR_4 = -VAR_0;
 }
 FUNC_3(VAR_1);
 return VAR_4;
}
