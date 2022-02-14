
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_thermal_bank {int dummy; } ;
struct mtk_thermal {struct mtk_thermal_bank* banks; TYPE_1__* conf; } ;
struct TYPE_2__ {int num_banks; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct mtk_thermal_bank*) ;
 int FUNC_2 (struct mtk_thermal_bank*) ;
 int FUNC_3 (struct mtk_thermal_bank*) ;

__attribute__((used)) static int FUNC_4(void *VAR_1, int *VAR_2)
{
 struct mtk_thermal *VAR_3 = VAR_1;
 int VAR_4;
 int VAR_5 = VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3->conf->num_banks; VAR_4++) {
  struct mtk_thermal_bank *VAR_6 = &VAR_3->banks[VAR_4];

  FUNC_2(VAR_6);

  VAR_5 = FUNC_0(VAR_5, FUNC_1(VAR_6));

  FUNC_3(VAR_6);
 }

 *VAR_2 = VAR_5;

 return 0;
}
