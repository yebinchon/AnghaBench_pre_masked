
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pqi_scsi_dev {int bus; int target; int lun; char sas_address; char* vendor; char* model; scalar_t__ devtype; char queue_depth; scalar_t__ aio_enabled; int raid_level; scalar_t__ raid_bypass_enabled; scalar_t__ raid_bypass_configured; int * scsi3addr; scalar_t__ target_lun_valid; } ;
struct pqi_ctrl_info {TYPE_2__* pci_dev; TYPE_1__* scsi_host; } ;
typedef int ssize_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int host_no; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,char*,char*) ;
 char* FUNC_1 (struct pqi_scsi_dev*) ;
 scalar_t__ FUNC_2 (struct pqi_scsi_dev*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,int,char*,...) ;

__attribute__((used)) static void FUNC_5(struct pqi_ctrl_info *VAR_3,
 char *VAR_4, struct pqi_scsi_dev *VAR_5)
{
 ssize_t VAR_6;
 char VAR_7[VAR_0];

 VAR_6 = FUNC_4(VAR_7, VAR_0,
  "%d:%d:", VAR_3->scsi_host->host_no, VAR_5->bus);

 if (VAR_5->target_lun_valid)
  VAR_6 += FUNC_4(VAR_7 + VAR_6,
   VAR_0 - VAR_6,
   "%d:%d",
   VAR_5->target,
   VAR_5->lun);
 else
  VAR_6 += FUNC_4(VAR_7 + VAR_6,
   VAR_0 - VAR_6,
   "-:-");

 if (FUNC_2(VAR_5))
  VAR_6 += FUNC_4(VAR_7 + VAR_6,
   VAR_0 - VAR_6,
   " %08x%08x",
   *((u32 *)&VAR_5->scsi3addr),
   *((u32 *)&VAR_5->scsi3addr[4]));
 else
  VAR_6 += FUNC_4(VAR_7 + VAR_6,
   VAR_0 - VAR_6,
   " %016llx", VAR_5->sas_address);

 VAR_6 += FUNC_4(VAR_7 + VAR_6, VAR_0 - VAR_6,
  " %s %.8s %.16s ",
  FUNC_1(VAR_5),
  VAR_5->vendor,
  VAR_5->model);

 if (FUNC_2(VAR_5)) {
  if (VAR_5->devtype == VAR_1)
   VAR_6 += FUNC_4(VAR_7 + VAR_6,
    VAR_0 - VAR_6,
    "SSDSmartPathCap%c En%c %-12s",
    VAR_5->raid_bypass_configured ? '+' : '-',
    VAR_5->raid_bypass_enabled ? '+' : '-',
    FUNC_3(VAR_5->raid_level));
 } else {
  VAR_6 += FUNC_4(VAR_7 + VAR_6,
   VAR_0 - VAR_6,
   "AIO%c", VAR_5->aio_enabled ? '+' : '-');
  if (VAR_5->devtype == VAR_1 ||
   VAR_5->devtype == VAR_2)
   VAR_6 += FUNC_4(VAR_7 + VAR_6,
    VAR_0 - VAR_6,
    " qd=%-6d", VAR_5->queue_depth);
 }

 FUNC_0(&VAR_3->pci_dev->dev, "%s %s\n", VAR_4, VAR_7);
}
