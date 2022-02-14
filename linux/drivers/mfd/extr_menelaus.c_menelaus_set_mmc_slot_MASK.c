
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_13 ;

int FUNC_4(int VAR_14, int VAR_15, int VAR_16, int VAR_17)
{
 int VAR_18, VAR_19;

 if (VAR_14 != 1 && VAR_14 != 2)
  return -VAR_0;
 if (VAR_16 >= 3)
  return -VAR_0;

 FUNC_2(&VAR_13->lock);

 VAR_18 = FUNC_0(VAR_11);
 if (VAR_18 < 0)
  goto out;
 VAR_19 = VAR_18;
 if (VAR_14 == 1) {
  if (VAR_17)
   VAR_19 |= VAR_1 | VAR_2;
  else
   VAR_19 &= ~(VAR_1 | VAR_2);
 } else {
  if (VAR_17)
   VAR_19 |= VAR_4 | VAR_3;
  else
   VAR_19 &= ~(VAR_4 | VAR_3);
 }
 VAR_18 = FUNC_1(VAR_11, VAR_19);
 if (VAR_18 < 0)
  goto out;

 VAR_18 = FUNC_0(VAR_12);
 if (VAR_18 < 0)
  goto out;
 VAR_19 = VAR_18;
 if (VAR_14 == 1) {
  if (VAR_15)
   VAR_19 |= VAR_9;
  else
   VAR_19 &= ~VAR_9;
 } else {
  int VAR_20;

  if (VAR_15)
   VAR_19 |= VAR_10;
  else
   VAR_19 &= ~VAR_10;
  VAR_20 = FUNC_0(VAR_11);
  VAR_20 &= ~(VAR_5 | VAR_6);
  VAR_20 |= VAR_16;
  VAR_18 = FUNC_1(VAR_11, VAR_20);
  if (VAR_18 < 0)
   goto out;
 }

 VAR_19 &= ~(VAR_7 | VAR_8);
 VAR_18 = FUNC_1(VAR_12, VAR_19);
out:
 FUNC_3(&VAR_13->lock);
 return VAR_18;
}
