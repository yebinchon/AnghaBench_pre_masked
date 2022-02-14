
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_qla_host {int dummy; } ;
struct qla_tgt_prm {int* sense_buffer; struct qla_tgt_cmd* cmd; } ;
struct TYPE_4__ {int exchange_addr; } ;
struct TYPE_5__ {TYPE_1__ isp24; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct qla_tgt_cmd {int cdb; TYPE_3__ atio; int se_cmd; int num_blks; int lba; struct scsi_qla_host* vha; } ;


 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,int ,int ,int ,int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct scsi_qla_host*,int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct qla_tgt_prm *VAR_1)
{
 struct qla_tgt_cmd *VAR_2;
 struct scsi_qla_host *VAR_3;


 if (VAR_1->sense_buffer && (VAR_1->sense_buffer[12] == 0x10)) {
  VAR_2 = VAR_1->cmd;
  VAR_3 = VAR_2->vha;

  switch (VAR_1->sense_buffer[13]) {
  case 1:
   FUNC_0(VAR_0, VAR_3, 0xe00b,
       "BE detected Guard TAG ERR: lba[0x%llx|%lld] len[0x%x] "
       "se_cmd=%p tag[%x]",
       VAR_2->lba, VAR_2->lba, VAR_2->num_blks, &VAR_2->se_cmd,
       VAR_2->atio.u.isp24.exchange_addr);
   break;
  case 2:
   FUNC_0(VAR_0, VAR_3, 0xe00c,
       "BE detected APP TAG ERR: lba[0x%llx|%lld] len[0x%x] "
       "se_cmd=%p tag[%x]",
       VAR_2->lba, VAR_2->lba, VAR_2->num_blks, &VAR_2->se_cmd,
       VAR_2->atio.u.isp24.exchange_addr);
   break;
  case 3:
   FUNC_0(VAR_0, VAR_3, 0xe00f,
       "BE detected REF TAG ERR: lba[0x%llx|%lld] len[0x%x] "
       "se_cmd=%p tag[%x]",
       VAR_2->lba, VAR_2->lba, VAR_2->num_blks, &VAR_2->se_cmd,
       VAR_2->atio.u.isp24.exchange_addr);
   break;
  default:
   FUNC_0(VAR_0, VAR_3, 0xe010,
       "BE detected Dif ERR: lba[%llx|%lld] len[%x] "
       "se_cmd=%p tag[%x]",
       VAR_2->lba, VAR_2->lba, VAR_2->num_blks, &VAR_2->se_cmd,
       VAR_2->atio.u.isp24.exchange_addr);
   break;
  }
  FUNC_1(VAR_0, VAR_3, 0xe011, VAR_2->cdb, 16);
 }
}
