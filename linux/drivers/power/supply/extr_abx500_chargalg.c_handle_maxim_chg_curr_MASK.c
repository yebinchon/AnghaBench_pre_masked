
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int current_iset; } ;
struct abx500_chargalg {int dev; TYPE_3__* bm; TYPE_1__ ccm; } ;
typedef enum maxim_ret { ____Placeholder_maxim_ret } maxim_ret ;
struct TYPE_6__ {size_t batt_id; TYPE_2__* bat_type; } ;
struct TYPE_5__ {int normal_cur_lvl; } ;





 int FUNC_0 (struct abx500_chargalg*) ;
 int FUNC_1 (struct abx500_chargalg*,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct abx500_chargalg *VAR_0)
{
 enum maxim_ret VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0);
 switch (VAR_1) {
 case 130:
  VAR_2 = FUNC_1(VAR_0,
   VAR_0->ccm.current_iset);
  if (VAR_2)
   FUNC_2(VAR_0->dev, "failed to set chg curr\n");
  break;
 case 129:
  VAR_2 = FUNC_1(VAR_0,
   VAR_0->bm->bat_type[VAR_0->bm->batt_id].normal_cur_lvl);
  if (VAR_2)
   FUNC_2(VAR_0->dev, "failed to set chg curr\n");
  break;

 case 128:
 default:

  break;
 }
}
