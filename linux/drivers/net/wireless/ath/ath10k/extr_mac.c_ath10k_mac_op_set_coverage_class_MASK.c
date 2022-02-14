
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_hw {struct ath10k* priv; } ;
struct TYPE_4__ {TYPE_1__* hw_ops; } ;
struct ath10k {TYPE_2__ hw_params; } ;
typedef int s16 ;
struct TYPE_3__ {int (* set_coverage_class ) (struct ath10k*,int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,int ) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_0, s16 VAR_1)
{
 struct ath10k *VAR_2 = VAR_0->priv;




 if (!VAR_2->hw_params.hw_ops->set_coverage_class) {
  FUNC_0(1);
  return;
 }
 VAR_2->hw_params.hw_ops->set_coverage_class(VAR_2, VAR_1);
}
