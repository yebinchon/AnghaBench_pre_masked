
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int dummy; } ;
struct npcm_wdt {int reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct npcm_wdt* FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_1)
{
 struct npcm_wdt *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2->reg);
 FUNC_2(VAR_3 | VAR_0, VAR_2->reg);

 return 0;
}
