
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_9__ {TYPE_6__* qla_tgt; } ;
struct scsi_qla_host {int host_no; TYPE_3__ vha_tgt; struct qla_hw_data* hw; } ;
struct TYPE_11__ {int sess_lock; TYPE_4__* tgt_ops; } ;
struct qla_hw_data {TYPE_5__ tgt; } ;
struct TYPE_7__ {int nport_handle; } ;
struct TYPE_8__ {TYPE_1__ isp24; } ;
struct imm_ntfy_from_isp {TYPE_2__ u; } ;
struct fc_port {int port_name; } ;
struct TYPE_12__ {int tgt_global_resets_count; } ;
struct TYPE_10__ {struct fc_port* (* find_sess_by_loop_id ) (struct scsi_qla_host*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct scsi_qla_host*,int,char*,struct fc_port*,...) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (struct fc_port*,int ,int,void*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct fc_port* FUNC_7 (struct scsi_qla_host*,int) ;

__attribute__((used)) static int FUNC_8(struct scsi_qla_host *VAR_3, void *VAR_4, int VAR_5)
{
 struct qla_hw_data *VAR_6 = VAR_3->hw;
 struct fc_port *VAR_7 = ((void*)0);
 uint16_t VAR_8;
 int VAR_9 = 0;
 struct imm_ntfy_from_isp *VAR_10 = (struct imm_ntfy_from_isp *)VAR_4;
 unsigned long VAR_11;

 VAR_8 = FUNC_1(VAR_10->u.isp24.nport_handle);
 if (VAR_8 == 0xFFFF) {

  FUNC_0(&VAR_3->vha_tgt.qla_tgt->tgt_global_resets_count);
  FUNC_5(&VAR_6->tgt.sess_lock, VAR_11);
  FUNC_3(VAR_3->vha_tgt.qla_tgt);
  FUNC_6(&VAR_6->tgt.sess_lock, VAR_11);
 } else {
  FUNC_5(&VAR_6->tgt.sess_lock, VAR_11);
  VAR_7 = VAR_6->tgt.tgt_ops->find_sess_by_loop_id(VAR_3, VAR_8);
  FUNC_6(&VAR_6->tgt.sess_lock, VAR_11);
 }

 FUNC_2(VAR_2, VAR_3, 0xe000,
     "Using sess for qla_tgt_reset: %p\n", VAR_7);
 if (!VAR_7) {
  VAR_9 = -VAR_0;
  return VAR_9;
 }

 FUNC_2(VAR_2, VAR_3, 0xe047,
     "scsi(%ld): resetting (session %p from port %8phC mcmd %x, "
     "loop_id %d)\n", VAR_3->host_no, VAR_7, VAR_7->port_name,
     VAR_5, VAR_8);

 return FUNC_4(VAR_7, 0, VAR_5, VAR_4, VAR_1);
}
