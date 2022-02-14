
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdebug_dev_info {int dummy; } ;
struct scsi_cmnd {unsigned char* cmnd; unsigned char* sense_buffer; } ;
typedef int arr ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (struct scsi_cmnd*,unsigned char*,int) ;
 int* VAR_3 ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (struct scsi_cmnd*,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd *VAR_5,
    struct sdebug_dev_info *VAR_6)
{
 unsigned char *VAR_7;
 unsigned char *VAR_8 = VAR_5->cmnd;
 unsigned char VAR_9[VAR_1];
 bool VAR_10;
 int VAR_11 = 18;

 FUNC_2(VAR_9, 0, sizeof(VAR_9));
 VAR_10 = !!(VAR_8[1] & 1);
 VAR_7 = VAR_5->sense_buffer;
 if ((VAR_3[2] & 0x4) && (6 == (VAR_3[3] & 0xf))) {
  if (VAR_10) {
   VAR_9[0] = 0x72;
   VAR_9[1] = 0x0;
   VAR_9[2] = VAR_2;
   VAR_9[3] = 0xff;
   VAR_11 = 8;
  } else {
   VAR_9[0] = 0x70;
   VAR_9[2] = 0x0;
   VAR_9[7] = 0xa;
   VAR_9[12] = VAR_2;
   VAR_9[13] = 0xff;
  }
 } else {
  FUNC_1(VAR_9, VAR_7, VAR_1);
  if (VAR_9[0] >= 0x70 && VAR_10 == VAR_4)
   ;
  else if (VAR_9[0] <= 0x70) {
   if (VAR_10) {
    FUNC_2(VAR_9, 0, 8);
    VAR_9[0] = 0x72;
    VAR_11 = 8;
   } else {
    FUNC_2(VAR_9, 0, 18);
    VAR_9[0] = 0x70;
    VAR_9[7] = 0xa;
   }
  } else if (VAR_10) {
   FUNC_2(VAR_9, 0, 8);
   VAR_9[0] = 0x72;
   VAR_9[1] = VAR_7[2];
   VAR_9[2] = VAR_7[12];
   VAR_9[3] = VAR_7[13];
   VAR_11 = 8;
  } else {
   FUNC_2(VAR_9, 0, 18);
   VAR_9[0] = 0x70;
   VAR_9[2] = VAR_7[1];
   VAR_9[7] = 0xa;
   VAR_9[12] = VAR_7[1];
   VAR_9[13] = VAR_7[3];
  }

 }
 FUNC_3(VAR_5, 0, VAR_0, 0);
 return FUNC_0(VAR_5, VAR_9, VAR_11);
}
