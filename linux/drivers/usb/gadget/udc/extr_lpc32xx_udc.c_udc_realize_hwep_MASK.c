
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_udc {int realized_eps; int udp_baseaddr; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static void FUNC_8(struct lpc32xx_udc *VAR_1, u32 VAR_2,
        u32 VAR_3)
{
 int VAR_4 = 1000;

 FUNC_7(VAR_0, FUNC_0(VAR_1->udp_baseaddr));
 FUNC_7(VAR_2, FUNC_2(VAR_1->udp_baseaddr));
 VAR_1->realized_eps |= (1 << VAR_2);
 FUNC_7(VAR_1->realized_eps, FUNC_4(VAR_1->udp_baseaddr));
 FUNC_7(VAR_3, FUNC_3(VAR_1->udp_baseaddr));


 while ((!(FUNC_6(FUNC_1(VAR_1->udp_baseaddr)) &
    VAR_0)) && (VAR_4 > 0))
  VAR_4--;
 if (!VAR_4)
  FUNC_5(VAR_1->dev, "EP not correctly realized in hardware\n");

 FUNC_7(VAR_0, FUNC_0(VAR_1->udp_baseaddr));
}
