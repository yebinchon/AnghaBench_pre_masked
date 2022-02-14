
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hpsa_scsi_dev_t {int devtype; size_t raid_level; int expose_device; scalar_t__ offload_to_be_enabled; scalar_t__ offload_config; int model; int vendor; int lun; int target; int bus; int scsi3addr; int external; } ;
struct ctlr_info {TYPE_2__* scsi_host; TYPE_1__* pdev; } ;
struct TYPE_4__ {int host_no; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;







 int FUNC_0 (char const*,int *,char*,int ,int ,int ,int ,char*,int ,int ,int ,char*,char,char,int ) ;
 int FUNC_1 (int ) ;
 char** VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,char*,...) ;

__attribute__((used)) static void FUNC_4(const char *VAR_4, struct ctlr_info *VAR_5,
 struct hpsa_scsi_dev_t *VAR_6, char *VAR_7)
{

 char VAR_8[25];

 if (VAR_5 == ((void*)0) || VAR_5->pdev == ((void*)0) || VAR_5->scsi_host == ((void*)0))
  return;

 switch (VAR_6->devtype) {
 case 131:
  FUNC_3(VAR_8, 25, "controller");
  break;
 case 133:
  FUNC_3(VAR_8, 25, "enclosure");
  break;
 case 134:
 case 128:
  if (VAR_6->external)
   FUNC_3(VAR_8, 25, "external");
  else if (!FUNC_1(VAR_6->scsi3addr))
   FUNC_3(VAR_8, 25, "%s",
    VAR_3[VAR_1]);
  else
   FUNC_3(VAR_8, 25, "RAID-%s",
    VAR_6->raid_level > VAR_2 ? "?" :
    VAR_3[VAR_6->raid_level]);
  break;
 case 130:
  FUNC_3(VAR_8, 25, "rom");
  break;
 case 129:
  FUNC_3(VAR_8, 25, "tape");
  break;
 case 132:
  FUNC_3(VAR_8, 25, "changer");
  break;
 default:
  FUNC_3(VAR_8, 25, "UNKNOWN");
  break;
 }

 FUNC_0(VAR_4, &VAR_5->pdev->dev,
   "scsi %d:%d:%d:%d: %s %s %.8s %.16s %s SSDSmartPathCap%c En%c Exp=%d\n",
   VAR_5->scsi_host->host_no, VAR_6->bus, VAR_6->target, VAR_6->lun,
   VAR_7,
   FUNC_2(VAR_6->devtype),
   VAR_6->vendor,
   VAR_6->model,
   VAR_8,
   VAR_6->offload_config ? '+' : '-',
   VAR_6->offload_to_be_enabled ? '+' : '-',
   VAR_6->expose_device);
}
