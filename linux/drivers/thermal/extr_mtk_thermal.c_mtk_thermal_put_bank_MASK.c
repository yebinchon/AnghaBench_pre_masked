
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_thermal_bank {struct mtk_thermal* mt; } ;
struct mtk_thermal {int lock; TYPE_1__* conf; } ;
struct TYPE_2__ {scalar_t__ need_switch_bank; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mtk_thermal_bank *VAR_0)
{
 struct mtk_thermal *VAR_1 = VAR_0->mt;

 if (VAR_1->conf->need_switch_bank)
  FUNC_0(&VAR_1->lock);
}
