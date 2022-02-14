
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {struct spi_device* spi; } ;
struct spi_device {int statistics; struct spi_controller* controller; } ;
struct spi_controller {int (* transfer ) (struct spi_device*,struct spi_message*) ;int statistics; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct spi_device*,struct spi_message*) ;
 int FUNC_2 (struct spi_message*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_2, struct spi_message *VAR_3)
{
 struct spi_controller *VAR_4 = VAR_2->controller;





 if (!VAR_4->transfer)
  return -VAR_0;

 VAR_3->spi = VAR_2;

 FUNC_0(&VAR_4->statistics, VAR_1);
 FUNC_0(&VAR_2->statistics, VAR_1);

 FUNC_2(VAR_3);

 return VAR_4->transfer(VAR_2, VAR_3);
}
