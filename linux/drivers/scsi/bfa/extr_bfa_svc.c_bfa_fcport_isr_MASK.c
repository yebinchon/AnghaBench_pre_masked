
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


union bfi_fcport_i2h_msg_u {TYPE_12__* pstatsget_rsp; int trunk_scn; TYPE_11__* event; TYPE_5__* penable_rsp; struct bfi_msg_s* msg; } ;
struct TYPE_17__ {int msg_id; } ;
struct bfi_msg_s {TYPE_2__ mhdr; } ;
struct bfa_s {int dummy; } ;
struct TYPE_23__ {int qos_bw_op; int state; int qos_bw; } ;
struct TYPE_22__ {void* state; } ;
struct TYPE_21__ {int bb_cr_enabled; int qos_bw; int qos_enabled; int trunked; void* q_depth; void* path_tov; void* maxfrsize; } ;
struct TYPE_18__ {int state; } ;
struct TYPE_19__ {TYPE_3__ attr; } ;
struct TYPE_16__ {union bfi_fcport_i2h_msg_u i2hmsg; } ;
struct bfa_fcport_s {int stats_status; int timer; int statsclr_pending_q; int stats_pending_q; TYPE_8__ qos_attr; TYPE_7__ bbcr_attr; TYPE_6__ cfg; int msgtag; int use_flash_cfg; TYPE_4__ trunk; int stats_dma_ready; int sm; TYPE_1__ event_arg; } ;
struct TYPE_24__ {int qos_bw_op; } ;
struct TYPE_20__ {int msgtag; TYPE_6__ port_cfg; } ;
struct TYPE_15__ {int status; } ;
struct TYPE_13__ {TYPE_9__ qos_attr; int linkstate_rsn; int linkstate; } ;
struct TYPE_14__ {TYPE_10__ link_state; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 struct bfa_fcport_s* FUNC_0 (struct bfa_s*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bfa_fcport_s*,int ) ;
 int FUNC_3 (struct bfa_fcport_s*,int ) ;
 int FUNC_4 (struct bfa_fcport_s*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct bfa_s*,int) ;
 int FUNC_8 (struct bfa_fcport_s*,int ) ;
 void* FUNC_9 (void*) ;
 int VAR_18 ;
 int FUNC_10 (int *) ;

void
FUNC_11(struct bfa_s *VAR_19, struct bfi_msg_s *VAR_20)
{
 struct bfa_fcport_s *VAR_21 = FUNC_0(VAR_19);
 union bfi_fcport_i2h_msg_u VAR_22;

 VAR_22.msg = VAR_20;
 VAR_21->event_arg.i2hmsg = VAR_22;

 FUNC_7(VAR_19, VAR_20->mhdr.msg_id);
 FUNC_7(VAR_19, FUNC_5(VAR_18, VAR_21->sm));

 switch (VAR_20->mhdr.msg_id) {
 case 132:
  if (VAR_21->msgtag == VAR_22.penable_rsp->msgtag) {

   VAR_21->stats_dma_ready = VAR_15;
   if (VAR_21->use_flash_cfg) {
    VAR_21->cfg = VAR_22.penable_rsp->port_cfg;
    VAR_21->cfg.maxfrsize =
     FUNC_9(VAR_21->cfg.maxfrsize);
    VAR_21->cfg.path_tov =
     FUNC_9(VAR_21->cfg.path_tov);
    VAR_21->cfg.q_depth =
     FUNC_9(VAR_21->cfg.q_depth);

    if (VAR_21->cfg.trunked)
     VAR_21->trunk.attr.state =
      VAR_17;
    else
     VAR_21->trunk.attr.state =
      VAR_16;
    VAR_21->qos_attr.qos_bw =
     VAR_22.penable_rsp->port_cfg.qos_bw;
    VAR_21->use_flash_cfg = VAR_2;
   }

   if (VAR_21->cfg.qos_enabled)
    VAR_21->qos_attr.state = VAR_12;
   else
    VAR_21->qos_attr.state = VAR_11;

   VAR_21->qos_attr.qos_bw_op =
     VAR_22.penable_rsp->port_cfg.qos_bw;

   if (VAR_21->cfg.bb_cr_enabled)
    VAR_21->bbcr_attr.state = VAR_1;
   else
    VAR_21->bbcr_attr.state = VAR_0;

   FUNC_4(VAR_21, VAR_6);
  }
  break;

 case 134:
  if (VAR_21->msgtag == VAR_22.penable_rsp->msgtag)
   FUNC_4(VAR_21, VAR_6);
  break;

 case 131:
  if (VAR_21->cfg.bb_cr_enabled)
   VAR_21->bbcr_attr.state = VAR_1;
  else
   VAR_21->bbcr_attr.state = VAR_0;

  if (VAR_22.event->link_state.linkstate == VAR_10)
   FUNC_4(VAR_21, VAR_8);
  else {
   if (VAR_22.event->link_state.linkstate_rsn ==
       VAR_9)
    FUNC_4(VAR_21,
        VAR_5);
   else
    FUNC_4(VAR_21,
        VAR_7);
  }
  VAR_21->qos_attr.qos_bw_op =
    VAR_22.event->link_state.qos_attr.qos_bw_op;
  break;

 case 128:
  FUNC_8(VAR_21, VAR_22.trunk_scn);
  break;

 case 129:



  if (FUNC_10(&VAR_21->stats_pending_q) ||
      (VAR_21->stats_status == VAR_13))
   break;

  FUNC_6(&VAR_21->timer);
  VAR_21->stats_status = VAR_22.pstatsget_rsp->status;
  FUNC_3(VAR_21, VAR_15);
  break;

 case 130:



  if (FUNC_10(&VAR_21->statsclr_pending_q) ||
      (VAR_21->stats_status == VAR_13))
   break;

  FUNC_6(&VAR_21->timer);
  VAR_21->stats_status = VAR_14;
  FUNC_2(VAR_21, VAR_15);
  break;

 case 133:
  FUNC_4(VAR_21, VAR_4);
  break;

 case 135:
  FUNC_4(VAR_21, VAR_3);
  break;

 default:
  FUNC_1(1);
 break;
 }
}
