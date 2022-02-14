
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct net_device {int dummy; } ;
struct hi3110_priv {int hi3110_lock; struct spi_device* spi; } ;
struct can_berr_counter {void* rxerr; void* txerr; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct spi_device*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct hi3110_priv* FUNC_3 (struct net_device const*) ;

__attribute__((used)) static int FUNC_4(const struct net_device *VAR_2,
       struct can_berr_counter *VAR_3)
{
 struct hi3110_priv *VAR_4 = FUNC_3(VAR_2);
 struct spi_device *VAR_5 = VAR_4->spi;

 FUNC_1(&VAR_4->hi3110_lock);
 VAR_3->txerr = FUNC_0(VAR_5, VAR_1);
 VAR_3->rxerr = FUNC_0(VAR_5, VAR_0);
 FUNC_2(&VAR_4->hi3110_lock);

 return 0;
}
