
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_8__ {int src_qp; int qp_id; int data_length_error; int src_mac_addrlo; int src_mac_addrhi; int vlan; int data_length; TYPE_1__ parse_flags; } ;
union core_rx_cqe_union {TYPE_4__ rx_cqe_gsi; } ;
struct TYPE_7__ {int data_length_error; } ;
struct TYPE_6__ {void* data_length; } ;
struct qed_ll2_comp_rx_data {void* src_qp; void* qp_id; TYPE_3__ u; void* opaque_data_1; void* opaque_data_0; void* vlan; TYPE_2__ length; void* parse_flags; } ;
struct qed_hwfn {int dummy; } ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct qed_hwfn *VAR_0,
      union core_rx_cqe_union *VAR_1,
      struct qed_ll2_comp_rx_data *VAR_2)
{
 VAR_2->parse_flags = FUNC_0(VAR_1->rx_cqe_gsi.parse_flags.flags);
 VAR_2->length.data_length = FUNC_0(VAR_1->rx_cqe_gsi.data_length);
 VAR_2->vlan = FUNC_0(VAR_1->rx_cqe_gsi.vlan);
 VAR_2->opaque_data_0 = FUNC_1(VAR_1->rx_cqe_gsi.src_mac_addrhi);
 VAR_2->opaque_data_1 = FUNC_0(VAR_1->rx_cqe_gsi.src_mac_addrlo);
 VAR_2->u.data_length_error = VAR_1->rx_cqe_gsi.data_length_error;
 VAR_2->qp_id = FUNC_0(VAR_1->rx_cqe_gsi.qp_id);

 VAR_2->src_qp = FUNC_1(VAR_1->rx_cqe_gsi.src_qp);
}
