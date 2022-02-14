
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int irq; } ;
struct lbs_private {int dummy; } ;
struct if_spi_card {TYPE_1__* pdata; int workqueue; int resume_work; struct lbs_private* priv; } ;
struct TYPE_2__ {int (* teardown ) (struct spi_device*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct if_spi_card*) ;
 int FUNC_3 (int ,struct if_spi_card*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct lbs_private*) ;
 int FUNC_6 (struct lbs_private*) ;
 struct if_spi_card* FUNC_7 (struct spi_device*) ;
 int FUNC_8 (struct spi_device*) ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_0)
{
 struct if_spi_card *VAR_1 = FUNC_7(VAR_0);
 struct lbs_private *VAR_2 = VAR_1->priv;

 FUNC_4("libertas_spi_remove\n");

 FUNC_0(&VAR_1->resume_work);

 FUNC_6(VAR_2);
 FUNC_5(VAR_2);

 FUNC_3(VAR_0->irq, VAR_1);
 FUNC_1(VAR_1->workqueue);
 if (VAR_1->pdata->teardown)
  VAR_1->pdata->teardown(VAR_0);
 FUNC_2(VAR_1);

 return 0;
}
