
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 () ;
 TYPE_1__ VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int,int ) ;

int FUNC_8(u8 VAR_12, bool VAR_13, bool VAR_14)
{
 unsigned long VAR_15;

 FUNC_0((VAR_12 < VAR_2) || (VAR_1 < VAR_12));

 FUNC_4(&VAR_10.lock, VAR_15);

 while (FUNC_3(VAR_4) & FUNC_1(0))
  FUNC_2();

 FUNC_6(VAR_0, (VAR_11 + VAR_5));
 FUNC_6(VAR_12, (VAR_11 + VAR_7));
 FUNC_6((VAR_14 ? 1 : 0), (VAR_11 + VAR_6));
 FUNC_6((VAR_13 ? 1 : 0),
  (VAR_11 + VAR_9));
 FUNC_6(0, (VAR_11 + VAR_8));
 FUNC_7(FUNC_1(0), VAR_3);

 FUNC_5(&VAR_10.lock, VAR_15);

 return 0;
}
