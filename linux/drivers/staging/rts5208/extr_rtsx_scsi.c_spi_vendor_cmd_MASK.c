
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_cmnd {int* cmnd; } ;
struct rtsx_chip {scalar_t__ ss_en; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtsx_chip*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_1 (struct scsi_cmnd*) ;







 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int ) ;
 scalar_t__ FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (struct rtsx_chip*,int ,int*) ;
 int FUNC_7 (struct rtsx_chip*,int ) ;
 int FUNC_8 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_9 (struct rtsx_chip*,unsigned int,int ) ;
 int FUNC_10 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_11 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_12 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_13 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_14 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_15 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_16 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct scsi_cmnd *VAR_8, struct rtsx_chip *VAR_9)
{
 int VAR_10;
 unsigned int VAR_11 = FUNC_1(VAR_8);
 u8 VAR_12;

 if (FUNC_0(VAR_9, 0x5208) || FUNC_0(VAR_9, 0x5288)) {
  FUNC_9(VAR_9, VAR_11, VAR_3);
  return VAR_6;
 }

 FUNC_2(VAR_9);

 if (VAR_9->ss_en && (FUNC_5(VAR_9) == VAR_2)) {
  FUNC_3(VAR_9);
  FUNC_17(100);
 }
 FUNC_7(VAR_9, VAR_1);

 FUNC_4(VAR_9, VAR_4);

 FUNC_6(VAR_9, VAR_0, &VAR_12);
 FUNC_8(VAR_9, VAR_0, 0x07, VAR_12 & 0x06);

 switch (VAR_8->cmnd[2]) {
 case 133:
  VAR_10 = FUNC_11(VAR_8, VAR_9);
  break;

 case 130:
  VAR_10 = FUNC_14(VAR_8, VAR_9);
  break;

 case 132:
  VAR_10 = FUNC_13(VAR_8, VAR_9);
  break;

 case 131:
  VAR_10 = FUNC_12(VAR_8, VAR_9);
  break;

 case 129:
  VAR_10 = FUNC_15(VAR_8, VAR_9);
  break;

 case 128:
  VAR_10 = FUNC_16(VAR_8, VAR_9);
  break;

 case 134:
  VAR_10 = FUNC_10(VAR_8, VAR_9);
  break;

 default:
  FUNC_8(VAR_9, VAR_0, 0x07, VAR_12);

  FUNC_9(VAR_9, VAR_11, VAR_3);
  return VAR_6;
 }

 FUNC_8(VAR_9, VAR_0, 0x07, VAR_12);

 if (VAR_10 != VAR_5)
  return VAR_6;

 return VAR_7;
}
