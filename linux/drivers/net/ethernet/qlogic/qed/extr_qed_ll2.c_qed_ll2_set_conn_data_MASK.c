
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qed_ll2_params {int rx_vlan_stripping; int drop_ttl0_packets; int mtu; } ;
struct TYPE_3__ {int conn_type; int tx_dest; scalar_t__ tx_tc; int tx_num_desc; int rx_vlan_removal_en; int rx_drop_ttl0_flg; int rx_num_desc; int mtu; } ;
struct qed_ll2_acquire_data {TYPE_1__ input; TYPE_2__* cbs; int * p_connection_handle; } ;
struct qed_hwfn {int dummy; } ;
typedef enum qed_ll2_conn_type { ____Placeholder_qed_ll2_conn_type } qed_ll2_conn_type ;
struct TYPE_4__ {struct qed_hwfn* cookie; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_0 (struct qed_ll2_acquire_data*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct qed_hwfn *VAR_6,
      struct qed_ll2_acquire_data *VAR_7,
      struct qed_ll2_params *VAR_8,
      enum qed_ll2_conn_type VAR_9,
      u8 *VAR_10, bool VAR_11)
{
 FUNC_0(VAR_7, 0, sizeof(*VAR_7));

 VAR_7->input.conn_type = VAR_9;
 VAR_7->input.mtu = VAR_8->mtu;
 VAR_7->input.rx_num_desc = VAR_1;
 VAR_7->input.rx_drop_ttl0_flg = VAR_8->drop_ttl0_packets;
 VAR_7->input.rx_vlan_removal_en = VAR_8->rx_vlan_stripping;
 VAR_7->input.tx_num_desc = VAR_4;
 VAR_7->p_connection_handle = VAR_10;
 VAR_7->cbs = &VAR_5;
 VAR_5.cookie = VAR_6;

 if (VAR_11) {
  VAR_7->input.tx_tc = VAR_0;
  VAR_7->input.tx_dest = VAR_2;
 } else {
  VAR_7->input.tx_tc = 0;
  VAR_7->input.tx_dest = VAR_3;
 }
}
