
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgx {int cgx_cmd_work; int cgx_cmd_workq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

int FUNC_1(void *VAR_1)
{
 struct cgx *VAR_2 = VAR_1;

 if (!VAR_2)
  return -VAR_0;

 FUNC_0(VAR_2->cgx_cmd_workq, &VAR_2->cgx_cmd_work);

 return 0;
}
