
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct bnx2x_virtf {int filter_state; int abs_vfid; } ;
struct bnx2x_vf_queue {int cid; } ;
struct bnx2x_rx_mode_ramrod_params {unsigned long rx_accept_flags; unsigned long tx_accept_flags; int rdata_mapping; int rdata; int ramrod_flags; int state; int * pstate; int func_id; int * rx_mode_obj; int cl_id; int cid; } ;
struct bnx2x {int rx_mode_obj; } ;
struct TYPE_2__ {int e2; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_virtf*,int ) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*,int ) ;
 int FUNC_3 (struct bnx2x_rx_mode_ramrod_params*,int ,int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct bnx2x_virtf*,struct bnx2x_vf_queue*) ;
 struct bnx2x_vf_queue* FUNC_6 (struct bnx2x_virtf*,int ) ;

__attribute__((used)) static void FUNC_7(struct bnx2x *VAR_4, u8 VAR_5,
      struct bnx2x_rx_mode_ramrod_params *VAR_6,
      struct bnx2x_virtf *VAR_7,
      unsigned long VAR_8)
{
 struct bnx2x_vf_queue *VAR_9 = FUNC_6(VAR_7, VAR_5);

 FUNC_3(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->cid = VAR_9->cid;
 VAR_6->cl_id = FUNC_5(VAR_7, VAR_9);
 VAR_6->rx_mode_obj = &VAR_4->rx_mode_obj;
 VAR_6->func_id = FUNC_0(VAR_7->abs_vfid);
 VAR_6->rx_accept_flags = VAR_8;
 VAR_6->tx_accept_flags = VAR_8;
 VAR_6->pstate = &VAR_7->filter_state;
 VAR_6->state = VAR_0;

 FUNC_4(VAR_0, &VAR_7->filter_state);
 FUNC_4(VAR_1, &VAR_6->ramrod_flags);
 FUNC_4(VAR_2, &VAR_6->ramrod_flags);

 VAR_6->rdata = FUNC_1(VAR_4, VAR_7, VAR_3.e2);
 VAR_6->rdata_mapping = FUNC_2(VAR_4, VAR_7, VAR_3.e2);
}
