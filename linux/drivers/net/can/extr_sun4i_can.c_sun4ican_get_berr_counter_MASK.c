
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun4ican_priv {int clk; scalar_t__ base; } ;
struct net_device {int dummy; } ;
struct can_berr_counter {int txerr; int rxerr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device const*,char*) ;
 struct sun4ican_priv* FUNC_3 (struct net_device const*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(const struct net_device *VAR_1,
         struct can_berr_counter *VAR_2)
{
 struct sun4ican_priv *VAR_3 = FUNC_3(VAR_1);
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3->clk);
 if (VAR_5) {
  FUNC_2(VAR_1, "could not enable clock\n");
  return VAR_5;
 }

 VAR_4 = FUNC_4(VAR_3->base + VAR_0);

 VAR_2->txerr = VAR_4 & 0xFF;
 VAR_2->rxerr = (VAR_4 >> 16) & 0xFF;

 FUNC_0(VAR_3->clk);

 return 0;
}
