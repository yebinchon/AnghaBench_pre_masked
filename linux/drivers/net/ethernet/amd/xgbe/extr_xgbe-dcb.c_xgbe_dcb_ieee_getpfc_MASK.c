
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tc_cnt; } ;
struct xgbe_prv_data {TYPE_2__* pfc; TYPE_1__ hw_feat; } ;
struct net_device {int dummy; } ;
struct ieee_pfc {int delay; int mbc; int pfc_en; int pfc_cap; } ;
struct TYPE_4__ {int delay; int mbc; int pfc_en; } ;


 struct xgbe_prv_data* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
    struct ieee_pfc *VAR_1)
{
 struct xgbe_prv_data *VAR_2 = FUNC_0(VAR_0);


 VAR_1->pfc_cap = VAR_2->hw_feat.tc_cnt;

 if (VAR_2->pfc) {
  VAR_1->pfc_en = VAR_2->pfc->pfc_en;
  VAR_1->mbc = VAR_2->pfc->mbc;
  VAR_1->delay = VAR_2->pfc->delay;
 }

 return 0;
}
