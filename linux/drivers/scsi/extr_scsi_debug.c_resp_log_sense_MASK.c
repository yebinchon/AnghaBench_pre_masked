
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdebug_dev_info {int dummy; } ;
struct scsi_cmnd {unsigned char* cmnd; } ;
typedef int arr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct scsi_cmnd*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct scsi_cmnd*,int ,int,int) ;
 unsigned char FUNC_5 (unsigned char*) ;
 unsigned char FUNC_6 (unsigned char*) ;

__attribute__((used)) static int FUNC_7(struct scsi_cmnd *VAR_4,
     struct sdebug_dev_info *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 unsigned char VAR_13[VAR_1];
 unsigned char *VAR_14 = VAR_4->cmnd;

 FUNC_2(VAR_13, 0, sizeof(VAR_13));
 VAR_6 = VAR_14[1] & 0x2;
 VAR_7 = VAR_14[1] & 0x1;
 if (VAR_6 || VAR_7) {
  FUNC_4(VAR_4, VAR_2, 1, VAR_6 ? 1 : 0);
  return VAR_3;
 }
 VAR_8 = VAR_14[2] & 0x3f;
 VAR_9 = VAR_14[3] & 0xff;
 VAR_10 = FUNC_1(VAR_14 + 7);
 VAR_13[0] = VAR_8;
 if (0 == VAR_9) {
  switch (VAR_8) {
  case 0x0:
   VAR_12 = 4;
   VAR_13[VAR_12++] = 0x0;
   VAR_13[VAR_12++] = 0xd;
   VAR_13[VAR_12++] = 0x2f;
   VAR_13[3] = VAR_12 - 4;
   break;
  case 0xd:
   VAR_13[3] = FUNC_6(VAR_13 + 4);
   break;
  case 0x2f:
   VAR_13[3] = FUNC_5(VAR_13 + 4);
   break;
  default:
   FUNC_4(VAR_4, VAR_2, 2, 5);
   return VAR_3;
  }
 } else if (0xff == VAR_9) {
  VAR_13[0] |= 0x40;
  VAR_13[1] = VAR_9;
  switch (VAR_8) {
  case 0x0:
   VAR_12 = 4;
   VAR_13[VAR_12++] = 0x0;
   VAR_13[VAR_12++] = 0x0;
   VAR_13[VAR_12++] = 0x0;
   VAR_13[VAR_12++] = 0xff;
   VAR_13[VAR_12++] = 0xd;
   VAR_13[VAR_12++] = 0x0;
   VAR_13[VAR_12++] = 0x2f;
   VAR_13[VAR_12++] = 0x0;
   VAR_13[3] = VAR_12 - 4;
   break;
  case 0xd:
   VAR_12 = 4;
   VAR_13[VAR_12++] = 0xd;
   VAR_13[VAR_12++] = 0x0;
   VAR_13[3] = VAR_12 - 4;
   break;
  case 0x2f:
   VAR_12 = 4;
   VAR_13[VAR_12++] = 0x2f;
   VAR_13[VAR_12++] = 0x0;
   VAR_13[3] = VAR_12 - 4;
   break;
  default:
   FUNC_4(VAR_4, VAR_2, 2, 5);
   return VAR_3;
  }
 } else {
  FUNC_4(VAR_4, VAR_2, 3, -1);
  return VAR_3;
 }
 VAR_11 = FUNC_3(FUNC_1(VAR_13 + 2) + 4, VAR_10);
 return FUNC_0(VAR_4, VAR_13,
      FUNC_3(VAR_11, VAR_0));
}
