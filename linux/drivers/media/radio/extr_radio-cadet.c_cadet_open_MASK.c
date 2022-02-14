
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct cadet {int lock; int read_queue; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*) ;
 struct cadet* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_0)
{
 struct cadet *VAR_1 = FUNC_5(VAR_0);
 int VAR_2;

 FUNC_1(&VAR_1->lock);
 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2)
  goto fail;
 if (FUNC_3(VAR_0))
  FUNC_0(&VAR_1->read_queue);
fail:
 FUNC_2(&VAR_1->lock);
 return VAR_2;
}
