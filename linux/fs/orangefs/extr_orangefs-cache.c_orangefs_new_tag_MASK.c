
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orangefs_kernel_op_s {scalar_t__ tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct orangefs_kernel_op_s *VAR_2)
{
 FUNC_0(&VAR_1);
 VAR_2->tag = VAR_0++;
 if (VAR_0 == 0)
  VAR_0 = 100;
 FUNC_1(&VAR_1);
}
