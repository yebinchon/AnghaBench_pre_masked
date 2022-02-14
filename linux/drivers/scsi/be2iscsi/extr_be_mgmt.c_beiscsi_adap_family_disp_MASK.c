
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct beiscsi_hba {TYPE_1__* pcidev; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int device; } ;
 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 struct beiscsi_hba* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (char*,int ,char*,...) ;

ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
     char *VAR_3)
{
 uint16_t VAR_4 = 0;
 struct Scsi_Host *VAR_5 = FUNC_0(VAR_1);
 struct beiscsi_hba *VAR_6 = FUNC_1(VAR_5);

 VAR_4 = VAR_6->pcidev->device;
 switch (VAR_4) {
 case 133:
 case 131:
 case 130:
  return FUNC_2(VAR_3, VAR_0,
    "Obsolete/Unsupported BE2 Adapter Family\n");
  break;
 case 132:
 case 129:
  return FUNC_2(VAR_3, VAR_0, "BE3-R Adapter Family\n");
  break;
 case 128:
  return FUNC_2(VAR_3, VAR_0, "Skyhawk-R Adapter Family\n");
  break;
 default:
  return FUNC_2(VAR_3, VAR_0,
    "Unknown Adapter Family: 0x%x\n", VAR_4);
  break;
 }
}
