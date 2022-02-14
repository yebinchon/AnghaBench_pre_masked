
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {int lock; int (* close ) (struct rc_dev*) ;scalar_t__ registered; int users; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rc_dev*) ;

void FUNC_3(struct rc_dev *VAR_0)
{
 if (VAR_0) {
  FUNC_0(&VAR_0->lock);

  if (!--VAR_0->users && VAR_0->close && VAR_0->registered)
   VAR_0->close(VAR_0);

  FUNC_1(&VAR_0->lock);
 }
}
