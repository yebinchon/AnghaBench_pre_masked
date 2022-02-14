
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int unknown_state_str ;
typedef int unknown_state_buffer ;
struct pqi_scsi_dev {int volume_status; int lun; int target; int bus; } ;
struct pqi_ctrl_info {TYPE_2__* scsi_host; TYPE_1__* pci_dev; } ;
struct TYPE_4__ {int host_no; } ;
struct TYPE_3__ {int dev; } ;
 int FUNC_0 (int *,char*,int ,int ,int ,int ,char*) ;
 int FUNC_1 (char*,int,char const*,int) ;

__attribute__((used)) static void FUNC_2(struct pqi_ctrl_info *VAR_0,
 struct pqi_scsi_dev *VAR_1)
{
 char *VAR_2;
 static const char VAR_3[] =
  "Volume is in an unknown state (%u)";
 char VAR_4[sizeof(VAR_3) + 10];

 switch (VAR_1->volume_status) {
 case 143:
  VAR_2 = "Volume online";
  break;
 case 149:
  VAR_2 = "Volume failed";
  break;
 case 145:
  VAR_2 = "Volume not configured";
  break;
 case 154:
  VAR_2 = "Volume degraded";
  break;
 case 136:
  VAR_2 = "Volume ready for recovery operation";
  break;
 case 130:
  VAR_2 = "Volume undergoing recovery";
  break;
 case 128:
  VAR_2 = "Wrong physical drive was replaced";
  break;
 case 139:
  VAR_2 = "A physical drive not properly connected";
  break;
 case 147:
  VAR_2 = "Hardware is overheating";
  break;
 case 148:
  VAR_2 = "Hardware has overheated";
  break;
 case 131:
  VAR_2 = "Volume undergoing expansion";
  break;
 case 146:
  VAR_2 = "Volume waiting for transforming volume";
  break;
 case 138:
  VAR_2 = "Volume queued for expansion";
  break;
 case 153:
  VAR_2 = "Volume disabled due to SCSI ID conflict";
  break;
 case 152:
  VAR_2 = "Volume has been ejected";
  break;
 case 132:
  VAR_2 = "Volume undergoing background erase";
  break;
 case 137:
  VAR_2 = "Volume ready for predictive spare rebuild";
  break;
 case 129:
  VAR_2 = "Volume undergoing rapid parity initialization";
  break;
 case 140:
  VAR_2 = "Volume queued for rapid parity initialization";
  break;
 case 150:
  VAR_2 = "Encrypted volume inaccessible - key not present";
  break;
 case 134:
  VAR_2 = "Volume undergoing encryption process";
  break;
 case 133:
  VAR_2 = "Volume undergoing encryption re-keying process";
  break;
 case 151:
  VAR_2 = "Volume encrypted but encryption is disabled";
  break;
 case 142:
  VAR_2 = "Volume pending migration to encrypted state";
  break;
 case 141:
  VAR_2 = "Volume pending encryption rekeying";
  break;
 case 144:
  VAR_2 = "Volume not supported on this controller";
  break;
 case 135:
  VAR_2 = "Volume status not available";
  break;
 default:
  FUNC_1(VAR_4, sizeof(VAR_4),
   VAR_3, VAR_1->volume_status);
  VAR_2 = VAR_4;
  break;
 }

 FUNC_0(&VAR_0->pci_dev->dev,
  "scsi %d:%d:%d:%d %s\n",
  VAR_0->scsi_host->host_no,
  VAR_1->bus, VAR_1->target, VAR_1->lun, VAR_2);
}
