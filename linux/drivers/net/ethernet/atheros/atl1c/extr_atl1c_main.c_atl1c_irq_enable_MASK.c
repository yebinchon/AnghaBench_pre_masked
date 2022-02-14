
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int intr_mask; } ;
struct atl1c_adapter {TYPE_1__ hw; int irq_sem; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct atl1c_adapter *VAR_2)
{
 if (FUNC_3(FUNC_2(&VAR_2->irq_sem))) {
  FUNC_1(&VAR_2->hw, VAR_1, 0x7FFFFFFF);
  FUNC_1(&VAR_2->hw, VAR_0, VAR_2->hw.intr_mask);
  FUNC_0(&VAR_2->hw);
 }
}
