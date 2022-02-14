
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sd_info {int sd_lock_status; scalar_t__ sd_erase_status; } ;
struct scsi_cmnd {int* cmnd; scalar_t__ sc_data_direction; } ;
struct rtsx_chip {int* rw_fail_cnt; int need_release; int* lun2card; int lun_mc; scalar_t__ ss_en; struct sd_info sd_card; } ;


 int FUNC_0 (int ,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_1 (struct scsi_cmnd*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int ,unsigned int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_3 (struct scsi_cmnd*,struct rtsx_chip*,int,int) ;
 int FUNC_4 (struct rtsx_chip*,unsigned int) ;
 scalar_t__ FUNC_5 (struct rtsx_chip*,unsigned int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct rtsx_chip*,unsigned int) ;
 scalar_t__ FUNC_8 (struct rtsx_chip*,unsigned int) ;
 int FUNC_9 (struct rtsx_chip*) ;
 int FUNC_10 (struct rtsx_chip*) ;
 int FUNC_11 (struct rtsx_chip*) ;
 scalar_t__ FUNC_12 (struct rtsx_chip*) ;
 int FUNC_13 (struct rtsx_chip*,int ) ;
 int FUNC_14 (struct scsi_cmnd*,int ) ;
 int FUNC_15 (struct rtsx_chip*,unsigned int,int ) ;
 int FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct scsi_cmnd *VAR_25, struct rtsx_chip *VAR_26)
{



 unsigned int VAR_27 = FUNC_1(VAR_25);
 int VAR_28;
 u32 VAR_29;
 u16 VAR_30;

 FUNC_10(VAR_26);

 if (VAR_26->ss_en && (FUNC_12(VAR_26) == VAR_7)) {
  FUNC_11(VAR_26);
  FUNC_16(100);
 }
 FUNC_13(VAR_26, VAR_6);

 if (!FUNC_4(VAR_26, VAR_27) || (FUNC_7(VAR_26, VAR_27) == 0)) {
  FUNC_15(VAR_26, VAR_27, VAR_14);
  return VAR_20;
 }

 if (!(FUNC_0(VAR_26->lun_mc, VAR_27))) {
  FUNC_2(VAR_26->lun_mc, VAR_27);
  FUNC_15(VAR_26, VAR_27, VAR_11);
  return VAR_20;
 }
 if ((VAR_25->cmnd[0] == VAR_4) || (VAR_25->cmnd[0] == VAR_23)) {
  VAR_29 = ((u32)VAR_25->cmnd[2] << 24) |
   ((u32)VAR_25->cmnd[3] << 16) |
   ((u32)VAR_25->cmnd[4] << 8) | ((u32)VAR_25->cmnd[5]);
  VAR_30 = ((u16)(VAR_25->cmnd[7]) << 8) | VAR_25->cmnd[8];
 } else if ((VAR_25->cmnd[0] == VAR_5) || (VAR_25->cmnd[0] == VAR_24)) {
  VAR_29 = ((u32)(VAR_25->cmnd[1] & 0x1F) << 16) |
   ((u32)VAR_25->cmnd[2] << 8) | ((u32)VAR_25->cmnd[3]);
  VAR_30 = VAR_25->cmnd[4];
  if (VAR_30 == 0)
   VAR_30 = 256;
 } else if ((VAR_25->cmnd[0] == VAR_22) &&
  (VAR_25->cmnd[1] == VAR_8) &&
  ((VAR_25->cmnd[2] == VAR_2) || (VAR_25->cmnd[2] == VAR_3))) {
  VAR_29 = ((u32)VAR_25->cmnd[4] << 24) |
   ((u32)VAR_25->cmnd[5] << 16) |
   ((u32)VAR_25->cmnd[6] << 8) | ((u32)VAR_25->cmnd[7]);
  VAR_30 = ((u16)(VAR_25->cmnd[9]) << 8) | VAR_25->cmnd[10];
 } else {
  FUNC_15(VAR_26, VAR_27, VAR_12);
  return VAR_20;
 }





 if ((VAR_29 > FUNC_7(VAR_26, VAR_27)) ||
     ((VAR_29 + VAR_30) > FUNC_7(VAR_26, VAR_27))) {
  FUNC_15(VAR_26, VAR_27, VAR_13);
  return VAR_20;
 }

 if (VAR_30 == 0) {
  FUNC_14(VAR_25, 0);
  return VAR_21;
 }

 if (VAR_26->rw_fail_cnt[VAR_27] == 3) {
  FUNC_6(FUNC_9(VAR_26), "read/write fail three times in succession\n");
  if (VAR_25->sc_data_direction == VAR_0)
   FUNC_15(VAR_26, VAR_27,
           VAR_16);
  else
   FUNC_15(VAR_26, VAR_27, VAR_17);

  return VAR_20;
 }

 if (VAR_25->sc_data_direction == VAR_1) {
  if (FUNC_5(VAR_26, VAR_27)) {
   FUNC_6(FUNC_9(VAR_26), "Write protected card!\n");
   FUNC_15(VAR_26, VAR_27,
           VAR_18);
   return VAR_20;
  }
 }

 VAR_28 = FUNC_3(VAR_25, VAR_26, VAR_29, VAR_30);
 if (VAR_28 != VAR_19) {
  if (VAR_26->need_release & VAR_26->lun2card[VAR_27]) {
   VAR_26->rw_fail_cnt[VAR_27] = 0;
   FUNC_15(VAR_26, VAR_27, VAR_14);
  } else {
   VAR_26->rw_fail_cnt[VAR_27]++;
   if (VAR_25->sc_data_direction == VAR_0)
    FUNC_15
     (VAR_26, VAR_27,
      VAR_16);
   else
    FUNC_15(VAR_26, VAR_27,
            VAR_17);
  }
  VAR_28 = VAR_20;
  goto exit;
 } else {
  VAR_26->rw_fail_cnt[VAR_27] = 0;
  VAR_28 = VAR_21;
 }

 FUNC_14(VAR_25, 0);

exit:
 return VAR_28;
}
