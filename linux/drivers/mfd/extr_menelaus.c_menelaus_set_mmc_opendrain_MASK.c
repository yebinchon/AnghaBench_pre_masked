
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_4 ;

int FUNC_4(int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;

 if (VAR_5 != 1 && VAR_5 != 2)
  return -VAR_0;
 FUNC_2(&VAR_4->lock);
 VAR_7 = FUNC_0(VAR_3);
 if (VAR_7 < 0) {
  FUNC_3(&VAR_4->lock);
  return VAR_7;
 }
 VAR_8 = VAR_7;
 if (VAR_5 == 1) {
  if (VAR_6)
   VAR_8 |= VAR_1;
  else
   VAR_8 &= ~VAR_1;
 } else {
  if (VAR_6)
   VAR_8 |= VAR_2;
  else
   VAR_8 &= ~VAR_2;
 }
 VAR_7 = FUNC_1(VAR_3, VAR_8);
 FUNC_3(&VAR_4->lock);

 return VAR_7;
}
