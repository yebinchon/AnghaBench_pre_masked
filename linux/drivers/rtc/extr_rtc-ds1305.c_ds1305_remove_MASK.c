
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {scalar_t__ irq; int dev; } ;
struct ds1305 {int work; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,struct ds1305*) ;
 int FUNC_2 (int ,int *) ;
 struct ds1305* FUNC_3 (struct spi_device*) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_1)
{
 struct ds1305 *VAR_2 = FUNC_3(VAR_1);


 if (VAR_1->irq) {
  FUNC_2(VAR_0, &VAR_2->flags);
  FUNC_1(&VAR_1->dev, VAR_1->irq, VAR_2);
  FUNC_0(&VAR_2->work);
 }

 return 0;
}
