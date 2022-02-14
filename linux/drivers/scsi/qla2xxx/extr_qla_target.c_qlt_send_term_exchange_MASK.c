
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_qla_host {TYPE_3__* hw; } ;
struct qla_tgt_cmd {scalar_t__ sg_mapped; int aborted; struct scsi_qla_host* vha; } ;
struct qla_qpair {int qp_lock_ptr; struct scsi_qla_host* vha; } ;
struct atio_from_isp {int dummy; } ;
struct TYPE_5__ {TYPE_1__* tgt_ops; } ;
struct TYPE_6__ {TYPE_2__ tgt; } ;
struct TYPE_4__ {int (* free_cmd ) (struct qla_tgt_cmd*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct qla_qpair*,struct qla_tgt_cmd*,struct atio_from_isp*) ;
 int FUNC_1 (struct scsi_qla_host*,struct atio_from_isp*,int ,int ) ;
 int FUNC_2 (struct scsi_qla_host*,struct qla_tgt_cmd*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (struct qla_tgt_cmd*) ;

__attribute__((used)) static void FUNC_6(struct qla_qpair *VAR_1,
 struct qla_tgt_cmd *VAR_2, struct atio_from_isp *VAR_3, int VAR_4,
 int VAR_5)
{
 struct scsi_qla_host *VAR_6;
 unsigned long VAR_7 = 0;
 int VAR_8;


 if (VAR_2)
  VAR_6 = VAR_2->vha;
 else
  VAR_6 = VAR_1->vha;

 if (VAR_4) {
  VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3);
  if (VAR_8 == -VAR_0)
   FUNC_1(VAR_6, VAR_3, 0, 0);
  goto done;
 }
 FUNC_3(VAR_1->qp_lock_ptr, VAR_7);
 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_8 == -VAR_0)
  FUNC_1(VAR_6, VAR_3, 0, 0);

done:
 if (VAR_2 && !VAR_5 && !VAR_2->aborted) {
  if (VAR_2->sg_mapped)
   FUNC_2(VAR_6, VAR_2);
  VAR_6->hw->tgt.tgt_ops->free_cmd(VAR_2);
 }

 if (!VAR_4)
  FUNC_4(VAR_1->qp_lock_ptr, VAR_7);

 return;
}
