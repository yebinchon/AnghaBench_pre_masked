
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
typedef enum fifo_fill_condition { ____Placeholder_fifo_fill_condition } fifo_fill_condition ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct spi_device*,int ,int ) ;
 int FUNC_2 (struct spi_device*,int ,int ) ;

int FUNC_3(struct spi_device *VAR_3,
     enum fifo_fill_condition VAR_4)
{
 switch (VAR_4) {
 case 128:
  return FUNC_2(VAR_3, VAR_2,
        VAR_1);
 case 129:
  return FUNC_1(VAR_3, VAR_2,
          VAR_1);
 default:
  FUNC_0(&VAR_3->dev, "set: illegal input param");
  return -VAR_0;
 }
}
