
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ open_cnt; int detaching; int open_rel_lock; scalar_t__ exclude; int open_wait; } ;
typedef TYPE_1__ Sg_device ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(Sg_device *VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3 & VAR_1) {
  while (VAR_2->open_cnt > 0) {
   FUNC_2(&VAR_2->open_rel_lock);
   VAR_4 = FUNC_3(VAR_2->open_wait,
     (FUNC_0(&VAR_2->detaching) ||
      !VAR_2->open_cnt));
   FUNC_1(&VAR_2->open_rel_lock);

   if (VAR_4)
    return VAR_4;
   if (FUNC_0(&VAR_2->detaching))
    return -VAR_0;
  }
 } else {
  while (VAR_2->exclude) {
   FUNC_2(&VAR_2->open_rel_lock);
   VAR_4 = FUNC_3(VAR_2->open_wait,
     (FUNC_0(&VAR_2->detaching) ||
      !VAR_2->exclude));
   FUNC_1(&VAR_2->open_rel_lock);

   if (VAR_4)
    return VAR_4;
   if (FUNC_0(&VAR_2->detaching))
    return -VAR_0;
  }
 }

 return VAR_4;
}
