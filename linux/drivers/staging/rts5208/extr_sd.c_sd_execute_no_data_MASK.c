
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sd_info {int pre_cmd_err; int last_rsp_type; int sd_lock_status; int sd_addr; int * rsp; int sd_pass_thru_en; } ;
struct scsi_cmnd {int* cmnd; } ;
struct rtsx_chip {int card_ready; struct sd_info sd_card; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sd_info*) ;
 scalar_t__ FUNC_1 (struct sd_info*) ;
 scalar_t__ FUNC_2 (struct sd_info*) ;
 int VAR_1 ;
 unsigned int FUNC_3 (struct scsi_cmnd*) ;
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
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*,int,int,int,int *,int,int) ;
 int FUNC_6 (struct scsi_cmnd*,int*,int*) ;
 int FUNC_7 (struct rtsx_chip*) ;
 int FUNC_8 (struct rtsx_chip*,int ,int,int ) ;
 int FUNC_9 (struct scsi_cmnd*,int ) ;
 int FUNC_10 (struct rtsx_chip*,int) ;
 int FUNC_11 (struct rtsx_chip*) ;
 int FUNC_12 (struct rtsx_chip*) ;
 int FUNC_13 (struct rtsx_chip*,unsigned int,int ) ;

int FUNC_14(struct scsi_cmnd *VAR_14, struct rtsx_chip *VAR_15)
{
 struct sd_info *VAR_16 = &VAR_15->sd_card;
 unsigned int VAR_17 = FUNC_3(VAR_14);
 int VAR_18, VAR_19;
 u8 VAR_20, VAR_21;
 bool VAR_22 = 0, VAR_23 = 0;
 u32 VAR_24;

 if (!VAR_16->sd_pass_thru_en) {
  FUNC_13(VAR_15, VAR_17, VAR_8);
  return VAR_12;
 }

 VAR_18 = FUNC_11(VAR_15);
 if (VAR_18 != VAR_11)
  return VAR_12;

 if (VAR_16->pre_cmd_err) {
  VAR_16->pre_cmd_err = 0;
  FUNC_13(VAR_15, VAR_17, VAR_7);
  return VAR_12;
 }

 VAR_20 = VAR_14->cmnd[2] & 0x3F;
 if (VAR_14->cmnd[1] & 0x02)
  VAR_22 = 1;

 if (VAR_14->cmnd[1] & 0x01)
  VAR_23 = 1;

 VAR_24 = ((u32)VAR_14->cmnd[3] << 24) | ((u32)VAR_14->cmnd[4] << 16) |
  ((u32)VAR_14->cmnd[5] << 8) | VAR_14->cmnd[6];

 VAR_18 = FUNC_6(VAR_14, &VAR_21, &VAR_19);
 if (VAR_18 != VAR_11) {
  FUNC_13(VAR_15, VAR_17, VAR_8);
  return VAR_12;
 }
 VAR_16->last_rsp_type = VAR_21;

 VAR_18 = FUNC_11(VAR_15);
 if (VAR_18 != VAR_11)
  return VAR_12;
 VAR_18 = FUNC_8(VAR_15, VAR_1, 0x03, VAR_2);
 if (VAR_18 != VAR_11)
  return VAR_12;


 if (VAR_22) {
  VAR_18 = FUNC_10(VAR_15, 0);
  if (VAR_18 != VAR_11)
   goto sd_execute_cmd_failed;
 }

 if (VAR_23) {
  VAR_18 = FUNC_5(VAR_15, VAR_0,
       VAR_16->sd_addr,
       VAR_6, ((void*)0), 0,
       0);
  if (VAR_18 != VAR_11)
   goto sd_execute_cmd_failed;
 }

 VAR_18 = FUNC_5(VAR_15, VAR_20, VAR_24, VAR_21,
      VAR_16->rsp, VAR_19, 0);
 if (VAR_18 != VAR_11)
  goto sd_execute_cmd_failed;

 if (VAR_22) {
  VAR_18 = FUNC_10(VAR_15, 1);
  if (VAR_18 != VAR_11)
   goto sd_execute_cmd_failed;
 }







 FUNC_9(VAR_14, 0);
 return VAR_13;

sd_execute_cmd_failed:
 VAR_16->pre_cmd_err = 1;
 FUNC_13(VAR_15, VAR_17, VAR_10);
 FUNC_7(VAR_15);
 FUNC_4(VAR_15);
 if (!(VAR_15->card_ready & VAR_4))
  FUNC_13(VAR_15, VAR_17, VAR_9);

 return VAR_12;
}
