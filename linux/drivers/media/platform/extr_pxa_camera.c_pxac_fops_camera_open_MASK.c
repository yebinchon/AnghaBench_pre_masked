
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_camera_dev {int mlock; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pxa_camera_dev*,int) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*) ;
 struct pxa_camera_dev* FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_0)
{
 struct pxa_camera_dev *VAR_1 = FUNC_6(VAR_0);
 int VAR_2;

 FUNC_0(&VAR_1->mlock);
 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2 < 0)
  goto out;

 if (!FUNC_3(VAR_0))
  goto out;

 VAR_2 = FUNC_2(VAR_1, 1);
 if (VAR_2)
  FUNC_5(VAR_0);
out:
 FUNC_1(&VAR_1->mlock);
 return VAR_2;
}
