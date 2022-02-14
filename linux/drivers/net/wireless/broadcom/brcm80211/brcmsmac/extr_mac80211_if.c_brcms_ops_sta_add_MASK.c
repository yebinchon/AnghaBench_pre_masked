
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int max_pdu; struct scb* scb; } ;
struct scb {TYPE_2__ scb_ampdu; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {struct brcms_info* priv; } ;
struct brcms_info {TYPE_3__* pub; TYPE_1__* wlc; } ;
struct TYPE_6__ {TYPE_2__* global_ampdu; } ;
struct TYPE_4__ {struct scb pri_scb; } ;


 int FUNC_0 (struct scb*) ;

__attribute__((used)) static int
FUNC_1(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1,
        struct ieee80211_sta *VAR_2)
{
 struct brcms_info *VAR_3 = VAR_0->priv;
 struct scb *VAR_4 = &VAR_3->wlc->pri_scb;

 FUNC_0(VAR_4);

 VAR_3->pub->global_ampdu = &(VAR_4->scb_ampdu);
 VAR_3->pub->global_ampdu->scb = VAR_4;
 VAR_3->pub->global_ampdu->max_pdu = 16;





 return 0;
}
