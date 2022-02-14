
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {unsigned long start_code; unsigned long data_vm; unsigned long stack_vm; unsigned long total_vm; int end_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_1 (struct mm_struct*,int ) ;

unsigned long FUNC_2(struct mm_struct *VAR_5,
    unsigned long *VAR_6, unsigned long *VAR_7,
    unsigned long *VAR_8, unsigned long *VAR_9)
{
 *VAR_6 = FUNC_1(VAR_5, VAR_1) +
   FUNC_1(VAR_5, VAR_2);
 *VAR_7 = (FUNC_0(VAR_5->end_code) - (VAR_5->start_code & VAR_3))
        >> VAR_4;
 *VAR_8 = VAR_5->data_vm + VAR_5->stack_vm;
 *VAR_9 = *VAR_6 + FUNC_1(VAR_5, VAR_0);
 return VAR_5->total_vm;
}
