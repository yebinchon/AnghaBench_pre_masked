
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_10__ {int tgt_mutex; TYPE_1__* qla_tgt; } ;
struct scsi_qla_host {int vp_idx; TYPE_2__ vha_tgt; } ;
struct fc_port {int dummy; } ;
struct TYPE_11__ {int cmd_count; int id; } ;
typedef TYPE_3__ qlt_port_logo_t ;
typedef int fc_port_t ;
struct TYPE_12__ {int domain; int area; int al_pa; } ;
typedef TYPE_4__ be_id_t ;
struct TYPE_9__ {int tgt_global_resets_count; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct scsi_qla_host*,int,char*,int,int,int) ;
 int VAR_1 ;
 int FUNC_5 (int ,struct scsi_qla_host*,int,char*,int,int,int,int) ;
 int VAR_2 ;
 int FUNC_6 (struct scsi_qla_host*,TYPE_4__,int *) ;
 struct fc_port* FUNC_7 (struct scsi_qla_host*,int *,int) ;
 int * FUNC_8 (struct scsi_qla_host*,int ) ;
 int FUNC_9 (struct scsi_qla_host*,TYPE_3__*) ;

__attribute__((used)) static struct fc_port *FUNC_10(struct scsi_qla_host *VAR_3,
        be_id_t VAR_4)
{
 struct fc_port *VAR_5 = ((void*)0);
 fc_port_t *VAR_6 = ((void*)0);
 int VAR_7, VAR_8;
 uint16_t VAR_9 = 0;

 if (VAR_4.domain == 0xFF && VAR_4.area == 0xFC) {




  FUNC_4(VAR_1, VAR_3, 0xf042,
      "Unable to find initiator with S_ID %x:%x:%x",
      VAR_4.domain, VAR_4.area, VAR_4.al_pa);
  return ((void*)0);
 }

 FUNC_2(&VAR_3->vha_tgt.tgt_mutex);

retry:
 VAR_8 =
     FUNC_0(&VAR_3->vha_tgt.qla_tgt->tgt_global_resets_count);

 VAR_7 = FUNC_6(VAR_3, VAR_4, &VAR_9);
 if (VAR_7 != 0) {
  FUNC_3(&VAR_3->vha_tgt.tgt_mutex);

  FUNC_5(VAR_2, VAR_3, 0xf071,
      "qla_target(%d): Unable to find "
      "initiator with S_ID %x:%x:%x",
      VAR_3->vp_idx, VAR_4.domain, VAR_4.area, VAR_4.al_pa);

  if (VAR_7 == -VAR_0) {
   qlt_port_logo_t VAR_10;

   VAR_10.id = FUNC_1(VAR_4);
   VAR_10.cmd_count = 1;
   FUNC_9(VAR_3, &VAR_10);
  }

  return ((void*)0);
 }

 VAR_6 = FUNC_8(VAR_3, VAR_9);
 if (!VAR_6) {
  FUNC_3(&VAR_3->vha_tgt.tgt_mutex);
  return ((void*)0);
 }

 if (VAR_8 !=
     FUNC_0(&VAR_3->vha_tgt.qla_tgt->tgt_global_resets_count)) {
  FUNC_4(VAR_1, VAR_3, 0xf043,
      "qla_target(%d): global reset during session discovery "
      "(counter was %d, new %d), retrying", VAR_3->vp_idx,
      VAR_8,
      FUNC_0(&VAR_3->vha_tgt.
   qla_tgt->tgt_global_resets_count));
  goto retry;
 }

 VAR_5 = FUNC_7(VAR_3, VAR_6, 1);

 FUNC_3(&VAR_3->vha_tgt.tgt_mutex);

 return VAR_5;
}
