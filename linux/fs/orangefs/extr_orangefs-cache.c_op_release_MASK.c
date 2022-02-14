
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orangefs_kernel_op_s {int tag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct orangefs_kernel_op_s*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,struct orangefs_kernel_op_s*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

void FUNC_4(struct orangefs_kernel_op_s *VAR_2)
{
 if (VAR_2) {
  FUNC_0(VAR_0,
        "Releasing OP (%p: %llu)\n",
        VAR_2,
        FUNC_3(VAR_2->tag));
  FUNC_2(VAR_1, VAR_2);
 } else {
  FUNC_1("NULL pointer in op_release\n");
 }
}
