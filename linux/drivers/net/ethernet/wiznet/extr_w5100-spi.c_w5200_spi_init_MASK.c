
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w5200_spi_priv {int cmd_lock; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct w5200_spi_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0)
{
 struct w5200_spi_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->cmd_lock);

 return 0;
}
