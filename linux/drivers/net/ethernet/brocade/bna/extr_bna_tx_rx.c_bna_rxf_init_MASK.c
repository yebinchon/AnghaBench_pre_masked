
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct bna_rxf {scalar_t__ rss_status; int* vlan_filter_table; int vlan_strip_status; scalar_t__ vlan_pending_bitmask; int vlan_filter_status; int rss_pending; int rss_cfg; scalar_t__* rit; int mcast_handle_q; int mcast_active_q; int mcast_pending_del_q; int mcast_pending_add_q; int * ucast_pending_mac; int ucast_active_q; scalar_t__ ucast_active_set; scalar_t__ ucast_pending_set; int ucast_pending_del_q; int ucast_pending_add_q; struct bna_rx* rx; } ;
struct bna_rx_config {scalar_t__ rss_status; int vlan_strip_status; int rss_config; int num_paths; } ;
struct bna_rx {int dummy; } ;
struct TYPE_5__ {TYPE_1__* mdl; } ;
struct TYPE_6__ {TYPE_2__ mem_info; } ;
struct bna_res_info {TYPE_3__ res_u; } ;
struct TYPE_4__ {scalar_t__ kva; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bna_rxf*,int ) ;
 int FUNC_2 (struct bna_rxf*,int ) ;
 int VAR_8 ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct bna_rxf *VAR_9,
  struct bna_rx *VAR_10,
  struct bna_rx_config *VAR_11,
  struct bna_res_info *VAR_12)
{
 VAR_9->rx = VAR_10;

 FUNC_0(&VAR_9->ucast_pending_add_q);
 FUNC_0(&VAR_9->ucast_pending_del_q);
 VAR_9->ucast_pending_set = 0;
 VAR_9->ucast_active_set = 0;
 FUNC_0(&VAR_9->ucast_active_q);
 VAR_9->ucast_pending_mac = ((void*)0);

 FUNC_0(&VAR_9->mcast_pending_add_q);
 FUNC_0(&VAR_9->mcast_pending_del_q);
 FUNC_0(&VAR_9->mcast_active_q);
 FUNC_0(&VAR_9->mcast_handle_q);

 VAR_9->rit = (u8 *)
  VAR_12[VAR_5].res_u.mem_info.mdl[0].kva;
 FUNC_2(VAR_9, VAR_11->num_paths);

 VAR_9->rss_status = VAR_11->rss_status;
 if (VAR_9->rss_status == VAR_7) {
  VAR_9->rss_cfg = VAR_11->rss_config;
  VAR_9->rss_pending |= VAR_2;
  VAR_9->rss_pending |= VAR_3;
  VAR_9->rss_pending |= VAR_4;
 }

 VAR_9->vlan_filter_status = VAR_6;
 FUNC_3(VAR_9->vlan_filter_table, 0,
   (sizeof(u32) * (VAR_0 / 32)));
 VAR_9->vlan_filter_table[0] |= 1;
 VAR_9->vlan_pending_bitmask = (u8)VAR_1;

 VAR_9->vlan_strip_status = VAR_11->vlan_strip_status;

 FUNC_1(VAR_9, VAR_8);
}
