
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_camera_dev {int mlock; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pxa_camera_dev*,int ) ;
 int FUNC_4 (struct file*) ;
 struct pxa_camera_dev* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_0)
{
 struct pxa_camera_dev *VAR_1 = FUNC_5(VAR_0);
 int VAR_2;
 bool VAR_3;

 FUNC_1(&VAR_1->mlock);

 VAR_3 = FUNC_4(VAR_0);

 VAR_2 = FUNC_0(VAR_0, ((void*)0));

 if (VAR_3)
  VAR_2 = FUNC_3(VAR_1, 0);

 FUNC_2(&VAR_1->mlock);

 return VAR_2;
}
