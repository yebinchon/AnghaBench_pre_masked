
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; int irq; } ;
struct iio_dev {int dummy; } ;
struct ade7854_state {struct spi_device* spi; int irq; int write_reg; int read_reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct iio_dev* FUNC_1 (int *,int) ;
 struct ade7854_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_3)
{
 struct ade7854_state *VAR_4;
 struct iio_dev *VAR_5;

 VAR_5 = FUNC_1(&VAR_3->dev, sizeof(*VAR_4));
 if (!VAR_5)
  return -VAR_0;
 VAR_4 = FUNC_2(VAR_5);
 FUNC_3(VAR_3, VAR_5);
 VAR_4->read_reg = VAR_1;
 VAR_4->write_reg = VAR_2;
 VAR_4->irq = VAR_3->irq;
 VAR_4->spi = VAR_3;

 return FUNC_0(VAR_5, &VAR_3->dev);
}
