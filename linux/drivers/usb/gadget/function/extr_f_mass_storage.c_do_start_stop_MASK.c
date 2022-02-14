
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_lun {int sense_data; scalar_t__ prevent_medium_removal; int removable; } ;
struct fsg_common {int* cmnd; int filesem; struct fsg_lun* curlun; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsg_lun*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fsg_lun*) ;
 int FUNC_4 (struct fsg_lun*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct fsg_common *VAR_5)
{
 struct fsg_lun *VAR_6 = VAR_5->curlun;
 int VAR_7, VAR_8;

 if (!VAR_6) {
  return -VAR_0;
 } else if (!VAR_6->removable) {
  VAR_6->sense_data = VAR_1;
  return -VAR_0;
 } else if ((VAR_5->cmnd[1] & ~0x01) != 0 ||
     (VAR_5->cmnd[4] & ~0x03) != 0) {
  VAR_6->sense_data = VAR_2;
  return -VAR_0;
 }

 VAR_7 = VAR_5->cmnd[4] & 0x02;
 VAR_8 = VAR_5->cmnd[4] & 0x01;





 if (VAR_8) {
  if (!FUNC_4(VAR_6)) {
   VAR_6->sense_data = VAR_3;
   return -VAR_0;
  }
  return 0;
 }


 if (VAR_6->prevent_medium_removal) {
  FUNC_0(VAR_6, "unload attempt prevented\n");
  VAR_6->sense_data = VAR_4;
  return -VAR_0;
 }

 if (!VAR_7)
  return 0;

 FUNC_5(&VAR_5->filesem);
 FUNC_2(&VAR_5->filesem);
 FUNC_3(VAR_6);
 FUNC_6(&VAR_5->filesem);
 FUNC_1(&VAR_5->filesem);

 return 0;
}
