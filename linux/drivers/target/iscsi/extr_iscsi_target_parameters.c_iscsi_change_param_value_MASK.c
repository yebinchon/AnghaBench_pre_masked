
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_param_list {int dummy; } ;
struct iscsi_param {int set_param; } ;


 struct iscsi_param* FUNC_0 (char*,int,struct iscsi_param_list*) ;
 struct iscsi_param* FUNC_1 (char*,int ,int,struct iscsi_param_list*) ;
 scalar_t__ FUNC_2 (struct iscsi_param*,char*) ;
 scalar_t__ FUNC_3 (char*,char**,char**) ;
 scalar_t__ FUNC_4 (struct iscsi_param*,char*) ;

int FUNC_5(
 char *VAR_0,
 struct iscsi_param_list *VAR_1,
 int VAR_2)
{
 char *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
 struct iscsi_param *VAR_5;
 int VAR_6 = 0;

 if (FUNC_3(VAR_0, &VAR_3, &VAR_4) < 0)
  return -1;

 if (!VAR_2) {
  VAR_5 = FUNC_0(VAR_0, VAR_6, VAR_1);
  if (!VAR_5)
   return -1;
 } else {
  VAR_5 = FUNC_1(VAR_0, 0, VAR_6, VAR_1);
  if (!VAR_5)
   return -1;

  VAR_5->set_param = 1;
  if (FUNC_2(VAR_5, VAR_4) < 0) {
   VAR_5->set_param = 0;
   return -1;
  }
  VAR_5->set_param = 0;
 }

 if (FUNC_4(VAR_5, VAR_4) < 0)
  return -1;

 return 0;
}
