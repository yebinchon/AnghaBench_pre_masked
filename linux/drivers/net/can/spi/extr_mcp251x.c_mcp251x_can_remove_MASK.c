
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct net_device {int dummy; } ;
struct mcp251x_priv {int clk; int power; struct net_device* net; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ) ;
 struct mcp251x_priv* FUNC_3 (struct spi_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_0)
{
 struct mcp251x_priv *VAR_1 = FUNC_3(VAR_0);
 struct net_device *VAR_2 = VAR_1->net;

 FUNC_4(VAR_2);

 FUNC_2(VAR_1->power, 0);

 FUNC_0(VAR_1->clk);

 FUNC_1(VAR_2);

 return 0;
}
