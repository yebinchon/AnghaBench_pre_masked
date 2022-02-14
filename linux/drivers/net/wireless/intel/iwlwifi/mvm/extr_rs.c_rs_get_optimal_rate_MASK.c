
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rs_rate {int index; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_3__ {scalar_t__ last_rssi; } ;
struct iwl_lq_sta {int optimal_rate_mask; int optimal_nentries; TYPE_2__* optimal_rates; TYPE_1__ pers; struct rs_rate optimal_rate; } ;
struct TYPE_4__ {int rate_idx; scalar_t__ rssi; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int*,int ) ;

__attribute__((used)) static struct rs_rate *FUNC_2(struct iwl_mvm *VAR_1,
        struct iwl_lq_sta *VAR_2)
{
 struct rs_rate *VAR_3 = &VAR_2->optimal_rate;
 int VAR_4;

 VAR_3->index = FUNC_1(&VAR_2->optimal_rate_mask,
         VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_2->optimal_nentries; VAR_4++) {
  int VAR_5 = VAR_2->optimal_rates[VAR_4].rate_idx;

  if ((VAR_2->pers.last_rssi >= VAR_2->optimal_rates[VAR_4].rssi) &&
      (FUNC_0(VAR_5) & VAR_2->optimal_rate_mask)) {
   VAR_3->index = VAR_5;
   break;
  }
 }

 return VAR_3;
}
