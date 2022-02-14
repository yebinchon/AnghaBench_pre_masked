
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cfg80211_chan_def {int dummy; } ;
struct TYPE_5__ {int mtx; } ;
struct ath6kl_vif {TYPE_1__ wdev; int ndev; TYPE_2__* ar; int nw_type; } ;
typedef enum wmi_phy_mode { ____Placeholder_wmi_phy_mode } wmi_phy_mode ;
struct TYPE_7__ {scalar_t__ ht_supported; } ;
struct TYPE_8__ {TYPE_3__ ht_cap; } ;
struct TYPE_6__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_0 (int ,char*,int ,int,int) ;
 int FUNC_1 (int ,struct cfg80211_chan_def*) ;
 int FUNC_2 (struct cfg80211_chan_def*,int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct ath6kl_vif *VAR_5, int VAR_6,
          enum wmi_phy_mode VAR_7)
{
 struct cfg80211_chan_def VAR_8;

 FUNC_0(VAR_0,
     "channel switch notify nw_type %d freq %d mode %d\n",
     VAR_5->nw_type, VAR_6, VAR_7);

 FUNC_2(&VAR_8,
    FUNC_3(VAR_5->ar->wiphy, VAR_6),
    (VAR_7 == VAR_3 &&
     VAR_4.ht_cap.ht_supported) ?
     VAR_1 : VAR_2);

 FUNC_4(&VAR_5->wdev.mtx);
 FUNC_1(VAR_5->ndev, &VAR_8);
 FUNC_5(&VAR_5->wdev.mtx);
}
