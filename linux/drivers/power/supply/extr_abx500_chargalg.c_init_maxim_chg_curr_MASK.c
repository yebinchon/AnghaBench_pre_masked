
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ level; int condition_cnt; int max_current; int test_delta_i; int current_iset; int original_iset; } ;
struct abx500_chargalg {TYPE_4__ ccm; TYPE_3__* bm; } ;
struct TYPE_7__ {size_t batt_id; TYPE_2__* maxi; TYPE_1__* bat_type; } ;
struct TYPE_6__ {int wait_cycles; int chg_curr; int charger_curr_step; } ;
struct TYPE_5__ {int normal_cur_lvl; } ;



__attribute__((used)) static void FUNC_0(struct abx500_chargalg *VAR_0)
{
 VAR_0->ccm.original_iset =
  VAR_0->bm->bat_type[VAR_0->bm->batt_id].normal_cur_lvl;
 VAR_0->ccm.current_iset =
  VAR_0->bm->bat_type[VAR_0->bm->batt_id].normal_cur_lvl;
 VAR_0->ccm.test_delta_i = VAR_0->bm->maxi->charger_curr_step;
 VAR_0->ccm.max_current = VAR_0->bm->maxi->chg_curr;
 VAR_0->ccm.condition_cnt = VAR_0->bm->maxi->wait_cycles;
 VAR_0->ccm.level = 0;
}
