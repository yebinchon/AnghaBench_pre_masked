
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct npcm_wdt {int reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct npcm_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static bool FUNC_2(struct watchdog_device *VAR_1)
{
 struct npcm_wdt *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2->reg) & VAR_0;
}
