
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct watchdog_device {int dummy; } ;
struct asm9260_wdt_priv {unsigned int wdt_freq; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 struct asm9260_wdt_priv* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static unsigned int FUNC_2(struct watchdog_device *VAR_1)
{
 struct asm9260_wdt_priv *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2->iobase + VAR_0);

 return VAR_3 / VAR_2->wdt_freq;
}
