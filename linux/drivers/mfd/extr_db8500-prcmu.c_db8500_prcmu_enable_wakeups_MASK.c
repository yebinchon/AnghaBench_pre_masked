
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dbb_wakeups; } ;
struct TYPE_4__ {int lock; TYPE_1__ req; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 TYPE_2__ VAR_2 ;
 int* VAR_3 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(u32 VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6;
 int VAR_7;

 FUNC_1(VAR_4 != (VAR_4 & VAR_1));

 for (VAR_7 = 0, VAR_6 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_4 & FUNC_0(VAR_7))
   VAR_6 |= VAR_3[VAR_7];
 }

 FUNC_3(&VAR_2.lock, VAR_5);

 VAR_2.req.dbb_wakeups = VAR_6;
 FUNC_2();

 FUNC_4(&VAR_2.lock, VAR_5);
}
