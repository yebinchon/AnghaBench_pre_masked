
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sas_internal {TYPE_3__* dft; } ;
struct TYPE_5__ {struct Scsi_Host* shost; } ;
struct sas_ha_struct {TYPE_2__ core; } ;
struct domain_device {int state; TYPE_1__* port; } ;
struct Scsi_Host {int transportt; } ;
struct TYPE_6__ {int (* lldd_dev_gone ) (struct domain_device*) ;} ;
struct TYPE_4__ {struct sas_ha_struct* ha; } ;


 int VAR_0 ;
 int FUNC_0 (struct domain_device*) ;
 int FUNC_1 (struct domain_device*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 struct sas_internal* FUNC_3 (int ) ;

void FUNC_4(struct domain_device *VAR_1)
{
 struct sas_ha_struct *VAR_2 = VAR_1->port->ha;
 struct Scsi_Host *VAR_3 = VAR_2->core.shost;
 struct sas_internal *VAR_4 = FUNC_3(VAR_3->transportt);

 if (!VAR_4->dft->lldd_dev_gone)
  return;

 if (FUNC_2(VAR_0, &VAR_1->state)) {
  VAR_4->dft->lldd_dev_gone(VAR_1);
  FUNC_0(VAR_1);
 }
}
