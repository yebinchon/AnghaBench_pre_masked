
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
 int FUNC_2 (struct rtsx_chip*,unsigned int) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (struct rtsx_chip*,unsigned int) ;
 int FUNC_5 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_6 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_7 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_8 (struct rtsx_chip*) ;
 int FUNC_9 (struct rtsx_chip*) ;
 int FUNC_10 (struct rtsx_chip*) ;
 int FUNC_11 (struct rtsx_chip*) ;
 scalar_t__ FUNC_12 (struct rtsx_chip*) ;
 int FUNC_13 (struct rtsx_chip*,int ) ;
 int FUNC_14 (struct scsi_cmnd*) ;
 int FUNC_15 (struct scsi_cmnd*,int ) ;
 int FUNC_16 (struct rtsx_chip*,unsigned int,int ) ;
 int FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct scsi_cmnd *VAR_11, struct rtsx_chip *VAR_12)
{
 struct ms_info *VAR_13 = &VAR_12->ms_card;
 unsigned int VAR_14 = FUNC_1(VAR_11);
 int VAR_15;
 u8 VAR_16;

 FUNC_10(VAR_12);

 if (VAR_12->ss_en && (FUNC_12(VAR_12) == VAR_3)) {
  FUNC_11(VAR_12);
  FUNC_17(100);
 }
 FUNC_13(VAR_12, VAR_2);

 FUNC_8(VAR_12);

 if (!FUNC_2(VAR_12, VAR_14)) {
  FUNC_16(VAR_12, VAR_14, VAR_6);
  return VAR_9;
 }
 if (FUNC_4(VAR_12, VAR_14) != VAR_1) {
  FUNC_16(VAR_12, VAR_14, VAR_5);
  return VAR_9;
 }

 if (VAR_11->cmnd[7] != VAR_0) {
  FUNC_16(VAR_12, VAR_14, VAR_4);
  return VAR_9;
 }

 if (!FUNC_0(VAR_13)) {
  FUNC_16(VAR_12, VAR_14, VAR_7);
  return VAR_9;
 }

 VAR_16 = VAR_11->cmnd[10] & 0x3F;
 FUNC_3(FUNC_9(VAR_12), "key_format = 0x%x\n", VAR_16);

 switch (VAR_16) {
 case 129:
  if ((FUNC_14(VAR_11) == 0x41C) &&
      (VAR_11->cmnd[8] == 0x04) &&
      (VAR_11->cmnd[9] == 0x1C)) {
   VAR_15 = FUNC_6(VAR_11, VAR_12);
   if (VAR_15 != VAR_8)
    return VAR_9;

  } else {
   FUNC_16(VAR_12, VAR_14,
           VAR_4);
   return VAR_9;
  }
  break;

 case 128:
  if ((FUNC_14(VAR_11) == 0x24) &&
      (VAR_11->cmnd[8] == 0x00) &&
      (VAR_11->cmnd[9] == 0x24)) {
   VAR_15 = FUNC_7(VAR_11, VAR_12);
   if (VAR_15 != VAR_8)
    return VAR_9;

  } else {
   FUNC_16(VAR_12, VAR_14,
           VAR_4);
   return VAR_9;
  }
  break;

 case 130:
  VAR_13->mg_entry_num = VAR_11->cmnd[5];
  if ((FUNC_14(VAR_11) == 0x404) &&
      (VAR_11->cmnd[8] == 0x04) &&
      (VAR_11->cmnd[9] == 0x04) &&
      (VAR_11->cmnd[2] == 0x00) &&
      (VAR_11->cmnd[3] == 0x00) &&
      (VAR_11->cmnd[4] == 0x00) &&
      (VAR_11->cmnd[5] < 32)) {
   VAR_15 = FUNC_5(VAR_11, VAR_12);
   if (VAR_15 != VAR_8)
    return VAR_9;

  } else {
   FUNC_16(VAR_12, VAR_14,
           VAR_4);
   return VAR_9;
  }
  break;

 default:
  FUNC_16(VAR_12, VAR_14, VAR_4);
  return VAR_9;
 }

 FUNC_15(VAR_11, 0);
 return VAR_10;
}
