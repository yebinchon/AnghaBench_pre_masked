
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int irq; } ;
struct if_spi_card {int suspended; TYPE_1__* pdata; int workqueue; int priv; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* teardown ) (struct spi_device*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct if_spi_card* FUNC_3 (struct spi_device*) ;
 int FUNC_4 (struct spi_device*) ;
 struct spi_device* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0)
{
 struct spi_device *VAR_1 = FUNC_5(VAR_0);
 struct if_spi_card *VAR_2 = FUNC_3(VAR_1);

 if (!VAR_2->suspended) {
  FUNC_2(VAR_2->priv);
  FUNC_1(VAR_2->workqueue);
  FUNC_0(VAR_1->irq);

  if (VAR_2->pdata->teardown)
   VAR_2->pdata->teardown(VAR_1);
  VAR_2->suspended = 1;
 }

 return 0;
}
