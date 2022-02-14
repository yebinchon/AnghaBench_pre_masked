
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int mode; int cs_gpio; int dev; int max_speed_hz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_2)
{
 if (!VAR_2->max_speed_hz) {
  FUNC_0(&VAR_2->dev, "No max speed HZ parameter\n");
  return -VAR_0;
 }
 if (!FUNC_2(VAR_2->cs_gpio))
  return -VAR_0;

 FUNC_1(VAR_2->cs_gpio, !(VAR_2->mode & VAR_1));

 return 0;
}
