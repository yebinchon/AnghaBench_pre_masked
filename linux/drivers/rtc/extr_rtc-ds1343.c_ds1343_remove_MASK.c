
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; scalar_t__ irq; } ;
struct ds1343_priv {int mutex; int irqen; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,scalar_t__,struct ds1343_priv*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct ds1343_priv* FUNC_6 (struct spi_device*) ;
 int FUNC_7 (struct spi_device*,int *) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_1)
{
 struct ds1343_priv *VAR_2 = FUNC_6(VAR_1);

 if (VAR_1->irq) {
  FUNC_4(&VAR_2->mutex);
  VAR_2->irqen &= ~VAR_0;
  FUNC_5(&VAR_2->mutex);

  FUNC_0(&VAR_1->dev);
  FUNC_1(&VAR_1->dev, 0);
  FUNC_2(&VAR_1->dev, VAR_1->irq, VAR_2);
 }

 FUNC_7(VAR_1, ((void*)0));

 FUNC_3(&VAR_1->dev);

 return 0;
}
