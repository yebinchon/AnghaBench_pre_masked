
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int* cmnd; } ;
struct ms_info {int dummy; } ;
struct rtsx_chip {int card_ready; int card_wp; scalar_t__ ss_en; struct ms_info ms_card; } ;


 int FUNC_0 (struct ms_info*) ;
 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_4 (struct rtsx_chip*,unsigned int) ;
 int FUNC_5 (struct scsi_cmnd*,struct rtsx_chip*,int ,int) ;
 int FUNC_6 (struct rtsx_chip*) ;
 int FUNC_7 (struct rtsx_chip*) ;
 scalar_t__ FUNC_8 (struct rtsx_chip*) ;
 int FUNC_9 (struct rtsx_chip*,int ) ;
 int FUNC_10 (struct scsi_cmnd*,int ) ;
 int FUNC_11 (struct rtsx_chip*,unsigned int,int ) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct scsi_cmnd *VAR_12, struct rtsx_chip *VAR_13)
{
 struct ms_info *VAR_14 = &VAR_13->ms_card;
 unsigned int VAR_15 = FUNC_1(VAR_12);
 bool VAR_16;
 int VAR_17;

 if (FUNC_4(VAR_13, VAR_15) != VAR_0) {
  FUNC_11(VAR_13, VAR_15, VAR_6);
  return VAR_10;
 }

 if ((VAR_12->cmnd[3] != 0x4D) || (VAR_12->cmnd[4] != 0x47) ||
     (VAR_12->cmnd[5] != 0x66) || (VAR_12->cmnd[6] != 0x6D) ||
  (VAR_12->cmnd[7] != 0x74)) {
  FUNC_11(VAR_13, VAR_15, VAR_5);
  return VAR_10;
 }

 FUNC_6(VAR_13);

 if (VAR_13->ss_en && (FUNC_8(VAR_13) == VAR_3)) {
  FUNC_7(VAR_13);
  FUNC_12(100);

  if (!FUNC_2(VAR_13, VAR_15) ||
      (FUNC_3(VAR_13, VAR_15) == 0)) {
   FUNC_11(VAR_13, VAR_15, VAR_7);
   return VAR_10;
  }
 }
 FUNC_9(VAR_13, VAR_2);

 if (VAR_12->cmnd[8] & 0x01)
  VAR_16 = 0;
 else
  VAR_16 = 1;

 if (!(VAR_13->card_ready & VAR_0)) {
  FUNC_11(VAR_13, VAR_15, VAR_7);
  return VAR_10;
 }

 if (VAR_13->card_wp & VAR_0) {
  FUNC_11(VAR_13, VAR_15, VAR_8);
  return VAR_10;
 }

 if (!FUNC_0(VAR_14)) {
  FUNC_11(VAR_13, VAR_15, VAR_6);
  return VAR_10;
 }

 VAR_17 = FUNC_5(VAR_12, VAR_13, VAR_1, VAR_16);
 if (VAR_17 != VAR_9) {
  FUNC_11(VAR_13, VAR_15, VAR_4);
  return VAR_10;
 }

 FUNC_10(VAR_12, 0);
 return VAR_11;
}
