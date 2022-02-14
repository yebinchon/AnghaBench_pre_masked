
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct sdebug_dev_info {int dummy; } ;
struct scsi_cmnd {int* cmnd; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_cmnd*,int,int,int) ;
 int FUNC_1 (struct scsi_cmnd*,int*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int,int*) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (int,int*) ;
 int FUNC_8 (int,int*) ;
 scalar_t__ FUNC_9 () ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_10(struct scsi_cmnd *VAR_2,
          struct sdebug_dev_info *VAR_3)
{
 u8 *VAR_4 = VAR_2->cmnd;
 u64 VAR_5;
 u32 VAR_6, VAR_7, VAR_8;
 u8 VAR_9[VAR_0];
 int VAR_10;

 VAR_5 = FUNC_4(VAR_4 + 2);
 VAR_6 = FUNC_3(VAR_4 + 10);

 if (VAR_6 < 24)
  return 0;

 VAR_10 = FUNC_0(VAR_2, VAR_5, 1, 0);
 if (VAR_10)
  return VAR_10;

 if (FUNC_9())
  VAR_7 = FUNC_5(VAR_5, &VAR_8);
 else {
  VAR_7 = 1;

  VAR_1 = FUNC_2();
  if (VAR_1 - VAR_5 <= 0xffffffff)
   VAR_8 = VAR_1 - VAR_5;
  else
   VAR_8 = 0xffffffff;
 }

 FUNC_6(VAR_9, 0, VAR_0);
 FUNC_7(20, VAR_9);
 FUNC_8(VAR_5, VAR_9 + 8);
 FUNC_7(VAR_8, VAR_9 + 16);
 VAR_9[20] = !VAR_7;

 return FUNC_1(VAR_2, VAR_9, VAR_0);
}
