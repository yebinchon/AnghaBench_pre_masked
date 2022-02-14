
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int tagged_supported; } ;
struct TYPE_2__ {int ap; } ;
struct domain_device {TYPE_1__ sata_dev; } ;


 int FUNC_0 (int ,struct scsi_device*,int) ;
 scalar_t__ FUNC_1 (struct domain_device*) ;
 int FUNC_2 (struct scsi_device*,int) ;
 struct domain_device* FUNC_3 (struct scsi_device*) ;

int FUNC_4(struct scsi_device *VAR_0, int VAR_1)
{
 struct domain_device *VAR_2 = FUNC_3(VAR_0);

 if (FUNC_1(VAR_2))
  return FUNC_0(VAR_2->sata_dev.ap, VAR_0, VAR_1);

 if (!VAR_0->tagged_supported)
  VAR_1 = 1;
 return FUNC_2(VAR_0, VAR_1);
}
