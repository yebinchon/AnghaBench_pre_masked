
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd_info {int pre_cmd_err; int sd_lock_status; int sd_pass_thru_en; } ;
struct scsi_cmnd {int* cmnd; } ;
struct rtsx_chip {struct sd_info sd_card; } ;


 unsigned int FUNC_0 (struct scsi_cmnd*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct scsi_cmnd*,int ) ;
 int FUNC_4 (struct rtsx_chip*,unsigned int,int ) ;

int FUNC_5(struct scsi_cmnd *VAR_7, struct rtsx_chip *VAR_8)
{
 struct sd_info *VAR_9 = &VAR_8->sd_card;
 unsigned int VAR_10 = FUNC_0(VAR_7);
 int VAR_11;

 if (!VAR_9->sd_pass_thru_en) {
  FUNC_4(VAR_8, VAR_10, VAR_2);
  return VAR_5;
 }

 if (VAR_9->pre_cmd_err) {
  VAR_9->pre_cmd_err = 0;
  FUNC_4(VAR_8, VAR_10, VAR_1);
  return VAR_5;
 }

 if ((VAR_7->cmnd[2] != 0x53) || (VAR_7->cmnd[3] != 0x44) ||
     (VAR_7->cmnd[4] != 0x20) || (VAR_7->cmnd[5] != 0x43) ||
     (VAR_7->cmnd[6] != 0x61) || (VAR_7->cmnd[7] != 0x72) ||
     (VAR_7->cmnd[8] != 0x64)) {
  FUNC_4(VAR_8, VAR_10, VAR_2);
  return VAR_5;
 }

 switch (VAR_7->cmnd[1] & 0x0F) {
 case 0:




  VAR_11 = FUNC_2(VAR_8);
  if (VAR_11 != VAR_4) {



   FUNC_4(VAR_8, VAR_10, VAR_3);
   VAR_9->pre_cmd_err = 1;
   return VAR_5;
  }



  break;

 case 1:
  VAR_11 = FUNC_1(VAR_8);
  if (VAR_11 != VAR_4) {
   FUNC_4(VAR_8, VAR_10, VAR_3);
   VAR_9->pre_cmd_err = 1;
   return VAR_5;
  }
  break;

 default:
  FUNC_4(VAR_8, VAR_10, VAR_2);
  return VAR_5;
 }

 FUNC_3(VAR_7, 0);
 return VAR_6;
}
