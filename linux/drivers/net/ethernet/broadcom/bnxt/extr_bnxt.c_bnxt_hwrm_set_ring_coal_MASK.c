
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwrm_ring_cmpl_ring_cfg_aggint_params_input {int ring_id; int member_0; } ;
struct TYPE_2__ {int coal_bufs; int coal_ticks; } ;
struct bnxt_cp_ring_info {TYPE_1__ rx_ring_coal; } ;
struct bnxt_napi {int rx_ring; struct bnxt_cp_ring_info cp_ring; } ;
struct bnxt_coal {int coal_bufs; int coal_ticks; } ;
struct bnxt {int rx_coal; } ;
typedef int req_rx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnxt*,int ) ;
 int FUNC_1 (struct bnxt*,struct hwrm_ring_cmpl_ring_cfg_aggint_params_input*,int ,int,int) ;
 int FUNC_2 (struct bnxt*,struct bnxt_coal*,struct hwrm_ring_cmpl_ring_cfg_aggint_params_input*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct bnxt*,struct hwrm_ring_cmpl_ring_cfg_aggint_params_input*,int,int ) ;
 int FUNC_5 (struct bnxt_coal*,int *,int) ;

int FUNC_6(struct bnxt *VAR_3, struct bnxt_napi *VAR_4)
{
 struct hwrm_ring_cmpl_ring_cfg_aggint_params_input VAR_5 = {0};
 struct bnxt_cp_ring_info *VAR_6 = &VAR_4->cp_ring;
 struct bnxt_coal VAR_7;




 FUNC_5(&VAR_7, &VAR_3->rx_coal, sizeof(struct bnxt_coal));

 VAR_7.coal_ticks = VAR_6->rx_ring_coal.coal_ticks;
 VAR_7.coal_bufs = VAR_6->rx_ring_coal.coal_bufs;

 if (!VAR_4->rx_ring)
  return -VAR_0;

 FUNC_1(VAR_3, &VAR_5,
          VAR_2, -1, -1);

 FUNC_2(VAR_3, &VAR_7, &VAR_5);

 VAR_5.ring_id = FUNC_3(FUNC_0(VAR_3, VAR_4->rx_ring));

 return FUNC_4(VAR_3, &VAR_5, sizeof(VAR_5),
     VAR_1);
}
