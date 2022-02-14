
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct cadet {int lock; scalar_t__ rdsstat; int readtimer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*) ;
 struct cadet* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_0)
{
 struct cadet *VAR_1 = FUNC_5(VAR_0);

 FUNC_1(&VAR_1->lock);
 if (FUNC_3(VAR_0) && VAR_1->rdsstat) {
  FUNC_0(&VAR_1->readtimer);
  VAR_1->rdsstat = 0;
 }
 FUNC_4(VAR_0);
 FUNC_2(&VAR_1->lock);
 return 0;
}
