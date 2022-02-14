
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orangefs_kernel_op_s {int list; int tag; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_2(struct orangefs_kernel_op_s *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2->tag, VAR_0);

 FUNC_1(&VAR_2->list, &VAR_1[VAR_3]);
}
