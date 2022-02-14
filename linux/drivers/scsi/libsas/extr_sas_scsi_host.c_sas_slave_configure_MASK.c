
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_device {int allow_restart; int lun; scalar_t__ tagged_supported; } ;
struct TYPE_6__ {int ap; } ;
struct domain_device {int sas_addr; TYPE_3__ sata_dev; TYPE_2__* rphy; } ;
struct TYPE_4__ {scalar_t__ device_type; } ;
struct TYPE_5__ {TYPE_1__ identify; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct scsi_device*,int ) ;
 scalar_t__ FUNC_3 (struct domain_device*) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (struct scsi_device*) ;
 int FUNC_6 (struct scsi_device*,int) ;
 struct domain_device* FUNC_7 (struct scsi_device*) ;

int FUNC_8(struct scsi_device *VAR_2)
{
 struct domain_device *VAR_3 = FUNC_7(VAR_2);

 FUNC_0(VAR_3->rphy->identify.device_type != VAR_1);

 if (FUNC_3(VAR_3)) {
  FUNC_2(VAR_2, VAR_3->sata_dev.ap);
  return 0;
 }

 FUNC_5(VAR_2);

 if (VAR_2->tagged_supported) {
  FUNC_6(VAR_2, VAR_0);
 } else {
  FUNC_4("device %llx, LUN %llx doesn't support TCQ\n",
     FUNC_1(VAR_3->sas_addr), VAR_2->lun);
  FUNC_6(VAR_2, 1);
 }

 VAR_2->allow_restart = 1;

 return 0;
}
