
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct scsi_target {void* hostdata; TYPE_1__ dev; } ;
struct ibmvfc_host {int task_set; } ;
struct Scsi_Host {int host_lock; } ;


 struct Scsi_Host* FUNC_0 (int ) ;
 struct ibmvfc_host* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct scsi_target *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_0(VAR_0->dev.parent);
 struct ibmvfc_host *VAR_2 = FUNC_1(VAR_1);
 unsigned long VAR_3 = 0;

 FUNC_2(VAR_1->host_lock, VAR_3);
 VAR_0->hostdata = (void *)(unsigned long)VAR_2->task_set++;
 FUNC_3(VAR_1->host_lock, VAR_3);
 return 0;
}
