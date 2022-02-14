
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sd_info {int pre_cmd_err; int sd_lock_status; int last_rsp_type; int sd_addr; int sd_lock_notify; int sd_erase_status; int * rsp; int sd_pass_thru_en; } ;
struct scsi_cmnd {int* cmnd; } ;
struct rtsx_chip {int card_ready; struct sd_info sd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sd_info*) ;
 scalar_t__ FUNC_1 (struct sd_info*) ;
 scalar_t__ FUNC_2 (struct sd_info*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int FUNC_3 (struct scsi_cmnd*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (struct rtsx_chip*,int,int,int,int *,int,int) ;
 int FUNC_7 (struct scsi_cmnd*,int*,int*) ;
 int FUNC_8 (int*) ;
 int* FUNC_9 (int,int ) ;
 int FUNC_10 (struct rtsx_chip*) ;
 int FUNC_11 (struct rtsx_chip*) ;
 int FUNC_12 (struct rtsx_chip*,int ,int,int,int) ;
 int FUNC_13 (struct rtsx_chip*) ;
 int FUNC_14 (struct rtsx_chip*) ;
 int FUNC_15 (struct rtsx_chip*) ;
 int FUNC_16 (struct rtsx_chip*,int,int) ;
 int FUNC_17 (struct rtsx_chip*) ;
 int FUNC_18 (int*,int,struct scsi_cmnd*) ;
 int FUNC_19 (struct rtsx_chip*,int,int ,int ,int ,int ,int) ;
 int FUNC_20 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_21 (struct scsi_cmnd*) ;
 int FUNC_22 (struct scsi_cmnd*,int ) ;
 int FUNC_23 (struct scsi_cmnd*) ;
 int FUNC_24 (struct scsi_cmnd*) ;
 int FUNC_25 (struct rtsx_chip*,int) ;
 int FUNC_26 (struct rtsx_chip*) ;
 int FUNC_27 (struct rtsx_chip*) ;
 int FUNC_28 (struct rtsx_chip*,unsigned int,int ) ;
 int FUNC_29 (int ,struct rtsx_chip*,int,int ) ;

int FUNC_30(struct scsi_cmnd *VAR_47, struct rtsx_chip *VAR_48)
{
 struct sd_info *VAR_49 = &VAR_48->sd_card;
 unsigned int VAR_50 = FUNC_3(VAR_47);
 int VAR_51, VAR_52, VAR_53;
 bool VAR_54 = 0, VAR_55 = 0;
 u8 VAR_56, VAR_57;
 bool VAR_58 = 0, VAR_59 = 0, VAR_60 = 0;
 u32 VAR_61, VAR_62;






 if (!VAR_49->sd_pass_thru_en) {
  FUNC_28(VAR_48, VAR_50, VAR_36);
  return VAR_44;
 }

 if (VAR_49->pre_cmd_err) {
  VAR_49->pre_cmd_err = 0;
  FUNC_28(VAR_48, VAR_50, VAR_35);
  return VAR_44;
 }

 VAR_51 = FUNC_26(VAR_48);
 if (VAR_51 != VAR_41)
  return VAR_44;

 VAR_56 = VAR_47->cmnd[2] & 0x3F;
 if (VAR_47->cmnd[1] & 0x04)
  VAR_59 = 1;

 if (VAR_47->cmnd[1] & 0x02)
  VAR_58 = 1;

 if (VAR_47->cmnd[1] & 0x01)
  VAR_60 = 1;

 VAR_61 = ((u32)VAR_47->cmnd[7] << 16) | ((u32)VAR_47->cmnd[8]
      << 8) | VAR_47->cmnd[9];
 VAR_62 = ((u32)VAR_47->cmnd[3] << 24) | ((u32)VAR_47->cmnd[4] << 16) |
  ((u32)VAR_47->cmnd[5] << 8) | VAR_47->cmnd[6];
 VAR_51 = FUNC_7(VAR_47, &VAR_57, &VAR_52);
 if (VAR_51 != VAR_41) {
  FUNC_28(VAR_48, VAR_50, VAR_36);
  return VAR_44;
 }
 VAR_49->last_rsp_type = VAR_57;

 VAR_51 = FUNC_26(VAR_48);
 if (VAR_51 != VAR_41)
  return VAR_44;
 VAR_51 = FUNC_20(VAR_48, VAR_13, 0x03, VAR_15);
 if (VAR_51 != VAR_41)
  return VAR_44;


 if (VAR_61 < 512) {
  VAR_51 = FUNC_6(VAR_48, VAR_40, VAR_61,
       VAR_25, ((void*)0), 0,
       0);
  if (VAR_51 != VAR_41)
   goto sd_execute_write_cmd_failed;
 }

 if (VAR_58) {
  VAR_51 = FUNC_25(VAR_48, 0);
  if (VAR_51 != VAR_41)
   goto sd_execute_write_cmd_failed;
 }

 if (VAR_60) {
  VAR_51 = FUNC_6(VAR_48, VAR_0,
       VAR_49->sd_addr,
       VAR_25, ((void*)0), 0,
       0);
  if (VAR_51 != VAR_41)
   goto sd_execute_write_cmd_failed;
 }

 VAR_51 = FUNC_6(VAR_48, VAR_56, VAR_62, VAR_57,
      VAR_49->rsp, VAR_52, 0);
 if (VAR_51 != VAR_41)
  goto sd_execute_write_cmd_failed;

 if (VAR_61 <= 512) {
  u16 VAR_63;
  u8 *VAR_64;

  VAR_64 = FUNC_9(VAR_61, VAR_5);
  if (!VAR_64)
   return VAR_43;

  FUNC_18(VAR_64, VAR_61, VAR_47);






  if (VAR_61 > 256) {
   FUNC_15(VAR_48);
   for (VAR_63 = 0; VAR_63 < 256; VAR_63++) {
    FUNC_12(VAR_48, VAR_46,
          VAR_8 + VAR_63, 0xFF, VAR_64[VAR_63]);
   }
   VAR_51 = FUNC_16(VAR_48, 0, 250);
   if (VAR_51 != VAR_41) {
    FUNC_8(VAR_64);
    goto sd_execute_write_cmd_failed;
   }

   FUNC_15(VAR_48);
   for (VAR_63 = 256; VAR_63 < VAR_61; VAR_63++) {
    FUNC_12(VAR_48, VAR_46,
          VAR_8 + VAR_63, 0xFF, VAR_64[VAR_63]);
   }
   VAR_51 = FUNC_16(VAR_48, 0, 250);
   if (VAR_51 != VAR_41) {
    FUNC_8(VAR_64);
    goto sd_execute_write_cmd_failed;
   }
  } else {
   FUNC_15(VAR_48);
   for (VAR_63 = 0; VAR_63 < VAR_61; VAR_63++) {
    FUNC_12(VAR_48, VAR_46,
          VAR_8 + VAR_63, 0xFF, VAR_64[VAR_63]);
   }
   VAR_51 = FUNC_16(VAR_48, 0, 250);
   if (VAR_51 != VAR_41) {
    FUNC_8(VAR_64);
    goto sd_execute_write_cmd_failed;
   }
  }

  FUNC_8(VAR_64);

  FUNC_15(VAR_48);

  FUNC_12(VAR_48, VAR_46, VAR_11, 0xFF,
        VAR_47->cmnd[8] & 0x03);
  FUNC_12(VAR_48, VAR_46, VAR_12, 0xFF,
        VAR_47->cmnd[9]);
  FUNC_12(VAR_48, VAR_46, VAR_9, 0xFF,
        0x00);
  FUNC_12(VAR_48, VAR_46, VAR_10, 0xFF,
        0x01);
  FUNC_12(VAR_48, VAR_46, VAR_1, 0x01,
        VAR_7);

  FUNC_12(VAR_48, VAR_46, VAR_14, 0xFF,
        VAR_29 | VAR_31);
  FUNC_12(VAR_48, VAR_2, VAR_14,
        VAR_30, VAR_30);

  VAR_51 = FUNC_16(VAR_48, VAR_19, 250);
 } else if (!(VAR_61 & 0x1FF)) {
  FUNC_15(VAR_48);

  FUNC_29(VAR_4, VAR_48, VAR_61, VAR_3);

  FUNC_12(VAR_48, VAR_46, VAR_11, 0xFF,
        0x02);
  FUNC_12(VAR_48, VAR_46, VAR_12, 0xFF,
        0x00);
  FUNC_12(VAR_48, VAR_46, VAR_9,
        0xFF, (VAR_47->cmnd[7] & 0xFE) >> 1);
  FUNC_12(VAR_48, VAR_46, VAR_10,
        0xFF, (u8)((VAR_61 & 0x0001FE00) >> 9));

  FUNC_12(VAR_48, VAR_46, VAR_14, 0xFF,
        VAR_29 | VAR_31);
  FUNC_12(VAR_48, VAR_2, VAR_14,
        VAR_30, VAR_30);

  FUNC_17(VAR_48);

  VAR_51 = FUNC_19(VAR_48, VAR_19, FUNC_24(VAR_47),
         FUNC_21(VAR_47),
         FUNC_23(VAR_47),
         VAR_4, 10000);

 } else {
  goto sd_execute_write_cmd_failed;
 }

 if (VAR_51 < 0) {
  VAR_54 = 1;
  FUNC_13(VAR_48);
  goto sd_execute_write_cmd_failed;
 }
 if (VAR_58) {
  VAR_51 = FUNC_25(VAR_48, 1);
  if (VAR_51 != VAR_41)
   goto sd_execute_write_cmd_failed;
 }

 if (VAR_59) {
  VAR_51 = FUNC_6(VAR_48, VAR_42, 0,
       VAR_26, ((void*)0), 0,
       0);
  if (VAR_51 != VAR_41)
   goto sd_execute_write_cmd_failed;
 }

 if (VAR_61 < 512) {
  VAR_51 = FUNC_6(VAR_48, VAR_40, 0x200,
       VAR_25, ((void*)0), 0,
       0);
  if (VAR_51 != VAR_41)
   goto sd_execute_write_cmd_failed;

  VAR_51 = FUNC_20(VAR_48, VAR_17, 0xFF, 0x02);
  if (VAR_51 != VAR_41)
   goto sd_execute_write_cmd_failed;

  VAR_51 = FUNC_20(VAR_48, VAR_18, 0xFF, 0x00);
  if (VAR_51 != VAR_41)
   goto sd_execute_write_cmd_failed;
 }

 if ((VAR_47->cmnd[1] & 0x02) || (VAR_47->cmnd[1] & 0x04))
  VAR_55 = 1;

 for (VAR_53 = 0; VAR_53 < 3; VAR_53++) {
  VAR_51 = FUNC_6(VAR_48, VAR_34,
       VAR_49->sd_addr,
       VAR_25, ((void*)0), 0,
       VAR_55);
  if (VAR_51 == VAR_41)
   break;
 }
 if (VAR_51 != VAR_41)
  goto sd_execute_write_cmd_failed;
 FUNC_22(VAR_47, 0);
 return VAR_45;

sd_execute_write_cmd_failed:
 VAR_49->pre_cmd_err = 1;
 FUNC_28(VAR_48, VAR_50, VAR_39);
 if (VAR_54)
  FUNC_28(VAR_48, VAR_50, VAR_38);

 FUNC_10(VAR_48);
 FUNC_5(VAR_48);
 if (!(VAR_48->card_ready & VAR_19))
  FUNC_28(VAR_48, VAR_50, VAR_37);

 return VAR_44;
}
