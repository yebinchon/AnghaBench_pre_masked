
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pch_dev {TYPE_1__* regs; } ;
struct TYPE_2__ {int stl_max_set_en; int stl_max_set; } ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static void FUNC_1(struct pch_dev *VAR_0)
{
 FUNC_0(0x01, &VAR_0->regs->stl_max_set_en);
 FUNC_0(0xFFFFFFFF, &VAR_0->regs->stl_max_set);
 FUNC_0(0x00, &VAR_0->regs->stl_max_set_en);
}
