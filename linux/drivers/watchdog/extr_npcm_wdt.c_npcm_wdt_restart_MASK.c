
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct npcm_wdt {int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct npcm_wdt* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_3,
       unsigned long VAR_4, void *VAR_5)
{
 struct npcm_wdt *VAR_6 = FUNC_0(VAR_3);

 FUNC_2(VAR_1 | VAR_2 | VAR_0, VAR_6->reg);
 FUNC_1(1000);

 return 0;
}
