
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ channel; int host; struct myrb_ldev_info* hostdata; } ;
struct myrb_ldev_info {int state; } ;
struct myrb_hba {int dummy; } ;
struct device {int dummy; } ;
typedef enum raid_state { ____Placeholder_raid_state } raid_state ;





 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned short FUNC_0 (struct myrb_hba*,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,struct device*,int) ;
 struct myrb_hba* FUNC_3 (int ) ;
 struct scsi_device* FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_7)
{
 struct scsi_device *VAR_8 = FUNC_4(VAR_7);
 struct myrb_hba *VAR_9 = FUNC_3(VAR_8->host);
 struct myrb_ldev_info *VAR_10 = VAR_8->hostdata;
 enum raid_state VAR_11 = VAR_5;
 unsigned short VAR_12;

 if (VAR_8->channel < FUNC_1(VAR_8->host) || !VAR_10)
  VAR_11 = VAR_5;
 else {
  VAR_12 = FUNC_0(VAR_9, ((void*)0));
  if (VAR_12 == VAR_0)
   VAR_11 = VAR_4;
  else {
   switch (VAR_10->state) {
   case 129:
    VAR_11 = VAR_1;
    break;
   case 128:
   case 130:
    VAR_11 = VAR_2;
    break;
   default:
    VAR_11 = VAR_3;
   }
  }
 }
 FUNC_2(VAR_6, VAR_7, VAR_11);
}
