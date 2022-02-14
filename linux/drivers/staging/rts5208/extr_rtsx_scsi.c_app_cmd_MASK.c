
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int* cmnd; } ;
struct rtsx_chip {int dummy; } ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int VAR_0 ;



 int VAR_1 ;





 int FUNC_1 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_2 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_3 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_4 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_5 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_6 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_7 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_8 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_9 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_10 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_11 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_12 (struct rtsx_chip*,int ,int ) ;
 int FUNC_13 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_14 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_15 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_16 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_17 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_18 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_19 (struct scsi_cmnd*,struct rtsx_chip*) ;

__attribute__((used)) static int FUNC_20(struct scsi_cmnd *VAR_2, struct rtsx_chip *VAR_3)
{
 int VAR_4;

 switch (VAR_2->cmnd[2]) {
 case 142:
 case 141:
  VAR_4 = FUNC_10(VAR_2, VAR_3);
  break;

 case 137:
  VAR_4 = FUNC_8(VAR_2, VAR_3);
  break;

 case 129:
  VAR_4 = FUNC_18(VAR_2, VAR_3);
  break;

 case 143:
  VAR_4 = FUNC_4(VAR_2, VAR_3);
  break;

 case 134:
  VAR_4 = FUNC_13(VAR_2, VAR_3);
  break;

 case 147:
 case 146:
  VAR_4 = FUNC_1(VAR_2, VAR_3);
  break;

 case 136:
  VAR_4 = FUNC_9(VAR_2, VAR_3);
  break;

 case 128:
  VAR_4 = FUNC_19(VAR_2, VAR_3);
  break;

 case 145:
  VAR_4 = FUNC_2(VAR_2, VAR_3);
  break;

 case 139:
  VAR_4 = FUNC_6(VAR_2, VAR_3);
  break;

 case 131:
  VAR_4 = FUNC_16(VAR_2, VAR_3);
  break;

 case 138:
  VAR_4 = FUNC_7(VAR_2, VAR_3);
  break;

 case 130:
  VAR_4 = FUNC_17(VAR_2, VAR_3);
  break;

 case 140:
  VAR_4 = FUNC_5(VAR_2, VAR_3);
  break;

 case 132:
  VAR_4 = FUNC_15(VAR_2, VAR_3);
  break;

 case 135:
  VAR_4 = FUNC_11(VAR_2, VAR_3);
  break;

 case 133:
  VAR_4 = FUNC_14(VAR_2, VAR_3);
  break;

 case 144:
  VAR_4 = FUNC_3(VAR_2, VAR_3);
  break;

 default:
  FUNC_12(VAR_3, FUNC_0(VAR_2),
          VAR_0);
  return VAR_1;
 }

 return VAR_4;
}
