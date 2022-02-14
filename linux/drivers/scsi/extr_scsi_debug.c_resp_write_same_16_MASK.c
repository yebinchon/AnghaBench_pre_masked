
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct sdebug_dev_info {int dummy; } ;
struct scsi_cmnd {int* cmnd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct scsi_cmnd*,int ,int,int) ;
 int FUNC_3 (struct scsi_cmnd*,int ,scalar_t__,scalar_t__,int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd *VAR_4,
         struct sdebug_dev_info *VAR_5)
{
 u8 *VAR_6 = VAR_4->cmnd;
 u64 VAR_7;
 u32 VAR_8;
 u32 VAR_9 = 0;
 bool VAR_10 = 0;
 bool VAR_11 = 0;

 if (VAR_6[1] & 0x8) {
  if (VAR_2 == 0) {
   FUNC_2(VAR_4, VAR_0, 1, 3);
   return VAR_1;
  } else
   VAR_10 = 1;
 }
 if (VAR_6[1] & 0x1)
  VAR_11 = 1;
 VAR_7 = FUNC_1(VAR_6 + 2);
 VAR_8 = FUNC_0(VAR_6 + 10);
 if (VAR_8 > VAR_3) {
  FUNC_2(VAR_4, VAR_0, 10, -1);
  return VAR_1;
 }
 return FUNC_3(VAR_4, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
}
