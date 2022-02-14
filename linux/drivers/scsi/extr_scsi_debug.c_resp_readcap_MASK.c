
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdebug_dev_info {int dummy; } ;
struct scsi_cmnd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_cmnd*,unsigned char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (int ,unsigned char*) ;
 int FUNC_4 (int,unsigned char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct scsi_cmnd *VAR_3,
   struct sdebug_dev_info *VAR_4)
{
 unsigned char VAR_5[VAR_0];
 unsigned int VAR_6;


 VAR_1 = FUNC_1();
 FUNC_2(VAR_5, 0, VAR_0);
 if (VAR_1 < 0xffffffff) {
  VAR_6 = (unsigned int)VAR_1 - 1;
  FUNC_4(VAR_6, VAR_5 + 0);
 } else
  FUNC_4(0xffffffff, VAR_5 + 0);
 FUNC_3(VAR_2, VAR_5 + 6);
 return FUNC_0(VAR_3, VAR_5, VAR_0);
}
