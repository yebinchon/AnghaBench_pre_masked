
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd_info {int sd_lock_status; scalar_t__ sd_lock_notify; } ;
struct scsi_cmnd {int dummy; } ;
struct rtsx_chip {struct sd_info sd_card; int lun_mc; } ;


 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (struct scsi_cmnd*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct rtsx_chip*,unsigned int) ;
 scalar_t__ FUNC_4 (struct rtsx_chip*,unsigned int) ;
 int FUNC_5 (struct rtsx_chip*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_6(struct scsi_cmnd *VAR_7, struct rtsx_chip *VAR_8)
{
 unsigned int VAR_9 = FUNC_1(VAR_7);

 if (!FUNC_3(VAR_8, VAR_9)) {
  FUNC_5(VAR_8, VAR_9, VAR_3);
  return VAR_5;
 }

 if (!(FUNC_0(VAR_8->lun_mc, VAR_9))) {
  FUNC_2(VAR_8->lun_mc, VAR_9);
  FUNC_5(VAR_8, VAR_9, VAR_2);
  return VAR_5;
 }
 return VAR_6;
}
