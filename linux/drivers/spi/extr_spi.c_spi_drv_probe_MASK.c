
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_driver {int (* probe ) (struct spi_device*) ;} ;
struct spi_device {int irq; } ;
struct device {scalar_t__ of_node; int driver; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int) ;
 int FUNC_1 (struct device*,int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct spi_device*) ;
 struct spi_device* FUNC_5 (struct device*) ;
 struct spi_driver* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_1)
{
 const struct spi_driver *VAR_2 = FUNC_6(VAR_1->driver);
 struct spi_device *VAR_3 = FUNC_5(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1->of_node, 0);
 if (VAR_4)
  return VAR_4;

 if (VAR_1->of_node) {
  VAR_3->irq = FUNC_3(VAR_1->of_node, 0);
  if (VAR_3->irq == -VAR_0)
   return -VAR_0;
  if (VAR_3->irq < 0)
   VAR_3->irq = 0;
 }

 VAR_4 = FUNC_0(VAR_1, 1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = VAR_2->probe(VAR_3);
 if (VAR_4)
  FUNC_1(VAR_1, 1);

 return VAR_4;
}
