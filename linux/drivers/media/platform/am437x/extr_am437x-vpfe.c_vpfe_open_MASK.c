
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_device {int lock; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*) ;
 struct vpfe_device* FUNC_5 (struct file*) ;
 int FUNC_6 (struct vpfe_device*,char*) ;
 scalar_t__ FUNC_7 (struct vpfe_device*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_1)
{
 struct vpfe_device *VAR_2 = FUNC_5(VAR_1);
 int VAR_3;

 FUNC_0(&VAR_2->lock);

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3) {
  FUNC_6(VAR_2, "v4l2_fh_open failed\n");
  goto unlock;
 }

 if (!FUNC_2(VAR_1))
  goto unlock;

 if (FUNC_7(VAR_2)) {
  FUNC_4(VAR_1);
  VAR_3 = -VAR_0;
 }

unlock:
 FUNC_1(&VAR_2->lock);
 return VAR_3;
}
