
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int charger_type; } ;
struct abx500_chargalg {int charge_state; TYPE_5__* bm; TYPE_6__* ac_chg; TYPE_2__ chg_info; TYPE_7__* usb_chg; } ;
struct TYPE_8__ {int (* check_enable ) (TYPE_7__*,int ,int ) ;} ;
struct TYPE_14__ {TYPE_1__ ops; } ;
struct TYPE_10__ {int (* check_enable ) (TYPE_6__*,int ,int ) ;} ;
struct TYPE_13__ {TYPE_3__ ops; int external; } ;
struct TYPE_12__ {size_t batt_id; TYPE_4__* bat_type; } ;
struct TYPE_11__ {int normal_cur_lvl; int normal_vol_lvl; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (TYPE_7__*,int ,int ) ;
 int FUNC_1 (TYPE_6__*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct abx500_chargalg *VAR_2)
{
 switch (VAR_2->charge_state) {
 case 128:
 case 130:
 case 129:
  break;
 default:
  return 0;
 }

 if (VAR_2->chg_info.charger_type & VAR_1) {
  return VAR_2->usb_chg->ops.check_enable(VAR_2->usb_chg,
                         VAR_2->bm->bat_type[VAR_2->bm->batt_id].normal_vol_lvl,
                         VAR_2->bm->bat_type[VAR_2->bm->batt_id].normal_cur_lvl);
 } else if ((VAR_2->chg_info.charger_type & VAR_0) &&
     !(VAR_2->ac_chg->external)) {
  return VAR_2->ac_chg->ops.check_enable(VAR_2->ac_chg,
                         VAR_2->bm->bat_type[VAR_2->bm->batt_id].normal_vol_lvl,
                         VAR_2->bm->bat_type[VAR_2->bm->batt_id].normal_cur_lvl);
 }
 return 0;
}
