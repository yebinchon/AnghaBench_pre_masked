
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct sdebug_dev_info {int dummy; } ;
struct scsi_cmnd {int* cmnd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int*) ;
 int FUNC_3 (struct scsi_cmnd*,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd *VAR_7,
      struct sdebug_dev_info *VAR_8)
{
 int VAR_9 = 0;
 u64 VAR_10;
 u32 VAR_11;
 u8 *VAR_12 = VAR_7->cmnd;

 if (VAR_12[0] == VAR_3) {
  VAR_10 = FUNC_1(VAR_12 + 2);
  VAR_11 = FUNC_0(VAR_12 + 7);
 } else {
  VAR_10 = FUNC_2(VAR_12 + 2);
  VAR_11 = FUNC_1(VAR_12 + 10);
 }
 if (VAR_10 + VAR_11 > VAR_5) {
  FUNC_3(VAR_7, VAR_0, VAR_1, 0);
  return VAR_4;
 }
 if (!VAR_6 || VAR_12[1] & 0x2)
  VAR_9 = VAR_2;
 else
  VAR_6 = 0;
 return VAR_9;
}
