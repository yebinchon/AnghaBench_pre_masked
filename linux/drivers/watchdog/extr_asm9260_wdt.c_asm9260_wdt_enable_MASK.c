
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int dummy; } ;
struct asm9260_wdt_priv {scalar_t__ mode; scalar_t__ iobase; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (int,scalar_t__) ;
 struct asm9260_wdt_priv* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_4)
{
 struct asm9260_wdt_priv *VAR_5 = FUNC_3(VAR_4);
 u32 VAR_6 = 0;

 if (VAR_5->mode == VAR_2)
  VAR_6 = VAR_1;

 FUNC_2(VAR_0 | VAR_6, VAR_5->iobase + VAR_3);

 FUNC_1(VAR_4);

 FUNC_0(VAR_4);

 return 0;
}
