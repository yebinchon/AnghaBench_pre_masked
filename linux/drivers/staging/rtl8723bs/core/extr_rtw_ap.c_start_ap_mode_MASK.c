
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int queue; } ;
struct wlan_acl_pool {TYPE_2__* aclnode; scalar_t__ mode; scalar_t__ num; TYPE_1__ acl_node_q; } ;
struct sta_priv {int ** sta_aid; struct wlan_acl_pool acl_list; } ;
struct mlme_priv {int update_bcn; int olbc; int olbc_ht; int * p2p_probe_resp_ie; int * p2p_beacon_ie; int * wps_assoc_resp_ie; int * wps_probe_resp_ie; int * wps_beacon_ie; scalar_t__ ht_op_mode; scalar_t__ num_sta_ht_20mhz; scalar_t__ num_sta_no_ht; scalar_t__ num_sta_ht_no_gf; scalar_t__ num_sta_no_short_preamble; scalar_t__ num_sta_no_short_slot_time; scalar_t__ num_sta_non_erp; } ;
struct mlme_ext_priv {int bstart_bss; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; struct sta_priv stapriv; struct mlme_priv mlmepriv; } ;
struct TYPE_4__ {int valid; int list; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct adapter *VAR_2)
{
 int VAR_3;
 struct mlme_priv *VAR_4 = &(VAR_2->mlmepriv);
 struct sta_priv *VAR_5 = &VAR_2->stapriv;
 struct mlme_ext_priv *VAR_6 = &VAR_2->mlmeextpriv;
 struct wlan_acl_pool *VAR_7 = &VAR_5->acl_list;

 VAR_4->update_bcn = 0;


 VAR_6->bstart_bss = 0;

 VAR_4->num_sta_non_erp = 0;

 VAR_4->num_sta_no_short_slot_time = 0;

 VAR_4->num_sta_no_short_preamble = 0;

 VAR_4->num_sta_ht_no_gf = 0;
 VAR_4->num_sta_no_ht = 0;
 VAR_4->num_sta_ht_20mhz = 0;

 VAR_4->olbc = 0;

 VAR_4->olbc_ht = 0;

 VAR_4->ht_op_mode = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_5->sta_aid[VAR_3] = ((void*)0);

 VAR_4->wps_beacon_ie = ((void*)0);
 VAR_4->wps_probe_resp_ie = ((void*)0);
 VAR_4->wps_assoc_resp_ie = ((void*)0);

 VAR_4->p2p_beacon_ie = ((void*)0);
 VAR_4->p2p_probe_resp_ie = ((void*)0);


 FUNC_0(&(VAR_7->acl_node_q.queue));
 VAR_7->num = 0;
 VAR_7->mode = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0(&VAR_7->aclnode[VAR_3].list);
  VAR_7->aclnode[VAR_3].valid = 0;
 }
}
