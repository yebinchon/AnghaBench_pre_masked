
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sd_info {scalar_t__ sd_erase_status; } ;
struct scsi_cmnd {int* cmnd; } ;
struct ms_info {scalar_t__ format_status; scalar_t__ progress; } ;
struct rtsx_chip {struct ms_info ms_card; struct sd_info sd_card; } ;





 int VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;




 scalar_t__ VAR_3 ;





 int VAR_4 ;
 unsigned int FUNC_0 (struct scsi_cmnd*) ;






 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;




 int FUNC_1 (struct scsi_cmnd*,struct rtsx_chip*) ;
 scalar_t__ FUNC_2 (struct rtsx_chip*,unsigned int) ;
 int FUNC_3 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_4 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_5 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_6 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_7 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_8 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_9 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_10 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_11 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_12 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_13 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_14 (struct rtsx_chip*,unsigned int,int ,int,int ,int,int,int ,int ) ;
 int FUNC_15 (struct rtsx_chip*,unsigned int,int ) ;
 int FUNC_16 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_17 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_18 (struct scsi_cmnd*,struct rtsx_chip*) ;

int FUNC_19(struct scsi_cmnd *VAR_8, struct rtsx_chip *VAR_9)
{



 struct ms_info *VAR_10 = &VAR_9->ms_card;
 unsigned int VAR_11 = FUNC_0(VAR_8);
 int VAR_12;
 if ((FUNC_2(VAR_9, VAR_11) == VAR_3) &&
     (VAR_10->format_status == VAR_1)) {
  if ((VAR_8->cmnd[0] != 140) &&
      (VAR_8->cmnd[0] != 148)) {

   FUNC_14(VAR_9, VAR_11, VAR_0, 0x02, 0, 0x04, 0x04,
           0, (u16)(VAR_10->progress));
   return VAR_6;
  }
 }

 switch (VAR_8->cmnd[0]) {
 case 143:
 case 129:
 case 142:
 case 128:
  VAR_12 = FUNC_11(VAR_8, VAR_9);

  FUNC_4(VAR_8, VAR_9);

  break;

 case 132:
  VAR_12 = FUNC_17(VAR_8, VAR_9);
  break;

 case 148:
  VAR_12 = FUNC_3(VAR_8, VAR_9);
  break;

 case 141:
  VAR_12 = FUNC_9(VAR_8, VAR_9);
  break;

 case 133:
  VAR_12 = FUNC_16(VAR_8, VAR_9);
  break;

 case 152:
  VAR_12 = FUNC_1(VAR_8, VAR_9);
  break;

 case 140:
  VAR_12 = FUNC_12(VAR_8, VAR_9);
  break;

 case 146:
 case 145:
  VAR_12 = FUNC_7(VAR_8, VAR_9);
  break;

 case 0x23:
  VAR_12 = FUNC_10(VAR_8, VAR_9);
  break;

 case 131:
  VAR_12 = FUNC_18(VAR_8, VAR_9);
  break;

 case 144:
  VAR_12 = FUNC_8(VAR_8, VAR_9);
  break;
 case 149:
 case 147:
 case 130:
  VAR_12 = VAR_7;
  break;

 default:
  FUNC_15(VAR_9, VAR_11, VAR_5);
  VAR_12 = VAR_6;
 }

 return VAR_12;
}
