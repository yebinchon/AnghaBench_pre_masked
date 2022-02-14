
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct wiphy {int dummy; } ;
struct wilc_priv {scalar_t__* wep_key_len; int * wep_key; TYPE_2__** wilc_ptk; TYPE_2__** wilc_gtk; } ;
struct wilc_vif {struct wilc_priv priv; } ;
struct wilc {TYPE_1__** vif; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {struct TYPE_4__* seq; struct TYPE_4__* key; } ;
struct TYPE_3__ {struct net_device* ndev; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 struct wilc_vif* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct wilc_vif*,size_t) ;
 struct wilc* FUNC_4 (struct wiphy*) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_0, struct net_device *VAR_1,
     u8 VAR_2,
     bool VAR_3,
     const u8 *VAR_4)
{
 struct wilc *VAR_5 = FUNC_4(VAR_0);
 struct wilc_vif *VAR_6 = FUNC_2(VAR_1);
 struct wilc_priv *VAR_7 = &VAR_6->priv;

 if (VAR_1 == VAR_5->vif[0]->ndev) {
  if (VAR_7->wilc_gtk[VAR_2]) {
   FUNC_0(VAR_7->wilc_gtk[VAR_2]->key);
   VAR_7->wilc_gtk[VAR_2]->key = ((void*)0);
   FUNC_0(VAR_7->wilc_gtk[VAR_2]->seq);
   VAR_7->wilc_gtk[VAR_2]->seq = ((void*)0);

   FUNC_0(VAR_7->wilc_gtk[VAR_2]);
   VAR_7->wilc_gtk[VAR_2] = ((void*)0);
  }

  if (VAR_7->wilc_ptk[VAR_2]) {
   FUNC_0(VAR_7->wilc_ptk[VAR_2]->key);
   VAR_7->wilc_ptk[VAR_2]->key = ((void*)0);
   FUNC_0(VAR_7->wilc_ptk[VAR_2]->seq);
   VAR_7->wilc_ptk[VAR_2]->seq = ((void*)0);
   FUNC_0(VAR_7->wilc_ptk[VAR_2]);
   VAR_7->wilc_ptk[VAR_2] = ((void*)0);
  }
 }

 if (VAR_2 <= 3 && VAR_7->wep_key_len[VAR_2]) {
  FUNC_1(VAR_7->wep_key[VAR_2], 0,
         VAR_7->wep_key_len[VAR_2]);
  VAR_7->wep_key_len[VAR_2] = 0;
  FUNC_3(VAR_6, VAR_2);
 }

 return 0;
}
