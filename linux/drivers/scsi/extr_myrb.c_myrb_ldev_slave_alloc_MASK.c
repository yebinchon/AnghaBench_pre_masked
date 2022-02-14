
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {unsigned short id; int sdev_gendev; int hostdata; int host; } ;
struct myrb_ldev_info {int raid_level; int state; } ;
struct myrb_hba {struct myrb_ldev_info* ldev_info_buf; } ;
typedef enum raid_level { ____Placeholder_raid_level } raid_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*,unsigned short,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,struct myrb_ldev_info*,int) ;
 int VAR_10 ;
 int FUNC_3 (int ,int *,int) ;
 struct myrb_hba* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct scsi_device *VAR_11)
{
 struct myrb_hba *VAR_12 = FUNC_4(VAR_11->host);
 struct myrb_ldev_info *VAR_13;
 unsigned short VAR_14 = VAR_11->id;
 enum raid_level VAR_15;

 VAR_13 = VAR_12->ldev_info_buf + VAR_14;
 if (!VAR_13)
  return -VAR_1;

 VAR_11->hostdata = FUNC_1(sizeof(*VAR_13), VAR_2);
 if (!VAR_11->hostdata)
  return -VAR_0;
 FUNC_0(&VAR_11->sdev_gendev,
  "slave alloc ldev %d state %x\n",
  VAR_14, VAR_13->state);
 FUNC_2(VAR_11->hostdata, VAR_13,
        sizeof(*VAR_13));
 switch (VAR_13->raid_level) {
 case 132:
  VAR_15 = VAR_8;
  break;
 case 131:
  VAR_15 = VAR_3;
  break;
 case 130:
  VAR_15 = VAR_4;
  break;
 case 129:
  VAR_15 = VAR_5;
  break;
 case 128:
  VAR_15 = VAR_6;
  break;
 case 133:
  VAR_15 = VAR_7;
  break;
 default:
  VAR_15 = VAR_9;
  break;
 }
 FUNC_3(VAR_10, &VAR_11->sdev_gendev, VAR_15);
 return 0;
}
