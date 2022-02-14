
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl022 {int virtbase; TYPE_1__* vendor; struct chip_data* cur_chip; } ;
struct chip_data {int cpsr; int dmacr; int cr1; int cr0; } ;
struct TYPE_2__ {scalar_t__ extended_cr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct pl022 *VAR_2)
{
 struct chip_data *VAR_3 = VAR_2->cur_chip;

 if (VAR_2->vendor->extended_cr)
  FUNC_6(VAR_3->cr0, FUNC_1(VAR_2->virtbase));
 else
  FUNC_7(VAR_3->cr0, FUNC_1(VAR_2->virtbase));
 FUNC_7(VAR_3->cr1, FUNC_2(VAR_2->virtbase));
 FUNC_7(VAR_3->dmacr, FUNC_3(VAR_2->virtbase));
 FUNC_7(VAR_3->cpsr, FUNC_0(VAR_2->virtbase));
 FUNC_7(VAR_1, FUNC_5(VAR_2->virtbase));
 FUNC_7(VAR_0, FUNC_4(VAR_2->virtbase));
}
