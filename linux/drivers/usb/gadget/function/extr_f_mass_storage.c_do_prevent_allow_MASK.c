
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_lun {int prevent_medium_removal; int sense_data; int removable; } ;
struct fsg_common {int* cmnd; struct fsg_lun* curlun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fsg_lun*) ;

__attribute__((used)) static int FUNC_1(struct fsg_common *VAR_3)
{
 struct fsg_lun *VAR_4 = VAR_3->curlun;
 int VAR_5;

 if (!VAR_3->curlun) {
  return -VAR_0;
 } else if (!VAR_3->curlun->removable) {
  VAR_3->curlun->sense_data = VAR_1;
  return -VAR_0;
 }

 VAR_5 = VAR_3->cmnd[4] & 0x01;
 if ((VAR_3->cmnd[4] & ~0x01) != 0) {
  VAR_4->sense_data = VAR_2;
  return -VAR_0;
 }

 if (VAR_4->prevent_medium_removal && !VAR_5)
  FUNC_0(VAR_4);
 VAR_4->prevent_medium_removal = VAR_5;
 return 0;
}
