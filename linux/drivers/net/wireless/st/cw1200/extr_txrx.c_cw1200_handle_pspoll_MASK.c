
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_sta {int drv_priv; } ;
struct ieee80211_pspoll {int ta; int bssid; } ;
struct cw1200_sta_priv {int link_id; } ;
struct cw1200_common {scalar_t__ join_status; int * tx_queue; int pspoll_mask; TYPE_1__* vif; } ;
struct TYPE_2__ {int addr; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cw1200_common*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 struct ieee80211_sta* FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct cw1200_common *VAR_2,
    struct sk_buff *VAR_3)
{
 struct ieee80211_sta *VAR_4;
 struct ieee80211_pspoll *VAR_5 = (struct ieee80211_pspoll *)VAR_3->data;
 int VAR_6 = 0;
 u32 VAR_7 = 0;
 int VAR_8 = 1;
 int VAR_9;

 if (VAR_2->join_status != VAR_0)
  goto done;
 if (FUNC_4(VAR_2->vif->addr, VAR_5->bssid, VAR_1))
  goto done;

 FUNC_6();
 VAR_4 = FUNC_3(VAR_2->vif, VAR_5->ta);
 if (VAR_4) {
  struct cw1200_sta_priv *VAR_10;
  VAR_10 = (struct cw1200_sta_priv *)&VAR_4->drv_priv;
  VAR_6 = VAR_10->link_id;
  VAR_7 = FUNC_0(VAR_10->link_id);
 }
 FUNC_7();
 if (!VAR_6)
  goto done;

 VAR_2->pspoll_mask |= VAR_7;
 VAR_8 = 0;


 for (VAR_9 = 0; VAR_9 < 4; ++VAR_9) {
  if (FUNC_2(&VAR_2->tx_queue[VAR_9],
      VAR_7)) {
   FUNC_1(VAR_2);
   VAR_8 = 1;
   break;
  }
 }
 FUNC_5("[RX] PSPOLL: %s\n", VAR_8 ? "local" : "fwd");
done:
 return VAR_8;
}
