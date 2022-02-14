
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct scsi_qla_host {int dummy; } ;
struct TYPE_5__ {int exchange_addr; } ;
struct TYPE_6__ {TYPE_1__ isp24; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {int prot_op; } ;
struct qla_tgt_cmd {TYPE_3__ atio; TYPE_4__ se_cmd; int num_blks; int lba; } ;
struct qla_qpair {struct scsi_qla_host* vha; } ;
struct ctio7_from_24xx {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct scsi_qla_host*,int,char*,int ,int ,int ,TYPE_4__*,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct qla_qpair*,struct qla_tgt_cmd*,TYPE_3__*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct qla_qpair *VAR_2, void *VAR_3,
 struct qla_tgt_cmd *VAR_4, uint32_t VAR_5)
{
 int VAR_6 = 0;
 struct scsi_qla_host *VAR_7 = VAR_2->vha;

 if (VAR_4->se_cmd.prot_op)
  FUNC_2(VAR_1, VAR_7, 0xe013,
      "Term DIF cmd: lba[0x%llx|%lld] len[0x%x] "
      "se_cmd=%p tag[%x] op %#x/%s",
       VAR_4->lba, VAR_4->lba,
       VAR_4->num_blks, &VAR_4->se_cmd,
       VAR_4->atio.u.isp24.exchange_addr,
       VAR_4->se_cmd.prot_op,
       FUNC_1(VAR_4->se_cmd.prot_op));

 if (VAR_3 != ((void*)0)) {
  struct ctio7_from_24xx *VAR_8 = (struct ctio7_from_24xx *)VAR_3;

  VAR_6 = !(VAR_8->flags &
      FUNC_0(VAR_0));
 } else
  VAR_6 = 1;

 if (VAR_6)
  FUNC_3(VAR_2, VAR_4, &VAR_4->atio, 1, 0);

 return VAR_6;
}
