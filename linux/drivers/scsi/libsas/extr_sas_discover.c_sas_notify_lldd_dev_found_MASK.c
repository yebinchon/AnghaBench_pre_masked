
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sas_internal {TYPE_1__* dft; } ;
struct TYPE_6__ {struct Scsi_Host* shost; } ;
struct sas_ha_struct {int dev; TYPE_3__ core; } ;
struct domain_device {int kref; int state; int sas_addr; TYPE_2__* port; } ;
struct Scsi_Host {int transportt; } ;
struct TYPE_5__ {struct sas_ha_struct* ha; } ;
struct TYPE_4__ {int (* lldd_dev_found ) (struct domain_device*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct domain_device*) ;
 struct sas_internal* FUNC_6 (int ) ;

int FUNC_7(struct domain_device *VAR_1)
{
 int VAR_2 = 0;
 struct sas_ha_struct *VAR_3 = VAR_1->port->ha;
 struct Scsi_Host *VAR_4 = VAR_3->core.shost;
 struct sas_internal *VAR_5 = FUNC_6(VAR_4->transportt);

 if (!VAR_5->dft->lldd_dev_found)
  return 0;

 VAR_2 = VAR_5->dft->lldd_dev_found(VAR_1);
 if (VAR_2) {
  FUNC_3("driver on host %s cannot handle device %llx, error:%d\n",
   FUNC_1(VAR_3->dev),
   FUNC_0(VAR_1->sas_addr), VAR_2);
 }
 FUNC_4(VAR_0, &VAR_1->state);
 FUNC_2(&VAR_1->kref);
 return VAR_2;
}
