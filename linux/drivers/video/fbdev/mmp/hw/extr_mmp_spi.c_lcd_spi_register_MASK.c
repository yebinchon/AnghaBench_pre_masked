
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int bus_num; int num_chipselect; int dev; int transfer; int setup; } ;
struct mmphw_ctrl {int dev; void* reg_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct spi_master* FUNC_2 (int ,int) ;
 void** FUNC_3 (struct spi_master*) ;
 int FUNC_4 (struct spi_master*) ;
 int FUNC_5 (struct spi_master*) ;

int FUNC_6(struct mmphw_ctrl *VAR_3)
{
 struct spi_master *VAR_4;
 void **VAR_5;
 int VAR_6;

 VAR_4 = FUNC_2(VAR_3->dev, sizeof(void *));
 if (!VAR_4) {
  FUNC_0(VAR_3->dev, "unable to allocate SPI master\n");
  return -VAR_0;
 }
 VAR_5 = FUNC_3(VAR_4);
 *VAR_5 = VAR_3->reg_base;


 VAR_4->bus_num = 5;
 VAR_4->num_chipselect = 1;
 VAR_4->setup = VAR_2;
 VAR_4->transfer = VAR_1;

 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6 < 0) {
  FUNC_0(VAR_3->dev, "unable to register SPI master\n");
  FUNC_4(VAR_4);
  return VAR_6;
 }

 FUNC_1(&VAR_4->dev, "registered\n");

 return 0;
}
