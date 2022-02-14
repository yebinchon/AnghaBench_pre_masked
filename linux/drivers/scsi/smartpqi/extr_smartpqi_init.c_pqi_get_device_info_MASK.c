
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pqi_scsi_dev {int devtype; int volume_offline; int lun; int target; int bus; int unique_id; int scsi3addr; int volume_status; int raid_level; scalar_t__ is_external_raid_device; int model; int vendor; scalar_t__ is_expander_smp_device; } ;
struct pqi_ctrl_info {TYPE_2__* scsi_host; TYPE_1__* pci_dev; } ;
struct TYPE_4__ {int host_no; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int*,int) ;
 scalar_t__ FUNC_4 (struct pqi_ctrl_info*,int ,int ,int) ;
 int FUNC_5 (struct pqi_ctrl_info*,struct pqi_scsi_dev*) ;
 int FUNC_6 (struct pqi_ctrl_info*,struct pqi_scsi_dev*) ;
 int FUNC_7 (struct pqi_ctrl_info*,struct pqi_scsi_dev*) ;
 scalar_t__ FUNC_8 (struct pqi_scsi_dev*) ;
 int FUNC_9 (struct pqi_ctrl_info*,int ,int ,int*,int) ;
 int FUNC_10 (int*,int) ;

__attribute__((used)) static int FUNC_11(struct pqi_ctrl_info *VAR_7,
 struct pqi_scsi_dev *VAR_8)
{
 int VAR_9;
 u8 *VAR_10;
 unsigned int VAR_11;

 if (VAR_8->is_expander_smp_device)
  return 0;

 VAR_10 = FUNC_2(64, VAR_2);
 if (!VAR_10)
  return -VAR_1;


 for (VAR_11 = 0;;) {
  VAR_9 = FUNC_9(VAR_7, VAR_8->scsi3addr, 0,
   VAR_10, 64);
  if (VAR_9 == 0)
   break;
  if (FUNC_8(VAR_8) ||
   VAR_9 != VAR_3 ||
   ++VAR_11 > VAR_4)
   goto out;
 }

 FUNC_10(&VAR_10[8], 8);
 FUNC_10(&VAR_10[16], 16);

 VAR_8->devtype = VAR_10[0] & 0x1f;
 FUNC_3(VAR_8->vendor, &VAR_10[8], sizeof(VAR_8->vendor));
 FUNC_3(VAR_8->model, &VAR_10[16], sizeof(VAR_8->model));

 if (FUNC_8(VAR_8) && VAR_8->devtype == VAR_6) {
  if (VAR_8->is_external_raid_device) {
   VAR_8->raid_level = VAR_5;
   VAR_8->volume_status = VAR_0;
   VAR_8->volume_offline = 0;
  } else {
   FUNC_6(VAR_7, VAR_8);
   FUNC_5(VAR_7, VAR_8);
   FUNC_7(VAR_7, VAR_8);
  }
 }

 if (FUNC_4(VAR_7, VAR_8->scsi3addr,
  VAR_8->unique_id, sizeof(VAR_8->unique_id)) < 0)
  FUNC_0(&VAR_7->pci_dev->dev,
   "Can't get device id for scsi %d:%d:%d:%d\n",
   VAR_7->scsi_host->host_no,
   VAR_8->bus, VAR_8->target,
   VAR_8->lun);

out:
 FUNC_1(VAR_10);

 return VAR_9;
}
