
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timer_page ;
struct us_data {unsigned char* iobuf; scalar_t__ extra; } ;
struct scsi_cmnd {int* cmnd; } ;
struct jumpshot_info {int sense_key; int sense_asc; int sense_ascq; } ;
typedef int rw_err_page ;
typedef int rbac_page ;
typedef int cache_page ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (struct us_data*,char*) ;
 int FUNC_4 (unsigned char*,unsigned int,struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_5(struct us_data *VAR_2,
          struct scsi_cmnd * VAR_3,
          int VAR_4)
{
 static unsigned char VAR_5[12] = {
  0x1, 0xA, 0x21, 1, 0, 0, 0, 0, 1, 0, 0, 0
 };
 static unsigned char VAR_6[12] = {
  0x8, 0xA, 0x1, 0, 0, 0, 0, 0, 0, 0, 0, 0
 };
 static unsigned char VAR_7[12] = {
  0x1B, 0xA, 0, 0x81, 0, 0, 0, 0, 0, 0, 0, 0
 };
 static unsigned char VAR_8[8] = {
  0x1C, 0x6, 0, 0, 0, 0
 };
 unsigned char VAR_9, VAR_10;
 unsigned int VAR_11 = 0;
 struct jumpshot_info *VAR_12 = (struct jumpshot_info *) (VAR_2->extra);
 unsigned char *VAR_13 = VAR_2->iobuf;

 VAR_9 = VAR_3->cmnd[2] >> 6;
 VAR_10 = VAR_3->cmnd[2] & 0x3F;

 switch (VAR_9) {
    case 0x0:
     FUNC_3(VAR_2, "Current values\n");
     break;
    case 0x1:
     FUNC_3(VAR_2, "Changeable values\n");
     break;
    case 0x2:
     FUNC_3(VAR_2, "Default values\n");
     break;
    case 0x3:
     FUNC_3(VAR_2, "Saves values\n");
     break;
 }

 FUNC_2(VAR_13, 0, 8);
 if (VAR_4) {
  VAR_13[2] = 0x00;
  VAR_11 = 4;
 } else {
  VAR_13[3] = 0x00;
  VAR_11 = 8;
 }

 switch (VAR_10) {
    case 0x0:

  VAR_12->sense_key = 0x05;
  VAR_12->sense_asc = 0x24;
  VAR_12->sense_ascq = 0x00;
  return VAR_0;

    case 0x1:
  FUNC_1(VAR_13 + VAR_11, VAR_5, sizeof(VAR_5));
  VAR_11 += sizeof(VAR_5);
  break;

    case 0x8:
  FUNC_1(VAR_13 + VAR_11, VAR_6, sizeof(VAR_6));
  VAR_11 += sizeof(VAR_6);
  break;

    case 0x1B:
  FUNC_1(VAR_13 + VAR_11, VAR_7, sizeof(VAR_7));
  VAR_11 += sizeof(VAR_7);
  break;

    case 0x1C:
  FUNC_1(VAR_13 + VAR_11, VAR_8, sizeof(VAR_8));
  VAR_11 += sizeof(VAR_8);
  break;

    case 0x3F:
  FUNC_1(VAR_13 + VAR_11, VAR_8, sizeof(VAR_8));
  VAR_11 += sizeof(VAR_8);
  FUNC_1(VAR_13 + VAR_11, VAR_7, sizeof(VAR_7));
  VAR_11 += sizeof(VAR_7);
  FUNC_1(VAR_13 + VAR_11, VAR_6, sizeof(VAR_6));
  VAR_11 += sizeof(VAR_6);
  FUNC_1(VAR_13 + VAR_11, VAR_5, sizeof(VAR_5));
  VAR_11 += sizeof(VAR_5);
  break;
 }

 if (VAR_4)
  VAR_13[0] = VAR_11 - 1;
 else
  ((__be16 *) VAR_13)[0] = FUNC_0(VAR_11 - 2);
 FUNC_4(VAR_13, VAR_11, VAR_3);

 return VAR_1;
}
