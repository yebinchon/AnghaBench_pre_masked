
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isci_host {int scic_lock; int flags; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {struct isci_host* lldd_ha; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (struct isci_host*) ;
 unsigned long FUNC_2 (struct isci_host*) ;
 int FUNC_3 (struct isci_host*,unsigned long) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct Scsi_Host *VAR_1)
{
 struct isci_host *VAR_2 = FUNC_0(VAR_1)->lldd_ha;
 unsigned long VAR_3 = FUNC_2(VAR_2);

 FUNC_4(VAR_0, &VAR_2->flags);

 FUNC_5(&VAR_2->scic_lock);
 FUNC_3(VAR_2, VAR_3);
 FUNC_1(VAR_2);
 FUNC_6(&VAR_2->scic_lock);
}
