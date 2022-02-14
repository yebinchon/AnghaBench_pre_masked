
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qed_rdma_start_in_params {int dummy; } ;
struct qed_iwarp_info {int rcv_wnd_scale; int rcv_wnd_size; int rtr_type; int listen_list; int ep_list; int qp_lock; int peer2peer; int mpa_rev; int crc_needed; int tcp_flags; } ;
struct qed_hwfn {TYPE_1__* p_rdma_info; struct qed_dev* cdev; } ;
struct qed_dev {int dummy; } ;
typedef enum chip_ids { ____Placeholder_chip_ids } chip_ids ;
struct TYPE_4__ {int four_ports; int two_ports; } ;
struct TYPE_3__ {struct qed_iwarp_info iwarp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct qed_dev*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct qed_dev*) ;
 int VAR_11 ;
 int FUNC_4 (struct qed_hwfn*,struct qed_rdma_start_in_params*,int) ;
 TYPE_2__* VAR_12 ;
 int FUNC_5 (struct qed_hwfn*) ;
 int FUNC_6 (struct qed_hwfn*,int ,int ) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct qed_hwfn *VAR_13,
      struct qed_rdma_start_in_params *VAR_14)
{
 struct qed_dev *VAR_15 = VAR_13->cdev;
 struct qed_iwarp_info *VAR_16;
 enum chip_ids VAR_17;
 u32 VAR_18;

 VAR_16 = &VAR_13->p_rdma_info->iwarp;

 VAR_16->tcp_flags = VAR_10;

 VAR_17 = FUNC_1(VAR_15) ? VAR_0 : VAR_1;
 VAR_18 = (FUNC_3(VAR_15) == 4) ?
  VAR_12[VAR_17].four_ports :
  VAR_12[VAR_17].two_ports;


 VAR_16->rcv_wnd_scale = FUNC_2(VAR_18) -
     FUNC_2(VAR_9);
 VAR_16->rcv_wnd_size = VAR_18 >> VAR_16->rcv_wnd_scale;
 VAR_16->crc_needed = VAR_7;
 VAR_16->mpa_rev = VAR_2;

 VAR_16->peer2peer = VAR_8;

 VAR_16->rtr_type = VAR_4 |
    VAR_5 |
    VAR_3;

 FUNC_7(&VAR_13->p_rdma_info->iwarp.qp_lock);
 FUNC_0(&VAR_13->p_rdma_info->iwarp.ep_list);
 FUNC_0(&VAR_13->p_rdma_info->iwarp.listen_list);

 FUNC_6(VAR_13, VAR_6,
      VAR_11);
 FUNC_5(VAR_13);

 return FUNC_4(VAR_13, VAR_14, VAR_18);
}
