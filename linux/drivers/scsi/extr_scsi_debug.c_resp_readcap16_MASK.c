
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sdebug_dev_info {int dummy; } ;
struct scsi_cmnd {unsigned char* cmnd; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_cmnd*,unsigned char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,unsigned char*) ;
 int FUNC_6 (int ,unsigned char*) ;
 scalar_t__ FUNC_7 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8(struct scsi_cmnd *VAR_8,
     struct sdebug_dev_info *VAR_9)
{
 unsigned char *VAR_10 = VAR_8->cmnd;
 unsigned char VAR_11[VAR_0];
 int VAR_12;

 VAR_12 = FUNC_2(VAR_10 + 10);

 VAR_2 = FUNC_1();
 FUNC_3(VAR_11, 0, VAR_0);
 FUNC_6((u64)(VAR_2 - 1), VAR_11 + 0);
 FUNC_5(VAR_7, VAR_11 + 8);
 VAR_11[13] = VAR_6 & 0xf;
 VAR_11[14] = (VAR_5 >> 8) & 0x3f;

 if (FUNC_7()) {
  VAR_11[14] |= 0x80;




  if (VAR_4 & 1)
   VAR_11[14] |= 0x40;
 }

 VAR_11[15] = VAR_5 & 0xff;

 if (VAR_1) {
  VAR_11[12] = (VAR_3 - 1) << 1;
  VAR_11[12] |= 1;
 }

 return FUNC_0(VAR_8, VAR_11,
        FUNC_4(VAR_12, VAR_0));
}
