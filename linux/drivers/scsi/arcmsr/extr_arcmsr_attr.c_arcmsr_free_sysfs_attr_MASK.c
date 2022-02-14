
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct Scsi_Host {TYPE_1__ shost_dev; } ;
struct AdapterControlBlock {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;

void FUNC_1(struct AdapterControlBlock *VAR_3)
{
 struct Scsi_Host *VAR_4 = VAR_3->host;

 FUNC_0(&VAR_4->shost_dev.kobj, &VAR_0);
 FUNC_0(&VAR_4->shost_dev.kobj, &VAR_2);
 FUNC_0(&VAR_4->shost_dev.kobj, &VAR_1);
}
