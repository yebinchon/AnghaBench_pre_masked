
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int list_lock; int cmd_list; struct Scsi_Host* host; } ;
struct scsi_cmnd {int list; struct scsi_device* device; } ;
struct Scsi_Host {scalar_t__ use_cmd_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct scsi_cmnd *VAR_0)
{
 struct scsi_device *VAR_1 = VAR_0->device;
 struct Scsi_Host *VAR_2 = VAR_1->host;
 unsigned long VAR_3;

 if (VAR_2->use_cmd_list) {
  FUNC_1(&VAR_1->list_lock, VAR_3);
  FUNC_0(&VAR_0->list, &VAR_1->cmd_list);
  FUNC_2(&VAR_1->list_lock, VAR_3);
 }
}
