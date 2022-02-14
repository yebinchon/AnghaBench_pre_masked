
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdebug_dev_info {int stopped; } ;
struct scsi_cmnd {unsigned char* cmnd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_2 ;
 int FUNC_2 (struct scsi_cmnd*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct scsi_cmnd *VAR_3,
      struct sdebug_dev_info *VAR_4)
{
 unsigned char *VAR_5 = VAR_3->cmnd;
 int VAR_6, VAR_7;
 bool VAR_8;

 VAR_6 = (VAR_5[4] & 0xf0) >> 4;
 if (VAR_6) {
  FUNC_2(VAR_3, VAR_0, 4, 7);
  return VAR_2;
 }
 VAR_7 = !(VAR_5[4] & 1);
 VAR_8 = FUNC_0(&VAR_4->stopped) == !VAR_7;
 FUNC_1(&VAR_4->stopped, VAR_7);
 if (!VAR_8 || VAR_5[1] & 0x1)
  return VAR_1;
 else
  return 0;
}
