
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scsi_cmnd {int dummy; } ;
struct rtsx_chip {int lun_mc; } ;


 int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (struct scsi_cmnd*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct rtsx_chip*,unsigned int) ;
 int FUNC_4 (struct rtsx_chip*,unsigned int) ;
 int FUNC_5 (unsigned char*) ;
 unsigned char* FUNC_6 (int,int ) ;
 int FUNC_7 (unsigned char*,int ,struct scsi_cmnd*) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (struct scsi_cmnd*,int ) ;
 int FUNC_10 (struct rtsx_chip*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_11(struct scsi_cmnd *VAR_6, struct rtsx_chip *VAR_7)
{
 unsigned char *VAR_8;
 unsigned int VAR_9 = FUNC_1(VAR_6);
 u32 VAR_10;

 if (!FUNC_3(VAR_7, VAR_9)) {
  FUNC_10(VAR_7, VAR_9, VAR_2);
  return VAR_4;
 }

 if (!(FUNC_0(VAR_7->lun_mc, VAR_9))) {
  FUNC_2(VAR_7->lun_mc, VAR_9);
  FUNC_10(VAR_7, VAR_9, VAR_1);
  return VAR_4;
 }

 VAR_8 = FUNC_6(8, VAR_0);
 if (!VAR_8)
  return VAR_3;

 VAR_10 = FUNC_4(VAR_7, VAR_9);
 VAR_8[0] = (unsigned char)((VAR_10 - 1) >> 24);
 VAR_8[1] = (unsigned char)((VAR_10 - 1) >> 16);
 VAR_8[2] = (unsigned char)((VAR_10 - 1) >> 8);
 VAR_8[3] = (unsigned char)(VAR_10 - 1);

 VAR_8[4] = 0x00;
 VAR_8[5] = 0x00;
 VAR_8[6] = 0x02;
 VAR_8[7] = 0x00;

 FUNC_7(VAR_8, FUNC_8(VAR_6), VAR_6);
 FUNC_5(VAR_8);

 FUNC_9(VAR_6, 0);

 return VAR_5;
}
