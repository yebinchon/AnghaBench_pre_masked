
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int* cmnd; } ;
struct rtsx_chip {scalar_t__ ss_en; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (struct scsi_cmnd*) ;
 scalar_t__ VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct rtsx_chip*,unsigned int) ;
 scalar_t__ FUNC_2 (struct rtsx_chip*,unsigned int) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*) ;
 scalar_t__ FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (struct rtsx_chip*,int ) ;
 int FUNC_7 (struct rtsx_chip*) ;
 int FUNC_8 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_9 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_10 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_11 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_12 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_13 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_14 (struct rtsx_chip*,unsigned int,int ) ;
 int FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct scsi_cmnd *VAR_7, struct rtsx_chip *VAR_8)
{
 unsigned int VAR_9 = FUNC_0(VAR_7);
 int VAR_10;

 FUNC_3(VAR_8);

 if (VAR_8->ss_en && (FUNC_5(VAR_8) == VAR_1)) {
  FUNC_4(VAR_8);
  FUNC_15(100);
 }
 FUNC_6(VAR_8, VAR_0);

 FUNC_7(VAR_8);

 if (!FUNC_1(VAR_8, VAR_9)) {
  FUNC_14(VAR_8, VAR_9, VAR_5);
  return VAR_6;
 }
 if (FUNC_2(VAR_8, VAR_9) != VAR_2) {
  FUNC_14(VAR_8, VAR_9, VAR_4);
  return VAR_6;
 }

 switch (VAR_7->cmnd[0]) {
 case 128:
  VAR_10 = FUNC_13(VAR_7, VAR_8);
  break;

 case 133:
  VAR_10 = FUNC_8(VAR_7, VAR_8);
  break;

 case 132:
  VAR_10 = FUNC_9(VAR_7, VAR_8);
  break;

 case 131:
  VAR_10 = FUNC_10(VAR_7, VAR_8);
  break;

 case 130:
  VAR_10 = FUNC_11(VAR_7, VAR_8);
  break;

 case 129:
  VAR_10 = FUNC_12(VAR_7, VAR_8);
  break;

 default:
  FUNC_14(VAR_8, VAR_9, VAR_3);
  return VAR_6;
 }

 return VAR_10;
}
