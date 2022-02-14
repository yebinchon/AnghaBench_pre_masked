
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_udc {int enabled_hwepints; int udp_baseaddr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct lpc32xx_udc *VAR_0, u32 VAR_1)
{
 VAR_0->enabled_hwepints &= ~(1 << VAR_1);
 FUNC_1(VAR_0->enabled_hwepints, FUNC_0(VAR_0->udp_baseaddr));
}
