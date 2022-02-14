
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct csio_hw {int flags; int lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct csio_hw *VAR_1)
{
 uint32_t VAR_2;
 VAR_2 = 30;
 while (VAR_1->flags & VAR_0 && VAR_2--) {
  FUNC_3(&VAR_1->lock);
  FUNC_1(2000);
  FUNC_2(&VAR_1->lock);
 }

 FUNC_0(!(VAR_1->flags & VAR_0));
}
