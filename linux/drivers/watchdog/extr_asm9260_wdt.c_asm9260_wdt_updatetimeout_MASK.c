
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int timeout; } ;
struct asm9260_wdt_priv {int wdt_freq; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 struct asm9260_wdt_priv* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1)
{
 struct asm9260_wdt_priv *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3;

 VAR_3 = VAR_1->timeout * VAR_2->wdt_freq;

 FUNC_0(VAR_3, VAR_2->iobase + VAR_0);

 return 0;
}
