
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {void* hostdata; struct Scsi_Host* host; } ;
struct ibmvfc_host {int task_set; } ;
struct fc_rport {int dummy; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fc_rport*) ;
 int FUNC_1 (struct scsi_device*) ;
 struct ibmvfc_host* FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 struct fc_rport* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct scsi_device *VAR_1)
{
 struct Scsi_Host *VAR_2 = VAR_1->host;
 struct fc_rport *VAR_3 = FUNC_5(FUNC_1(VAR_1));
 struct ibmvfc_host *VAR_4 = FUNC_2(VAR_2);
 unsigned long VAR_5 = 0;

 if (!VAR_3 || FUNC_0(VAR_3))
  return -VAR_0;

 FUNC_3(VAR_2->host_lock, VAR_5);
 VAR_1->hostdata = (void *)(unsigned long)VAR_4->task_set++;
 FUNC_4(VAR_2->host_lock, VAR_5);
 return 0;
}
