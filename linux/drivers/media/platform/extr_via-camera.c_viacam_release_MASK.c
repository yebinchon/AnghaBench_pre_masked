
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_camera {int lock; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct via_camera*) ;
 int FUNC_5 () ;
 struct via_camera* FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_0)
{
 struct via_camera *VAR_1 = FUNC_6(VAR_0);
 bool VAR_2;

 FUNC_1(&VAR_1->lock);
 VAR_2 = FUNC_3(VAR_0);
 FUNC_0(VAR_0, ((void*)0));



 if (VAR_2) {
  FUNC_4(VAR_1);
  FUNC_5();
 }
 FUNC_2(&VAR_1->lock);
 return 0;
}
