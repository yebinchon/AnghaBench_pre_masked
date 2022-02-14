
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int MacAddress; } ;
struct wlan_network {int fixed; TYPE_1__ network; } ;
struct sta_priv {int asoc_sta_count; int sta_hash_lock; } ;
struct sta_info {int dummy; } ;
struct mlme_priv {int scanned_queue; struct wlan_network cur_network; } ;
struct _adapter {struct sta_priv stapriv; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int) ;
 int FUNC_1 (struct mlme_priv*,struct wlan_network*) ;
 struct wlan_network* FUNC_2 (int *,int ) ;
 int FUNC_3 (struct _adapter*) ;
 int FUNC_4 (struct _adapter*,struct sta_info*) ;
 struct sta_info* FUNC_5 (struct sta_priv*,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void FUNC_8(struct _adapter *VAR_4)
{
 unsigned long VAR_5;
 struct wlan_network *VAR_6 = ((void*)0);
 struct mlme_priv *VAR_7 = &VAR_4->mlmepriv;
 struct sta_priv *VAR_8 = &VAR_4->stapriv;
 struct wlan_network *VAR_9 = &VAR_7->cur_network;

 VAR_6 = FUNC_2(&VAR_7->scanned_queue,
       VAR_9->network.MacAddress);

 if (FUNC_0(VAR_7, VAR_3 | VAR_2)) {
  struct sta_info *VAR_10;

  VAR_10 = FUNC_5(&VAR_4->stapriv,
      VAR_9->network.MacAddress);

  FUNC_6(&VAR_8->sta_hash_lock, VAR_5);
  FUNC_4(VAR_4, VAR_10);
  FUNC_7(&VAR_8->sta_hash_lock, VAR_5);
 }

 if (FUNC_0(VAR_7,
     VAR_1 | VAR_0 | VAR_2))
  FUNC_3(VAR_4);
 if (VAR_6)
  VAR_6->fixed = 0;

 if (((FUNC_0(VAR_7, VAR_0)) &&
      (VAR_4->stapriv.asoc_sta_count == 1)))
  FUNC_1(VAR_7, VAR_6);
}
