
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct zx2967_wdt {int dummy; } ;
struct watchdog_device {unsigned int timeout; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 struct zx2967_wdt* FUNC_2 (struct watchdog_device*) ;
 int FUNC_3 (struct zx2967_wdt*) ;
 int FUNC_4 (struct zx2967_wdt*,int ,unsigned int) ;

__attribute__((used)) static int
FUNC_5(struct watchdog_device *VAR_6, unsigned int VAR_7)
{
 struct zx2967_wdt *VAR_8 = FUNC_2(VAR_6);
 unsigned int VAR_9 = VAR_2;
 u32 VAR_10;

 VAR_10 = VAR_7 * VAR_1;
 if (VAR_10 > VAR_9 * VAR_4)
  VAR_9 = FUNC_0(VAR_10, VAR_4);
 VAR_10 = FUNC_0(VAR_10, VAR_9);
 FUNC_4(VAR_8, VAR_0,
   FUNC_1(VAR_9) & VAR_5);
 FUNC_4(VAR_8, VAR_3,
   VAR_10 & VAR_5);
 FUNC_3(VAR_8);
 VAR_6->timeout = (VAR_10 * VAR_9) / VAR_1;

 return 0;
}
