
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_network {int dummy; } ;
struct mlme_priv {int lock; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int FUNC_0 (struct adapter*,struct wlan_network*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct adapter *VAR_0, struct wlan_network *VAR_1)
{
 struct mlme_priv *VAR_2 = &VAR_0->mlmepriv;

 FUNC_1(&VAR_2->lock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_2->lock);
}
