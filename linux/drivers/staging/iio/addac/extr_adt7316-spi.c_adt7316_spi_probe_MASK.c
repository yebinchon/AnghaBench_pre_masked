
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {scalar_t__ max_speed_hz; int modalias; int dev; int irq; } ;
struct adt7316_bus {int multi_write; int multi_read; int (* write ) (struct spi_device*,int ,int ) ;int read; int irq; struct spi_device* client; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct adt7316_bus*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct spi_device*,int ,int ) ;
 int FUNC_2 (int *,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_5)
{
 struct adt7316_bus VAR_6 = {
  .client = VAR_5,
  .irq = VAR_5->irq,
  .read = VAR_4,
  .write = FUNC_1,
  .multi_read = VAR_2,
  .multi_write = VAR_3,
 };


 if (VAR_5->max_speed_hz > VAR_0) {
  FUNC_2(&VAR_5->dev, "SPI CLK %d Hz?\n",
   VAR_5->max_speed_hz);
  return -VAR_1;
 }


 FUNC_1(VAR_5, 0, 0);
 FUNC_1(VAR_5, 0, 0);
 FUNC_1(VAR_5, 0, 0);

 return FUNC_0(&VAR_5->dev, &VAR_6, VAR_5->modalias);
}
