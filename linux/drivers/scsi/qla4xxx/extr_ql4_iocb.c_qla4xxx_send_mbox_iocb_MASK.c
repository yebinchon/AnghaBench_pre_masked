
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct scsi_qla_host {scalar_t__ mrb_index; int iocb_cnt; int hardware_lock; TYPE_3__* isp_ops; struct mrb** active_mrb_array; } ;
struct queue_entry {int dummy; } ;
struct mrb {int iocb_cnt; scalar_t__ mbox_cmd; TYPE_2__* mbox; } ;
struct TYPE_6__ {int (* queue_iocb ) (struct scsi_qla_host*) ;} ;
struct TYPE_4__ {int entryCount; int entryType; } ;
struct TYPE_5__ {int in_mbox; TYPE_1__ hdr; scalar_t__ handle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__*,int) ;
 int FUNC_1 (struct scsi_qla_host*,struct queue_entry**) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct scsi_qla_host*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct scsi_qla_host *VAR_3, struct mrb *VAR_4,
      uint32_t *VAR_5)
{
 int VAR_6 = VAR_2;
 uint32_t VAR_7;
 unsigned long VAR_8;
 uint32_t VAR_9 = 0;


 FUNC_2(&VAR_3->hardware_lock, VAR_8);


 VAR_6 = FUNC_1(VAR_3, (struct queue_entry **) &(VAR_4->mbox));
 if (VAR_6 != VAR_2)
  goto exit_mbox_iocb;

 VAR_9 = VAR_3->mrb_index;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_9++;
  if (VAR_9 == VAR_1)
   VAR_9 = 1;
  if (VAR_3->active_mrb_array[VAR_9] == ((void*)0)) {
   VAR_3->mrb_index = VAR_9;
   break;
  }
 }

 VAR_4->iocb_cnt = 1;
 VAR_3->active_mrb_array[VAR_9] = VAR_4;
 VAR_4->mbox->handle = VAR_9;
 VAR_4->mbox->hdr.entryType = VAR_0;
 VAR_4->mbox->hdr.entryCount = VAR_4->iocb_cnt;
 FUNC_0(VAR_4->mbox->in_mbox, VAR_5, 32);
 VAR_4->mbox_cmd = VAR_5[0];
 FUNC_5();

 VAR_3->iocb_cnt += VAR_4->iocb_cnt;
 VAR_3->isp_ops->queue_iocb(VAR_3);
exit_mbox_iocb:
 FUNC_3(&VAR_3->hardware_lock, VAR_8);
 return VAR_6;
}
