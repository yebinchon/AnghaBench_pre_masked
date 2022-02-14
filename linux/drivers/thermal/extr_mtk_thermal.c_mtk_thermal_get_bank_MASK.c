
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_thermal_bank {int id; struct mtk_thermal* mt; } ;
struct mtk_thermal {scalar_t__ thermal_base; int lock; TYPE_1__* conf; } ;
struct TYPE_2__ {scalar_t__ need_switch_bank; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mtk_thermal_bank *VAR_1)
{
 struct mtk_thermal *VAR_2 = VAR_1->mt;
 u32 VAR_3;

 if (VAR_2->conf->need_switch_bank) {
  FUNC_0(&VAR_2->lock);

  VAR_3 = FUNC_1(VAR_2->thermal_base + VAR_0);
  VAR_3 &= ~0xf;
  VAR_3 |= VAR_1->id;
  FUNC_2(VAR_3, VAR_2->thermal_base + VAR_0);
 }
}
