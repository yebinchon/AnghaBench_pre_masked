
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int mode; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int
FUNC_1(struct spi_device *VAR_4)
{
 if ((VAR_4->mode & VAR_2) == 0) {
  FUNC_0(&VAR_4->dev, "unsupported active low chip select\n");
  return -VAR_0;
 }

 if ((VAR_4->mode & VAR_3) == 0) {
  FUNC_0(&VAR_4->dev, "unsupported MSB first mode\n");
  return -VAR_0;
 }

 if ((VAR_4->mode & VAR_1) == 0) {
  FUNC_0(&VAR_4->dev, "unsupported wiring. 3 wires required\n");
  return -VAR_0;
 }

 return 0;
}
