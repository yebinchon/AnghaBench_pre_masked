
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {scalar_t__ channel; struct myrs_ldev_info* hostdata; int host; } ;
struct myrs_ldev_info {int dev_state; } ;
struct myrs_hba {TYPE_1__* ctlr_info; } ;
struct device {int dummy; } ;
typedef enum raid_state { ____Placeholder_raid_state } raid_state ;
struct TYPE_2__ {scalar_t__ physchan_present; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct device*,int) ;
 struct myrs_hba* FUNC_1 (int ) ;
 struct scsi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static void
FUNC_3(struct device *VAR_6)
{
 struct scsi_device *VAR_7 = FUNC_2(VAR_6);
 struct myrs_hba *VAR_8 = FUNC_1(VAR_7->host);
 struct myrs_ldev_info *VAR_9 = VAR_7->hostdata;
 enum raid_state VAR_10 = VAR_4;

 if (VAR_7->channel < VAR_8->ctlr_info->physchan_present || !VAR_9)
  VAR_10 = VAR_4;
 else {
  switch (VAR_9->dev_state) {
  case 131:
   VAR_10 = VAR_0;
   break;
  case 129:
  case 133:
   VAR_10 = VAR_1;
   break;
  case 130:
   VAR_10 = VAR_3;
   break;
  case 128:
  case 132:
   VAR_10 = VAR_4;
   break;
  default:
   VAR_10 = VAR_2;
  }
 }
 FUNC_0(VAR_5, VAR_6, VAR_10);
}
