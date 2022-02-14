
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int original_iset; int wait_cnt; scalar_t__ max_current; scalar_t__ current_iset; int test_delta_i; scalar_t__ condition_cnt; scalar_t__ level; } ;
struct TYPE_7__ {int inst_curr; } ;
struct TYPE_6__ {scalar_t__ vbus_collapsed; } ;
struct abx500_chargalg {TYPE_5__* bm; TYPE_3__ ccm; int dev; TYPE_2__ batt_data; TYPE_1__ events; } ;
typedef enum maxim_ret { ____Placeholder_maxim_ret } maxim_ret ;
struct TYPE_10__ {TYPE_4__* maxi; } ;
struct TYPE_9__ {scalar_t__ wait_cycles; int ena_maxi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static enum maxim_ret FUNC_1(struct abx500_chargalg *VAR_3)
{
 int VAR_4;

 if (!VAR_3->bm->maxi->ena_maxi)
  return VAR_2;

 VAR_4 = VAR_3->ccm.original_iset - VAR_3->batt_data.inst_curr;

 if (VAR_3->events.vbus_collapsed) {
  FUNC_0(VAR_3->dev, "Charger voltage has collapsed %d\n",
    VAR_3->ccm.wait_cnt);
  if (VAR_3->ccm.wait_cnt == 0) {
   FUNC_0(VAR_3->dev, "lowering current\n");
   VAR_3->ccm.wait_cnt++;
   VAR_3->ccm.condition_cnt = VAR_3->bm->maxi->wait_cycles;
   VAR_3->ccm.max_current =
    VAR_3->ccm.current_iset - VAR_3->ccm.test_delta_i;
   VAR_3->ccm.current_iset = VAR_3->ccm.max_current;
   VAR_3->ccm.level--;
   return VAR_0;
  } else {
   FUNC_0(VAR_3->dev, "waiting\n");

   VAR_3->ccm.wait_cnt = (VAR_3->ccm.wait_cnt + 1) % 3;
   return VAR_2;
  }
 }

 VAR_3->ccm.wait_cnt = 0;

 if ((VAR_3->batt_data.inst_curr > VAR_3->ccm.original_iset)) {
  FUNC_0(VAR_3->dev, " Maximization Ibat (%dmA) too high"
   " (limit %dmA) (current iset: %dmA)!\n",
   VAR_3->batt_data.inst_curr, VAR_3->ccm.original_iset,
   VAR_3->ccm.current_iset);

  if (VAR_3->ccm.current_iset == VAR_3->ccm.original_iset)
   return VAR_2;

  VAR_3->ccm.condition_cnt = VAR_3->bm->maxi->wait_cycles;
  VAR_3->ccm.current_iset = VAR_3->ccm.original_iset;
  VAR_3->ccm.level = 0;

  return VAR_1;
 }

 if (VAR_4 > VAR_3->ccm.test_delta_i &&
  (VAR_3->ccm.current_iset + VAR_3->ccm.test_delta_i) <
  VAR_3->ccm.max_current) {
  if (VAR_3->ccm.condition_cnt-- == 0) {

   VAR_3->ccm.condition_cnt = VAR_3->bm->maxi->wait_cycles;
   VAR_3->ccm.current_iset += VAR_3->ccm.test_delta_i;
   VAR_3->ccm.level++;
   FUNC_0(VAR_3->dev, " Maximization needed, increase"
    " with %d mA to %dmA (Optimal ibat: %d)"
    " Level %d\n",
    VAR_3->ccm.test_delta_i,
    VAR_3->ccm.current_iset,
    VAR_3->ccm.original_iset,
    VAR_3->ccm.level);
   return VAR_0;
  } else {
   return VAR_2;
  }
 } else {
  VAR_3->ccm.condition_cnt = VAR_3->bm->maxi->wait_cycles;
  return VAR_2;
 }
}
