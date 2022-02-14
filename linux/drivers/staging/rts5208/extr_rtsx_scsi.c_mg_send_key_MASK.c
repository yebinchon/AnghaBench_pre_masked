
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_cmnd {int* cmnd; } ;
struct ms_info {int mg_entry_num; } ;
struct rtsx_chip {scalar_t__ ss_en; struct ms_info ms_card; } ;


 int FUNC_0 (struct ms_info*) ;
 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_1 (struct scsi_cmnd*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct rtsx_chip*,unsigned int) ;
 scalar_t__ FUNC_3 (struct rtsx_chip*,unsigned int) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (struct rtsx_chip*,unsigned int) ;
 int FUNC_6 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_7 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_8 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_9 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_10 (struct rtsx_chip*) ;
 int FUNC_11 (struct rtsx_chip*) ;
 int FUNC_12 (struct rtsx_chip*) ;
 int FUNC_13 (struct rtsx_chip*) ;
 scalar_t__ FUNC_14 (struct rtsx_chip*) ;
 int FUNC_15 (struct rtsx_chip*,int ) ;
 int FUNC_16 (struct scsi_cmnd*) ;
 int FUNC_17 (struct scsi_cmnd*,int ) ;
 int FUNC_18 (struct rtsx_chip*,unsigned int,int ) ;
 int FUNC_19 (int) ;

__attribute__((used)) static int FUNC_20(struct scsi_cmnd *VAR_12, struct rtsx_chip *VAR_13)
{
 struct ms_info *VAR_14 = &VAR_13->ms_card;
 unsigned int VAR_15 = FUNC_1(VAR_12);
 int VAR_16;
 u8 VAR_17;

 FUNC_12(VAR_13);

 if (VAR_13->ss_en && (FUNC_14(VAR_13) == VAR_3)) {
  FUNC_13(VAR_13);
  FUNC_19(100);
 }
 FUNC_15(VAR_13, VAR_2);

 FUNC_10(VAR_13);

 if (!FUNC_2(VAR_13, VAR_15)) {
  FUNC_18(VAR_13, VAR_15, VAR_6);
  return VAR_10;
 }
 if (FUNC_3(VAR_13, VAR_15)) {
  FUNC_18(VAR_13, VAR_15, VAR_7);
  return VAR_10;
 }
 if (FUNC_5(VAR_13, VAR_15) != VAR_1) {
  FUNC_18(VAR_13, VAR_15, VAR_5);
  return VAR_10;
 }

 if (VAR_12->cmnd[7] != VAR_0) {
  FUNC_18(VAR_13, VAR_15, VAR_4);
  return VAR_10;
 }

 if (!FUNC_0(VAR_14)) {
  FUNC_18(VAR_13, VAR_15, VAR_8);
  return VAR_10;
 }

 VAR_17 = VAR_12->cmnd[10] & 0x3F;
 FUNC_4(FUNC_11(VAR_13), "key_format = 0x%x\n", VAR_17);

 switch (VAR_17) {
 case 128:
  if ((FUNC_16(VAR_12) == 0x0C) &&
      (VAR_12->cmnd[8] == 0x00) &&
      (VAR_12->cmnd[9] == 0x0C)) {
   VAR_16 = FUNC_9(VAR_12, VAR_13);
   if (VAR_16 != VAR_9)
    return VAR_10;

  } else {
   FUNC_18(VAR_13, VAR_15,
           VAR_4);
   return VAR_10;
  }
  break;

 case 131:
  if ((FUNC_16(VAR_12) == 0x0C) &&
      (VAR_12->cmnd[8] == 0x00) &&
      (VAR_12->cmnd[9] == 0x0C)) {
   VAR_16 = FUNC_6(VAR_12, VAR_13);
   if (VAR_16 != VAR_9)
    return VAR_10;

  } else {
   FUNC_18(VAR_13, VAR_15,
           VAR_4);
   return VAR_10;
  }
  break;

 case 130:
  if ((FUNC_16(VAR_12) == 0x0C) &&
      (VAR_12->cmnd[8] == 0x00) &&
      (VAR_12->cmnd[9] == 0x0C)) {
   VAR_16 = FUNC_7(VAR_12, VAR_13);
   if (VAR_16 != VAR_9)
    return VAR_10;

  } else {
   FUNC_18(VAR_13, VAR_15,
           VAR_4);
   return VAR_10;
  }
  break;

 case 129:
  VAR_14->mg_entry_num = VAR_12->cmnd[5];
  if ((FUNC_16(VAR_12) == 0x404) &&
      (VAR_12->cmnd[8] == 0x04) &&
      (VAR_12->cmnd[9] == 0x04) &&
      (VAR_12->cmnd[2] == 0x00) &&
      (VAR_12->cmnd[3] == 0x00) &&
      (VAR_12->cmnd[4] == 0x00) &&
      (VAR_12->cmnd[5] < 32)) {
   VAR_16 = FUNC_8(VAR_12, VAR_13);
   if (VAR_16 != VAR_9)
    return VAR_10;

  } else {
   FUNC_18(VAR_13, VAR_15,
           VAR_4);
   return VAR_10;
  }
  break;

 default:
  FUNC_18(VAR_13, VAR_15, VAR_4);
  return VAR_10;
 }

 FUNC_17(VAR_12, 0);
 return VAR_11;
}
