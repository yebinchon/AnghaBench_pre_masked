
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_qla_host {int dummy; } ;
struct TYPE_3__ {int * port_id; int port_name; } ;
struct TYPE_4__ {TYPE_1__ isp24; } ;
struct imm_ntfy_from_isp {TYPE_2__ u; } ;
struct qlt_plogi_ack_t {struct fc_port* fcport; int ref_count; struct imm_ntfy_from_isp iocb; } ;
struct fc_port {int disc_state; struct qlt_plogi_ack_t** plogi_link; int port_name; } ;
typedef enum qlt_plogi_link_t { ____Placeholder_qlt_plogi_link_t } qlt_plogi_link_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,struct fc_port*,int,int ,int ,int ,int ,int ,int ,struct qlt_plogi_ack_t*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct scsi_qla_host*,struct qlt_plogi_ack_t*) ;

void
FUNC_2(struct scsi_qla_host *VAR_3, struct qlt_plogi_ack_t *VAR_4,
    struct fc_port *VAR_5, enum qlt_plogi_link_t VAR_6)
{
 struct imm_ntfy_from_isp *VAR_7 = &VAR_4->iocb;

 VAR_4->ref_count++;

 FUNC_0(VAR_2, VAR_3, 0xf097,
  "Linking sess %p [%d] wwn %8phC with PLOGI ACK to wwn %8phC"
  " s_id %02x:%02x:%02x, ref=%d pla %p link %d\n",
  VAR_5, VAR_6, VAR_5->port_name,
  VAR_7->u.isp24.port_name, VAR_7->u.isp24.port_id[2],
  VAR_7->u.isp24.port_id[1], VAR_7->u.isp24.port_id[0],
  VAR_4->ref_count, VAR_4, VAR_6);

 if (VAR_6 == VAR_0) {
  switch (VAR_5->disc_state) {
  case 129:
  case 128:
   VAR_4->ref_count--;
   return;
  default:
   break;
  }
 }

 if (VAR_5->plogi_link[VAR_6])
  FUNC_1(VAR_3, VAR_5->plogi_link[VAR_6]);

 if (VAR_6 == VAR_1)
  VAR_4->fcport = VAR_5;

 VAR_5->plogi_link[VAR_6] = VAR_4;
}
