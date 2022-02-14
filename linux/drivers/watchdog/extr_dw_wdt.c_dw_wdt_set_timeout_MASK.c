
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;
struct dw_wdt {scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct dw_wdt*,int) ;
 struct dw_wdt* FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_3, unsigned int VAR_4)
{
 struct dw_wdt *VAR_5 = FUNC_1(VAR_3);
 int VAR_6, VAR_7 = VAR_0;





 for (VAR_6 = 0; VAR_6 <= VAR_0; ++VAR_6)
  if (FUNC_0(VAR_5, VAR_6) >= VAR_4) {
   VAR_7 = VAR_6;
   break;
  }







 FUNC_2(VAR_7 | VAR_7 << VAR_2,
        VAR_5->regs + VAR_1);

 VAR_3->timeout = FUNC_0(VAR_5, VAR_7);

 return 0;
}
