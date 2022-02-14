
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int qpn; } ;
struct mlx5dr_qp {TYPE_2__ mqp; } ;
struct TYPE_7__ {int roce_min_src_udp; } ;
struct TYPE_8__ {TYPE_3__ caps; } ;
struct mlx5dr_domain {int mdev; TYPE_4__ info; TYPE_1__* send_ring; } ;
struct dr_qp_rts_attr {int timeout; int retry_cnt; int rnr_retry; } ;
struct dr_qp_rtr_attr {int mtu; int min_rnr_timer; int port_num; int udp_src_port; int sgid_index; int qp_num; int dgid_attr; } ;
typedef enum ib_mtu { ____Placeholder_ib_mtu } ib_mtu ;
struct TYPE_5__ {struct mlx5dr_qp* qp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mlx5dr_qp*,struct dr_qp_rtr_attr*) ;
 int FUNC_1 (int ,struct mlx5dr_qp*,struct dr_qp_rts_attr*) ;
 int FUNC_2 (int ,struct mlx5dr_qp*,int) ;
 int FUNC_3 (int ,int,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct mlx5dr_domain *VAR_1)
{
 struct mlx5dr_qp *VAR_2 = VAR_1->send_ring->qp;
 struct dr_qp_rts_attr VAR_3 = {};
 struct dr_qp_rtr_attr VAR_4 = {};
 enum ib_mtu VAR_5 = VAR_0;
 u16 VAR_6 = 0;
 int VAR_7 = 1;
 int VAR_8;


 VAR_8 = FUNC_2(VAR_1->mdev, VAR_2, VAR_7);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_3(VAR_1->mdev, VAR_7, VAR_6, &VAR_4.dgid_attr);
 if (VAR_8)
  return VAR_8;

 VAR_4.mtu = VAR_5;
 VAR_4.qp_num = VAR_2->mqp.qpn;
 VAR_4.min_rnr_timer = 12;
 VAR_4.port_num = VAR_7;
 VAR_4.sgid_index = VAR_6;
 VAR_4.udp_src_port = VAR_1->info.caps.roce_min_src_udp;

 VAR_8 = FUNC_0(VAR_1->mdev, VAR_2, &VAR_4);
 if (VAR_8)
  return VAR_8;


 VAR_3.timeout = 14;
 VAR_3.retry_cnt = 7;
 VAR_3.rnr_retry = 7;

 VAR_8 = FUNC_1(VAR_1->mdev, VAR_2, &VAR_3);
 if (VAR_8)
  return VAR_8;

 return 0;
}
