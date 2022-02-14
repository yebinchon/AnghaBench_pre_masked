
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int dbb_irqs; int dbb_wakeups; int abb_events; } ;
struct TYPE_4__ {TYPE_1__ req; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 TYPE_2__ VAR_9 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int const,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void)
{
 const u8 VAR_11[2] = {
  VAR_0,
  VAR_1
 };
 static u32 VAR_12;
 static u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 unsigned int VAR_16;

 VAR_14 = VAR_9.req.dbb_irqs | VAR_9.req.dbb_wakeups;
 VAR_14 |= (VAR_8 | VAR_7);

 VAR_15 = VAR_9.req.abb_events;

 if ((VAR_14 == VAR_12) && (VAR_15 == VAR_13))
  return;

 for (VAR_16 = 0; VAR_16 < 2; VAR_16++) {
  while (FUNC_2(VAR_3) & FUNC_0(0))
   FUNC_1();
  FUNC_4(VAR_14, (VAR_10 + VAR_6));
  FUNC_4(VAR_15, (VAR_10 + VAR_5));
  FUNC_3(VAR_11[VAR_16], (VAR_10 + VAR_4));
  FUNC_4(FUNC_0(0), VAR_2);
 }
 VAR_12 = VAR_14;
 VAR_13 = VAR_15;
}
