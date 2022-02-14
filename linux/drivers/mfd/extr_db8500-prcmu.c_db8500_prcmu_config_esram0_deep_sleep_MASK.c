
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int lock; int work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 () ;
 TYPE_1__ VAR_12 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int,int ) ;

int FUNC_8(u8 VAR_14)
{
 if ((VAR_14 > VAR_4) ||
     (VAR_14 < VAR_3))
  return -VAR_2;

 FUNC_2(&VAR_12.lock);

 while (FUNC_4(VAR_7) & FUNC_0(4))
  FUNC_1();

 FUNC_6(VAR_5, (VAR_13 + VAR_8));
 FUNC_6(((VAR_0 << 4) | VAR_1),
        (VAR_13 + VAR_10));
 FUNC_6(VAR_1,
        (VAR_13 + VAR_9));
 FUNC_6(VAR_14, (VAR_13 + VAR_11));

 FUNC_7(FUNC_0(4), VAR_6);
 FUNC_5(&VAR_12.work);

 FUNC_3(&VAR_12.lock);

 return 0;
}
