
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_acl_pool {int acl_node_q; } ;
struct sta_priv {struct wlan_acl_pool acl_list; } ;
struct mlme_priv {int bcn_update_lock; } ;
struct adapter {struct sta_priv stapriv; struct mlme_priv mlmepriv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct adapter*) ;

void FUNC_3(struct adapter *VAR_0)
{
 struct mlme_priv *VAR_1 = &VAR_0->mlmepriv;
 struct sta_priv *VAR_2 = &VAR_0->stapriv;
 struct wlan_acl_pool *VAR_3 = &VAR_2->acl_list;

 FUNC_1(&VAR_1->bcn_update_lock);


 FUNC_0(&VAR_3->acl_node_q);



 FUNC_2(VAR_0);
}
