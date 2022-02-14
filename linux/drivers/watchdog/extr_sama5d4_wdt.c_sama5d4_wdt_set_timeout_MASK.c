
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {unsigned int timeout; } ;
struct sama5d4_wdt {int mr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int) ;
 struct sama5d4_wdt* FUNC_2 (struct watchdog_device*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct sama5d4_wdt*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_4,
     unsigned int VAR_5)
{
 struct sama5d4_wdt *VAR_6 = FUNC_2(VAR_4);
 u32 VAR_7 = FUNC_1(VAR_5);

 VAR_6->mr &= ~VAR_2;
 VAR_6->mr |= FUNC_0(VAR_7);
 if (VAR_3)
  FUNC_3(VAR_6, VAR_0, VAR_6->mr & ~VAR_1);

 VAR_4->timeout = VAR_5;

 return 0;
}
