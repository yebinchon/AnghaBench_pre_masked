
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmdev {int mutex; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fmdev*) ;
 int FUNC_1 (struct fmdev*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_1 ;
 struct fmdev* FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_2)
{
 int VAR_3;
 struct fmdev *VAR_4;

 VAR_4 = FUNC_6(VAR_2);
 if (!VAR_1) {
  FUNC_2("FM device is already closed\n");
  return 0;
 }

 FUNC_4(&VAR_4->mutex);
 VAR_3 = FUNC_1(VAR_4, VAR_0);
 if (VAR_3 < 0) {
  FUNC_3("Unable to turn off the chip\n");
  goto release_unlock;
 }

 VAR_3 = FUNC_0(VAR_4);
 if (VAR_3 < 0) {
  FUNC_3("FM CORE release failed\n");
  goto release_unlock;
 }
 VAR_1 = 0;

release_unlock:
 FUNC_5(&VAR_4->mutex);
 return VAR_3;
}
