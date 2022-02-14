
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct unimac_mdio_priv {int clk_freq; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct unimac_mdio_priv*,int ) ;
 int FUNC_3 (struct unimac_mdio_priv*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct unimac_mdio_priv *VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5, VAR_6;


 if (!VAR_3->clk_freq)
  return;

 if (!VAR_3->clk)
  VAR_4 = 250000000;
 else
  VAR_4 = FUNC_0(VAR_3->clk);

 VAR_6 = (VAR_4 / (2 * VAR_3->clk_freq)) - 1;
 if (VAR_6 & ~VAR_1) {
  FUNC_1("Incorrect MDIO clock frequency, ignoring\n");
  return;
 }




 VAR_5 = FUNC_2(VAR_3, VAR_0);
 VAR_5 &= ~(VAR_1 << VAR_2);
 VAR_5 |= VAR_6 << VAR_2;
 FUNC_3(VAR_3, VAR_5, VAR_0);
}
