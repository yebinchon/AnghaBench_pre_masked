
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssb_extif {int dummy; } ;
struct bcm47xx_wdt {int dummy; } ;


 int VAR_0 ;
 struct ssb_extif* FUNC_0 (struct bcm47xx_wdt*) ;
 int FUNC_1 (struct ssb_extif*,int) ;

u32 FUNC_2(struct bcm47xx_wdt *VAR_1, u32 VAR_2)
{
 struct ssb_extif *VAR_3 = FUNC_0(VAR_1);
 u32 VAR_4 = (VAR_0 / 1000) * VAR_2;

 VAR_4 = FUNC_1(VAR_3, VAR_4);

 return (VAR_4 * 1000) / VAR_0;
}
