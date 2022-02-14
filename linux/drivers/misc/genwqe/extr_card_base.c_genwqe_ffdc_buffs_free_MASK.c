
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct genwqe_dev {TYPE_1__* ffdc; } ;
struct TYPE_2__ {int * regs; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct genwqe_dev *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(VAR_1->ffdc[VAR_2].regs);
  VAR_1->ffdc[VAR_2].regs = ((void*)0);
 }
}
