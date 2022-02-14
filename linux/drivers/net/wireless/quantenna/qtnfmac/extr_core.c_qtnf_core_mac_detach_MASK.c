
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wiphy {TYPE_3__** bands; } ;
struct TYPE_4__ {TYPE_3__* wowlan; } ;
struct qtnf_wmac {TYPE_3__* rd; TYPE_1__ macinfo; scalar_t__ wiphy_registered; struct qtnf_vif* iflist; } ;
struct TYPE_5__ {scalar_t__ iftype; } ;
struct qtnf_vif {int stats64; int sta_list; TYPE_2__ wdev; scalar_t__ netdev; } ;
struct qtnf_bus {struct qtnf_wmac** mac; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_6__ {scalar_t__ n_channels; struct TYPE_6__* channels; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 struct wiphy* FUNC_2 (struct qtnf_wmac*) ;
 int FUNC_3 (struct wiphy*,TYPE_2__*) ;
 int FUNC_4 (struct qtnf_wmac*) ;
 int FUNC_5 (struct qtnf_wmac*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct wiphy*) ;
 int FUNC_11 (struct wiphy*) ;

__attribute__((used)) static void FUNC_12(struct qtnf_bus *VAR_4, unsigned int VAR_5)
{
 struct qtnf_wmac *VAR_6;
 struct wiphy *VAR_7;
 struct qtnf_vif *VAR_8;
 unsigned int VAR_9;
 enum nl80211_band VAR_10;

 VAR_6 = VAR_4->mac[VAR_5];

 if (!VAR_6)
  return;

 VAR_7 = FUNC_2(VAR_6);

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_8 = &VAR_6->iflist[VAR_9];
  FUNC_8();
  if (VAR_8->netdev &&
      VAR_8->wdev.iftype != VAR_1) {
   FUNC_7(VAR_8->netdev);
   FUNC_3(VAR_7, &VAR_8->wdev);
  }
  FUNC_9();
  FUNC_6(&VAR_8->sta_list);
  FUNC_0(VAR_8->stats64);
 }

 if (VAR_6->wiphy_registered)
  FUNC_11(VAR_7);

 for (VAR_10 = VAR_0; VAR_10 < VAR_2; ++VAR_10) {
  if (!VAR_7->bands[VAR_10])
   continue;

  FUNC_1(VAR_7->bands[VAR_10]->channels);
  VAR_7->bands[VAR_10]->n_channels = 0;

  FUNC_1(VAR_7->bands[VAR_10]);
  VAR_7->bands[VAR_10] = ((void*)0);
 }

 FUNC_5(VAR_6);
 FUNC_4(VAR_6);
 FUNC_1(VAR_6->macinfo.wowlan);
 FUNC_1(VAR_6->rd);
 VAR_6->rd = ((void*)0);
 FUNC_10(VAR_7);
 VAR_4->mac[VAR_5] = ((void*)0);
}
