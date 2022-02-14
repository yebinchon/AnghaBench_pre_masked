
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


typedef int u64 ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct scsi_lun {int dummy; } ;
struct TYPE_9__ {int sess_lock; TYPE_1__* tgt_ops; } ;
struct qla_hw_data {TYPE_3__ tgt; } ;
struct fc_port {scalar_t__ deleted; } ;
struct TYPE_10__ {int task_mgmt_flags; int lun; } ;
struct TYPE_8__ {int s_id; } ;
struct TYPE_11__ {TYPE_4__ fcp_cmnd; TYPE_2__ fcp_hdr; } ;
struct TYPE_12__ {TYPE_5__ isp24; } ;
struct atio_from_isp {TYPE_6__ u; } ;
struct TYPE_7__ {struct fc_port* (* find_sess_by_s_id ) (struct scsi_qla_host*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct fc_port*,int ,int,void*,int ) ;
 int FUNC_1 (struct scsi_lun*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct fc_port* FUNC_4 (struct scsi_qla_host*,int ) ;

__attribute__((used)) static int FUNC_5(struct scsi_qla_host *VAR_1, void *VAR_2)
{
 struct atio_from_isp *VAR_3 = (struct atio_from_isp *)VAR_2;
 struct qla_hw_data *VAR_4 = VAR_1->hw;
 struct fc_port *VAR_5;
 u64 VAR_6;
 int VAR_7;
 unsigned long VAR_8;

 VAR_7 = VAR_3->u.isp24.fcp_cmnd.task_mgmt_flags;

 FUNC_2(&VAR_4->tgt.sess_lock, VAR_8);
 VAR_5 = VAR_4->tgt.tgt_ops->find_sess_by_s_id(VAR_1,
     VAR_3->u.isp24.fcp_hdr.s_id);
 FUNC_3(&VAR_4->tgt.sess_lock, VAR_8);

 VAR_6 =
     FUNC_1((struct scsi_lun *)&VAR_3->u.isp24.fcp_cmnd.lun);

 if (VAR_5 == ((void*)0) || VAR_5->deleted)
  return -VAR_0;

 return FUNC_0(VAR_5, VAR_6, VAR_7, VAR_2, 0);
}
