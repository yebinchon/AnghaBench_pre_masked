
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1000_priv {int (* read_reg ) (struct sja1000_priv*,int ) ;} ;
struct net_device {int dummy; } ;
struct can_berr_counter {int rxerr; int txerr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sja1000_priv* FUNC_0 (struct net_device const*) ;
 int FUNC_1 (struct sja1000_priv*,int ) ;
 int FUNC_2 (struct sja1000_priv*,int ) ;

__attribute__((used)) static int FUNC_3(const struct net_device *VAR_2,
        struct can_berr_counter *VAR_3)
{
 struct sja1000_priv *VAR_4 = FUNC_0(VAR_2);

 VAR_3->txerr = VAR_4->read_reg(VAR_4, VAR_1);
 VAR_3->rxerr = VAR_4->read_reg(VAR_4, VAR_0);

 return 0;
}
