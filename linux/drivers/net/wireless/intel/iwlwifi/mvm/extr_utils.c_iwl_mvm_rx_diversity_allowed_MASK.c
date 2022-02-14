
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {int hw; TYPE_1__* cfg; int mutex; } ;
struct TYPE_2__ {scalar_t__ rx_with_siso_diversity; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

bool FUNC_4(struct iwl_mvm *VAR_2)
{
 bool VAR_3 = 1;

 FUNC_2(&VAR_2->mutex);

 if (FUNC_3(FUNC_1(VAR_2)) == 1)
  return 0;

 if (VAR_2->cfg->rx_with_siso_diversity)
  return 0;

 FUNC_0(
   VAR_2->hw, VAR_0,
   VAR_1, &VAR_3);

 return VAR_3;
}
