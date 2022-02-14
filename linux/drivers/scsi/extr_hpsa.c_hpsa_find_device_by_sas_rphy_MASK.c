
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_rphy {int dummy; } ;
struct hpsa_scsi_dev_t {TYPE_1__* sas_port; } ;
struct ctlr_info {int ndevices; struct hpsa_scsi_dev_t** dev; } ;
struct TYPE_2__ {struct sas_rphy* rphy; } ;



__attribute__((used)) static struct hpsa_scsi_dev_t
 *FUNC_0(struct ctlr_info *VAR_0,
     struct sas_rphy *VAR_1)
{
 int VAR_2;
 struct hpsa_scsi_dev_t *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->ndevices; VAR_2++) {
  VAR_3 = VAR_0->dev[VAR_2];
  if (!VAR_3->sas_port)
   continue;
  if (VAR_3->sas_port->rphy == VAR_1)
   return VAR_3;
 }

 return ((void*)0);
}
