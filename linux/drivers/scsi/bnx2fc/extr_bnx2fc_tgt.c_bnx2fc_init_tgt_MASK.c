
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fcoe_port {struct bnx2fc_interface* priv; } ;
struct TYPE_4__ {int roles; } ;
struct fc_rport_priv {int flags; TYPE_1__ ids; struct fc_rport* rport; } ;
struct fc_rport {int dummy; } ;
struct TYPE_6__ {int header; } ;
struct b577xx_fcoe_rx_doorbell {int params; TYPE_3__ hdr; } ;
struct TYPE_5__ {int header; } ;
struct b577xx_doorbell_set_prod {TYPE_2__ header; } ;
struct bnx2fc_rport {int fcoe_conn_id; int sq_curr_toggle_bit; int cq_curr_toggle_bit; int rq_prod_idx; int upld_wait; int ofld_wait; int active_tm_queue; int els_queue; int io_retire_queue; int active_cmd_queue; int cq_lock; int tgt_lock; scalar_t__ io_timeout; int dev_type; scalar_t__ retry_delay_timestamp; int num_active_ios; scalar_t__ rq_cons_idx; scalar_t__ cq_cons_idx; scalar_t__ sq_prod_idx; int free_sqes; int max_cqes; int max_rqes; int max_sqes; struct fcoe_port* port; struct fc_rport_priv* rdata; struct fc_rport* rport; struct b577xx_fcoe_rx_doorbell rx_db; struct b577xx_doorbell_set_prod sq_db; } ;
struct bnx2fc_interface {struct bnx2fc_hba* hba; } ;
struct bnx2fc_hba {scalar_t__ num_ofld_sess; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct bnx2fc_rport*,char*,...) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct bnx2fc_hba*,struct bnx2fc_rport*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct bnx2fc_rport *VAR_17,
      struct fcoe_port *VAR_18,
      struct fc_rport_priv *VAR_19)
{

 struct fc_rport *VAR_20 = VAR_19->rport;
 struct bnx2fc_interface *VAR_21 = VAR_18->priv;
 struct bnx2fc_hba *VAR_22 = VAR_21->hba;
 struct b577xx_doorbell_set_prod *VAR_23 = &VAR_17->sq_db;
 struct b577xx_fcoe_rx_doorbell *VAR_24 = &VAR_17->rx_db;

 VAR_17->rport = VAR_20;
 VAR_17->rdata = VAR_19;
 VAR_17->port = VAR_18;

 if (VAR_22->num_ofld_sess >= VAR_9) {
  FUNC_0(VAR_17, "exceeded max sessions. logoff this tgt\n");
  VAR_17->fcoe_conn_id = -1;
  return -1;
 }

 VAR_17->fcoe_conn_id = FUNC_3(VAR_22, VAR_17);
 if (VAR_17->fcoe_conn_id == -1)
  return -1;

 FUNC_0(VAR_17, "init_tgt - conn_id = 0x%x\n", VAR_17->fcoe_conn_id);

 VAR_17->max_sqes = VAR_11;
 VAR_17->max_rqes = VAR_10;
 VAR_17->max_cqes = VAR_7;
 FUNC_2(&VAR_17->free_sqes, VAR_11);


 VAR_17->sq_curr_toggle_bit = 1;
 VAR_17->cq_curr_toggle_bit = 1;
 VAR_17->sq_prod_idx = 0;
 VAR_17->cq_cons_idx = 0;
 VAR_17->rq_prod_idx = 0x8000;
 VAR_17->rq_cons_idx = 0;
 FUNC_2(&VAR_17->num_active_ios, 0);
 VAR_17->retry_delay_timestamp = 0;

 if (VAR_19->flags & VAR_14 &&
     VAR_19->ids.roles & VAR_13 &&
     !(VAR_19->ids.roles & VAR_12)) {
  VAR_17->dev_type = VAR_16;
  VAR_17->io_timeout = 0;
 } else {
  VAR_17->dev_type = VAR_15;
  VAR_17->io_timeout = VAR_8;
 }


 VAR_23->header.header = VAR_1;
 VAR_23->header.header |= VAR_4 <<
     VAR_0;

 VAR_24->hdr.header = ((0x1 << VAR_3) |
     (0x1 << VAR_2) |
     (VAR_4 <<
    VAR_0));
 VAR_24->params = (0x2 << VAR_5) |
       (0x3 << VAR_6);

 FUNC_5(&VAR_17->tgt_lock);
 FUNC_5(&VAR_17->cq_lock);


 FUNC_1(&VAR_17->active_cmd_queue);


 FUNC_1(&VAR_17->io_retire_queue);

 FUNC_1(&VAR_17->els_queue);


 FUNC_1(&VAR_17->active_tm_queue);

 FUNC_4(&VAR_17->ofld_wait);
 FUNC_4(&VAR_17->upld_wait);

 return 0;
}
