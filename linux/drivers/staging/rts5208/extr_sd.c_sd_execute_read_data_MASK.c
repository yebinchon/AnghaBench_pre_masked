
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sd_info {int pre_cmd_err; int last_rsp_type; int sd_lock_status; int sd_addr; int rsp; int sd_pass_thru_en; } ;
struct scsi_cmnd {int* cmnd; } ;
struct rtsx_chip {int card_ready; struct sd_info sd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sd_info*) ;
 scalar_t__ FUNC_1 (struct sd_info*) ;
 scalar_t__ FUNC_2 (struct sd_info*) ;
 int VAR_2 ;
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
 int VAR_15 ;
 int VAR_16 ;
 unsigned int FUNC_3 (struct scsi_cmnd*) ;
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
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (struct rtsx_chip*,int,int ,int) ;
 int FUNC_7 (struct rtsx_chip*,int ,int,int ,int *,int ,int) ;
 int FUNC_8 (struct scsi_cmnd*,int*,int*) ;
 int FUNC_9 (int*) ;
 int* FUNC_10 (int,int ) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (struct rtsx_chip*) ;
 int FUNC_13 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_14 (struct rtsx_chip*) ;
 int FUNC_15 (struct rtsx_chip*) ;
 int FUNC_16 (struct rtsx_chip*) ;
 int FUNC_17 (struct rtsx_chip*) ;
 int FUNC_18 (int*,int,struct scsi_cmnd*) ;
 int FUNC_19 (struct rtsx_chip*,int,int ,int ,int ,int ,int) ;
 int FUNC_20 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_21 (struct scsi_cmnd*) ;
 int FUNC_22 (struct scsi_cmnd*,int ) ;
 int FUNC_23 (struct scsi_cmnd*) ;
 int FUNC_24 (struct scsi_cmnd*) ;
 int FUNC_25 (struct rtsx_chip*,int ,int*,int,int,int,int,int*,int,int) ;
 int FUNC_26 (struct rtsx_chip*,int) ;
 int FUNC_27 (struct rtsx_chip*) ;
 int FUNC_28 (struct rtsx_chip*,unsigned int,int ) ;
 int FUNC_29 (int ,struct rtsx_chip*,int,int ) ;

int FUNC_30(struct scsi_cmnd *VAR_43, struct rtsx_chip *VAR_44)
{
 struct sd_info *VAR_45 = &VAR_44->sd_card;
 unsigned int VAR_46 = FUNC_3(VAR_43);
 int VAR_47, VAR_48, VAR_49;
 bool VAR_50 = 0, VAR_51 = 0;
 u8 VAR_52, VAR_53, VAR_54;
 bool VAR_55 = 0, VAR_56 = 0, VAR_57 = 0;
 u32 VAR_58;

 if (!VAR_45->sd_pass_thru_en) {
  FUNC_28(VAR_44, VAR_46, VAR_32);
  return VAR_40;
 }

 if (VAR_45->pre_cmd_err) {
  VAR_45->pre_cmd_err = 0;
  FUNC_28(VAR_44, VAR_46, VAR_31);
  return VAR_40;
 }

 VAR_47 = FUNC_27(VAR_44);
 if (VAR_47 != VAR_37)
  return VAR_40;

 VAR_52 = VAR_43->cmnd[2] & 0x3F;
 if (VAR_43->cmnd[1] & 0x04)
  VAR_56 = 1;

 if (VAR_43->cmnd[1] & 0x02)
  VAR_55 = 1;

 if (VAR_43->cmnd[1] & 0x01)
  VAR_57 = 1;

 VAR_58 = ((u32)VAR_43->cmnd[7] << 16) | ((u32)VAR_43->cmnd[8]
      << 8) | VAR_43->cmnd[9];

 VAR_47 = FUNC_8(VAR_43, &VAR_53, &VAR_48);
 if (VAR_47 != VAR_37) {
  FUNC_28(VAR_44, VAR_46, VAR_32);
  return VAR_40;
 }
 VAR_45->last_rsp_type = VAR_53;

 VAR_47 = FUNC_27(VAR_44);
 if (VAR_47 != VAR_37)
  return VAR_40;
 VAR_54 = VAR_18;


 if (VAR_58 < 512) {
  VAR_47 = FUNC_7(VAR_44, VAR_36, VAR_58,
       VAR_24, ((void*)0), 0,
       0);
  if (VAR_47 != VAR_37)
   goto sd_execute_read_cmd_failed;
 }

 if (VAR_55) {
  VAR_47 = FUNC_26(VAR_44, 0);
  if (VAR_47 != VAR_37)
   goto sd_execute_read_cmd_failed;
 }

 if (VAR_57) {
  VAR_47 = FUNC_7(VAR_44, VAR_0,
       VAR_45->sd_addr,
       VAR_24, ((void*)0), 0,
       0);
  if (VAR_47 != VAR_37)
   goto sd_execute_read_cmd_failed;
 }

 if (VAR_58 <= 512) {
  int VAR_59;
  u8 *VAR_60;
  u16 VAR_61, VAR_62;
  u8 VAR_63[5];

  VAR_61 = ((u16)(VAR_43->cmnd[8] & 0x03) << 8) | VAR_43->cmnd[9];
  VAR_62 = 1;

  VAR_63[0] = 0x40 | VAR_52;
  VAR_63[1] = VAR_43->cmnd[3];
  VAR_63[2] = VAR_43->cmnd[4];
  VAR_63[3] = VAR_43->cmnd[5];
  VAR_63[4] = VAR_43->cmnd[6];

  VAR_60 = FUNC_10(VAR_58, VAR_4);
  if (!VAR_60)
   return VAR_39;

  VAR_47 = FUNC_25(VAR_44, VAR_27, VAR_63, 5, VAR_61,
          VAR_62, VAR_54, VAR_60, VAR_58, 2000);
  if (VAR_47 != VAR_37) {
   VAR_50 = 1;
   FUNC_9(VAR_60);
   FUNC_14(VAR_44);
   goto sd_execute_read_cmd_failed;
  }

  VAR_59 = FUNC_11(VAR_58, FUNC_21(VAR_43));
  FUNC_18(VAR_60, VAR_59, VAR_43);

  FUNC_9(VAR_60);
 } else if (!(VAR_58 & 0x1FF)) {
  FUNC_16(VAR_44);

  FUNC_29(VAR_3, VAR_44, VAR_58, VAR_2);

  FUNC_13(VAR_44, VAR_42, VAR_7, 0xFF,
        0x02);
  FUNC_13(VAR_44, VAR_42, VAR_8, 0xFF,
        0x00);
  FUNC_13(VAR_44, VAR_42, VAR_5,
        0xFF, (VAR_43->cmnd[7] & 0xFE) >> 1);
  FUNC_13(VAR_44, VAR_42, VAR_6,
        0xFF, (u8)((VAR_58 & 0x0001FE00) >> 9));

  FUNC_13(VAR_44, VAR_42, VAR_11, 0xFF,
        0x40 | VAR_52);
  FUNC_13(VAR_44, VAR_42, VAR_12, 0xFF,
        VAR_43->cmnd[3]);
  FUNC_13(VAR_44, VAR_42, VAR_13, 0xFF,
        VAR_43->cmnd[4]);
  FUNC_13(VAR_44, VAR_42, VAR_14, 0xFF,
        VAR_43->cmnd[5]);
  FUNC_13(VAR_44, VAR_42, VAR_15, 0xFF,
        VAR_43->cmnd[6]);

  FUNC_13(VAR_44, VAR_42, VAR_9, 0x03, VAR_54);
  FUNC_13(VAR_44, VAR_42, VAR_10, 0xFF, VAR_53);

  FUNC_13(VAR_44, VAR_42, VAR_16,
        0xFF, VAR_26 | VAR_29);
  FUNC_13(VAR_44, VAR_1, VAR_16,
        VAR_28, VAR_28);

  FUNC_17(VAR_44);

  VAR_47 = FUNC_19(VAR_44, VAR_22, FUNC_24(VAR_43),
         FUNC_21(VAR_43),
         FUNC_23(VAR_43),
         VAR_3, 10000);
  if (VAR_47 < 0) {
   VAR_50 = 1;
   FUNC_14(VAR_44);
   goto sd_execute_read_cmd_failed;
  }

 } else {
  goto sd_execute_read_cmd_failed;
 }

 VAR_47 = FUNC_6(VAR_44, VAR_48, VAR_45->rsp, VAR_53);
 if (VAR_47 != VAR_37)
  goto sd_execute_read_cmd_failed;

 if (VAR_55) {
  VAR_47 = FUNC_26(VAR_44, 1);
  if (VAR_47 != VAR_37)
   goto sd_execute_read_cmd_failed;
 }

 if (VAR_56) {
  VAR_47 = FUNC_7(VAR_44, VAR_38, 0,
       VAR_25, ((void*)0), 0,
       0);
  if (VAR_47 != VAR_37)
   goto sd_execute_read_cmd_failed;
 }

 if (VAR_58 < 512) {
  VAR_47 = FUNC_7(VAR_44, VAR_36, 0x200,
       VAR_24, ((void*)0), 0,
       0);
  if (VAR_47 != VAR_37)
   goto sd_execute_read_cmd_failed;

  VAR_47 = FUNC_20(VAR_44, VAR_20, 0xFF, 0x02);
  if (VAR_47 != VAR_37)
   goto sd_execute_read_cmd_failed;

  VAR_47 = FUNC_20(VAR_44, VAR_21, 0xFF, 0x00);
  if (VAR_47 != VAR_37)
   goto sd_execute_read_cmd_failed;
 }

 if ((VAR_43->cmnd[1] & 0x02) || (VAR_43->cmnd[1] & 0x04))
  VAR_51 = 1;

 for (VAR_49 = 0; VAR_49 < 3; VAR_49++) {
  VAR_47 = FUNC_7(VAR_44, VAR_30,
       VAR_45->sd_addr,
      VAR_24, ((void*)0), 0,
      VAR_51);
  if (VAR_47 == VAR_37)
   break;
 }
 if (VAR_47 != VAR_37)
  goto sd_execute_read_cmd_failed;

 FUNC_22(VAR_43, 0);
 return VAR_41;

sd_execute_read_cmd_failed:
 VAR_45->pre_cmd_err = 1;
 FUNC_28(VAR_44, VAR_46, VAR_35);
 if (VAR_50)
  FUNC_28(VAR_44, VAR_46, VAR_34);

 FUNC_12(VAR_44);
 FUNC_5(VAR_44);
 if (!(VAR_44->card_ready & VAR_22))
  FUNC_28(VAR_44, VAR_46, VAR_33);

 return VAR_40;
}
