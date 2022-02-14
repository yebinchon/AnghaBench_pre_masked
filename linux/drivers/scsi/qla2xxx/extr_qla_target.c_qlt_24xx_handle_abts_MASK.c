
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct scsi_qla_host {int vp_idx; struct qla_hw_data* hw; } ;
struct TYPE_7__ {int sess_lock; TYPE_2__* tgt_ops; } ;
struct qla_hw_data {int base_qpair; TYPE_3__ tgt; } ;
struct fc_port {scalar_t__ deleted; } ;
struct TYPE_8__ {int al_pa; int area; int domain; } ;
struct TYPE_5__ {TYPE_4__ s_id; int parameter; } ;
struct abts_recv_from_24xx {scalar_t__ exchange_addr_to_abort; TYPE_1__ fcp_hdr_le; } ;
typedef int be_id_t ;
struct TYPE_6__ {struct fc_port* (* find_sess_by_s_id ) (struct scsi_qla_host*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_qla_host*,struct abts_recv_from_24xx*,struct fc_port*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__) ;
 int FUNC_3 (int ,struct scsi_qla_host*,int,char*,int ,...) ;
 int VAR_3 ;
 int FUNC_4 (int ,struct abts_recv_from_24xx*,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct fc_port* FUNC_7 (struct scsi_qla_host*,int ) ;

__attribute__((used)) static void FUNC_8(struct scsi_qla_host *VAR_4,
 struct abts_recv_from_24xx *VAR_5)
{
 struct qla_hw_data *VAR_6 = VAR_4->hw;
 struct fc_port *VAR_7;
 uint32_t VAR_8 = VAR_5->exchange_addr_to_abort;
 be_id_t VAR_9;
 int VAR_10;
 unsigned long VAR_11;

 if (FUNC_1(VAR_5->fcp_hdr_le.parameter) & VAR_0) {
  FUNC_3(VAR_3, VAR_4, 0xf053,
      "qla_target(%d): ABTS: Abort Sequence not "
      "supported\n", VAR_4->vp_idx);
  FUNC_4(VAR_6->base_qpair, VAR_5, VAR_2,
      0);
  return;
 }

 if (VAR_8 == VAR_1) {
  FUNC_3(VAR_3, VAR_4, 0xf010,
      "qla_target(%d): ABTS: Unknown Exchange "
      "Address received\n", VAR_4->vp_idx);
  FUNC_4(VAR_6->base_qpair, VAR_5, VAR_2,
      0);
  return;
 }

 FUNC_3(VAR_3, VAR_4, 0xf011,
     "qla_target(%d): task abort (s_id=%x:%x:%x, "
     "tag=%d, param=%x)\n", VAR_4->vp_idx, VAR_5->fcp_hdr_le.s_id.domain,
     VAR_5->fcp_hdr_le.s_id.area, VAR_5->fcp_hdr_le.s_id.al_pa, VAR_8,
     FUNC_1(VAR_5->fcp_hdr_le.parameter));

 VAR_9 = FUNC_2(VAR_5->fcp_hdr_le.s_id);

 FUNC_5(&VAR_6->tgt.sess_lock, VAR_11);
 VAR_7 = VAR_6->tgt.tgt_ops->find_sess_by_s_id(VAR_4, VAR_9);
 if (!VAR_7) {
  FUNC_3(VAR_3, VAR_4, 0xf012,
      "qla_target(%d): task abort for non-existent session\n",
      VAR_4->vp_idx);
  FUNC_6(&VAR_6->tgt.sess_lock, VAR_11);

  FUNC_4(VAR_6->base_qpair, VAR_5, VAR_2,
       0);
  return;
 }
 FUNC_6(&VAR_6->tgt.sess_lock, VAR_11);


 if (VAR_7->deleted) {
  FUNC_4(VAR_6->base_qpair, VAR_5, VAR_2,
      0);
  return;
 }

 VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_7);
 if (VAR_10 != 0) {
  FUNC_3(VAR_3, VAR_4, 0xf054,
      "qla_target(%d): __qlt_24xx_handle_abts() failed: %d\n",
      VAR_4->vp_idx, VAR_10);
  FUNC_4(VAR_6->base_qpair, VAR_5, VAR_2,
      0);
  return;
 }
}
