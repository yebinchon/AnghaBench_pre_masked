
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {scalar_t__ channel; struct myrs_pdev_info* hostdata; int lun; int id; int sdev_gendev; TYPE_2__* host; } ;
struct myrs_pdev_info {int raid_level; scalar_t__ dev_state; int ldev_num; int lun; int target; int channel; } ;
struct myrs_ldev_info {int raid_level; scalar_t__ dev_state; int ldev_num; int lun; int target; int channel; } ;
struct myrs_hba {TYPE_1__* ctlr_info; } ;
typedef enum raid_level { ____Placeholder_raid_level } raid_level ;
struct TYPE_4__ {scalar_t__ max_channel; } ;
struct TYPE_3__ {scalar_t__ physchan_present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,char*,int ,int ,int ,int ) ;
 int FUNC_1 (struct myrs_pdev_info*) ;
 struct myrs_pdev_info* FUNC_2 (int,int) ;
 char* FUNC_3 (scalar_t__) ;
 unsigned char FUNC_4 (struct myrs_hba*,unsigned short,struct myrs_pdev_info*) ;
 unsigned char FUNC_5 (struct myrs_hba*,scalar_t__,int ,int ,struct myrs_pdev_info*) ;
 int VAR_14 ;
 unsigned short FUNC_6 (struct myrs_hba*,struct scsi_device*) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (int ,struct scsi_device*,char*,char const*) ;
 struct myrs_hba* FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_10(struct scsi_device *VAR_15)
{
 struct myrs_hba *VAR_16 = FUNC_9(VAR_15->host);
 unsigned char VAR_17;

 if (VAR_15->channel > VAR_15->host->max_channel)
  return 0;

 if (VAR_15->channel >= VAR_16->ctlr_info->physchan_present) {
  struct myrs_ldev_info *VAR_18;
  unsigned short VAR_19;

  if (VAR_15->lun > 0)
   return -VAR_1;

  VAR_19 = FUNC_6(VAR_16, VAR_15);

  VAR_18 = FUNC_2(sizeof(*VAR_18), VAR_3|VAR_2);
  if (!VAR_18)
   return -VAR_0;

  VAR_17 = FUNC_4(VAR_16, VAR_19, VAR_18);
  if (VAR_17 != VAR_6) {
   VAR_15->hostdata = ((void*)0);
   FUNC_1(VAR_18);
  } else {
   enum raid_level VAR_20;

   FUNC_0(&VAR_15->sdev_gendev,
    "Logical device mapping %d:%d:%d -> %d\n",
    VAR_18->channel, VAR_18->target,
    VAR_18->lun, VAR_18->ldev_num);

   VAR_15->hostdata = VAR_18;
   switch (VAR_18->raid_level) {
   case 138:
    VAR_20 = VAR_12;
    break;
   case 137:
    VAR_20 = VAR_7;
    break;
   case 136:
   case 135:
   case 134:
    VAR_20 = VAR_8;
    break;
   case 133:
   case 132:
    VAR_20 = VAR_9;
    break;
   case 131:
    VAR_20 = VAR_10;
    break;
   case 130:
   case 129:
   case 128:
    VAR_20 = VAR_12;
    break;
   case 139:
    VAR_20 = VAR_11;
    break;
   default:
    VAR_20 = VAR_13;
    break;
   }
   FUNC_7(VAR_14,
           &VAR_15->sdev_gendev, VAR_20);
   if (VAR_18->dev_state != VAR_5) {
    const char *VAR_21;

    VAR_21 = FUNC_3(VAR_18->dev_state);
    FUNC_8(VAR_4, VAR_15,
         "logical device in state %s\n",
         VAR_21 ? VAR_21 : "Invalid");
   }
  }
 } else {
  struct myrs_pdev_info *VAR_22;

  VAR_22 = FUNC_2(sizeof(*VAR_22), VAR_3|VAR_2);
  if (!VAR_22)
   return -VAR_0;

  VAR_17 = FUNC_5(VAR_16, VAR_15->channel,
         VAR_15->id, VAR_15->lun,
         VAR_22);
  if (VAR_17 != VAR_6) {
   VAR_15->hostdata = ((void*)0);
   FUNC_1(VAR_22);
   return -VAR_1;
  }
  VAR_15->hostdata = VAR_22;
 }
 return 0;
}
