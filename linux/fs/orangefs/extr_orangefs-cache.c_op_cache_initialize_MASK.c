
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orangefs_kernel_op_s {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(void)
{
 VAR_4 = FUNC_1("orangefs_op_cache",
         sizeof(struct orangefs_kernel_op_s),
         0,
         VAR_1,
         ((void*)0));

 if (!VAR_4) {
  FUNC_0("Cannot create orangefs_op_cache\n");
  return -VAR_0;
 }


 FUNC_2(&VAR_3);
 VAR_2 = 100;
 FUNC_3(&VAR_3);
 return 0;
}
