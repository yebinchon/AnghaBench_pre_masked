
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asm9260_wdt_priv {scalar_t__ mode; int dev; scalar_t__ iobase; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct asm9260_wdt_priv*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct asm9260_wdt_priv *VAR_7 = VAR_6;
 u32 VAR_8;

 VAR_8 = FUNC_2(VAR_7->iobase + VAR_2);
 if (!(VAR_8 & VAR_0))
  return VAR_4;

 if (VAR_7->mode == VAR_1) {
  FUNC_1(VAR_7->dev, "Watchdog Timeout. Do nothing.\n");
 } else {
  FUNC_1(VAR_7->dev, "Watchdog Timeout. Doing SW Reset.\n");
  FUNC_0(VAR_7);
 }

 return VAR_3;
}
