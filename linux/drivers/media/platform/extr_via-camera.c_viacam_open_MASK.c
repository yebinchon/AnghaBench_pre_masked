
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_camera {int lock; int flags; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (struct via_camera*) ;
 int FUNC_7 () ;
 struct via_camera* FUNC_8 (struct file*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_1)
{
 struct via_camera *VAR_2 = FUNC_8(VAR_1);
 int VAR_3;





 FUNC_0(&VAR_2->lock);
 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3)
  goto out;
 if (FUNC_3(VAR_1)) {
  VAR_3 = FUNC_7();

  if (VAR_3) {
   FUNC_5(VAR_1);
   goto out;
  }
  FUNC_6(VAR_2);
  FUNC_2(VAR_0, &VAR_2->flags);
 }
out:
 FUNC_1(&VAR_2->lock);
 return VAR_3;
}
