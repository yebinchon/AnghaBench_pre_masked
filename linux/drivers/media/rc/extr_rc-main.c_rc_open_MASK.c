
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {int (* open ) (struct rc_dev*) ;int lock; int users; int registered; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rc_dev*) ;

int FUNC_3(struct rc_dev *VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_2)
  return -VAR_0;

 FUNC_0(&VAR_2->lock);

 if (!VAR_2->registered) {
  VAR_3 = -VAR_1;
 } else {
  if (!VAR_2->users++ && VAR_2->open)
   VAR_3 = VAR_2->open(VAR_2);

  if (VAR_3)
   VAR_2->users--;
 }

 FUNC_1(&VAR_2->lock);

 return VAR_3;
}
