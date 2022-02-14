
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_cmnd {int dummy; } ;
struct rtsx_chip {int* lun2card; scalar_t__ mspro_formatter_enable; } ;


 scalar_t__ FUNC_0 (struct rtsx_chip*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_1 (struct scsi_cmnd*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned char* VAR_16 ;
 int FUNC_2 (struct rtsx_chip*,unsigned int) ;
 int FUNC_3 (unsigned char*,unsigned char*,unsigned char) ;
 int FUNC_4 (unsigned char*,int,struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*,int ) ;
 int FUNC_7 (unsigned char*,char*,unsigned char) ;
 int FUNC_8 (unsigned char*) ;
 unsigned char* FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct scsi_cmnd *VAR_17, struct rtsx_chip *VAR_18)
{
 unsigned int VAR_19 = FUNC_1(VAR_17);
 char *VAR_20 = (char *)"Generic-xD/SD/M.S.      1.00 ";
 char *VAR_21 = (char *)"Generic-SD/MemoryStick  1.00 ";
 char *VAR_22 = (char *)"Generic-SD/MMC          1.00 ";
 char *VAR_23 = (char *)"Generic-MemoryStick     1.00 ";
 char *VAR_24;
 unsigned char VAR_25;
 unsigned char *VAR_26;
 u8 VAR_27 = FUNC_2(VAR_18, VAR_19);
 bool VAR_28 = 0;
 unsigned char VAR_29[] = {
  VAR_4 | VAR_1,
  VAR_6 | 0x0D,
  0x00,
  0x01,
  0x1f,
  0x02,
  0,
  VAR_5 | VAR_15 | VAR_14 | VAR_11 | VAR_2 | VAR_0 | VAR_10,
 };

 if (FUNC_0(VAR_18, VAR_9)) {
  if (VAR_18->lun2card[VAR_19] == VAR_7)
   VAR_24 = VAR_22;
  else
   VAR_24 = VAR_23;

 } else if (FUNC_0(VAR_18, VAR_8)) {
  VAR_24 = VAR_21;
 } else {
  VAR_24 = VAR_20;
 }

 VAR_26 = FUNC_9(FUNC_5(VAR_17));
 if (!VAR_26)
  return VAR_12;





 if (VAR_18->mspro_formatter_enable)

  if (!VAR_27 || (VAR_27 == VAR_3))
   VAR_28 = 1;

 if (VAR_28) {
  if (FUNC_5(VAR_17) < 56)
   VAR_25 = (unsigned char)(FUNC_5(VAR_17));
  else
   VAR_25 = 56;

 } else {
  if (FUNC_5(VAR_17) < 36)
   VAR_25 = (unsigned char)(FUNC_5(VAR_17));
  else
   VAR_25 = 36;
 }

 if (VAR_25 > 8) {
  FUNC_3(VAR_26, VAR_29, 8);
  FUNC_7(VAR_26 + 8, VAR_24, VAR_25 - 8);
  if (VAR_28) {

   VAR_26[4] = 0x33;
  }
 } else {
  FUNC_3(VAR_26, VAR_29, VAR_25);
 }

 if (VAR_28) {
  if (VAR_25 > 36)
   FUNC_3(VAR_26 + 36, VAR_16, VAR_25 - 36);
 }

 FUNC_6(VAR_17, 0);

 FUNC_4(VAR_26, FUNC_5(VAR_17), VAR_17);
 FUNC_8(VAR_26);

 return VAR_13;
}
