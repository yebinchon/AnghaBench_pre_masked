
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct net_device {int dummy; } ;
struct hi3110_priv {int clk; int power; struct net_device* net; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ) ;
 struct hi3110_priv* FUNC_4 (struct spi_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_0)
{
 struct hi3110_priv *VAR_1 = FUNC_4(VAR_0);
 struct net_device *VAR_2 = VAR_1->net;

 FUNC_5(VAR_2);

 FUNC_3(VAR_1->power, 0);

 if (!FUNC_0(VAR_1->clk))
  FUNC_1(VAR_1->clk);

 FUNC_2(VAR_2);

 return 0;
}
