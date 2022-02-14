
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdebug_dev_info {int dummy; } ;
struct scsi_cmnd {int* cmnd; } ;
typedef int arr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_cmnd*,int*,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (struct scsi_cmnd*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd *VAR_2,
     struct sdebug_dev_info *VAR_3)
{
 bool VAR_4;
 u32 VAR_5, VAR_6;
 u8 VAR_7[16];
 u8 *VAR_8 = VAR_2->cmnd;

 FUNC_2(VAR_7, 0, sizeof(VAR_7));
 VAR_4 = !!(VAR_8[2] & 0x80);
 VAR_5 = FUNC_1(VAR_8 + 6);
 if (VAR_5 < 4) {
  FUNC_3(VAR_2, VAR_0, 6, -1);
  return VAR_1;
 }
 VAR_7[0] = 0xc8;
 VAR_7[1] = 0x1;
 if (VAR_4) {
  VAR_7[3] = 0xc;
  VAR_6 = 16;
 } else
  VAR_6 = 4;

 VAR_6 = (VAR_6 < VAR_5) ? VAR_6 : VAR_5;
 return FUNC_0(VAR_2, VAR_7, VAR_6);
}
