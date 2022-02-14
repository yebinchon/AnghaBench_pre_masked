
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int mode; scalar_t__ chip_select; int dev; int cs_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_3)
{
 int VAR_4;


 if (VAR_3->mode & VAR_2)
  return 0;
 if (FUNC_3(VAR_3->cs_gpio)) {




  VAR_4 = FUNC_2(VAR_3->cs_gpio,
         (VAR_3->mode & VAR_1) ? 0 : 1);
  if (VAR_4)
   FUNC_0(&VAR_3->dev,
    "could not set gpio %i as output: %i\n",
    VAR_3->cs_gpio, VAR_4);

  return VAR_4;
 }
 FUNC_1(&VAR_3->dev,
   "Native CS is not supported - please configure cs-gpio in device-tree\n");

 if (VAR_3->chip_select == 0)
  return 0;

 FUNC_1(&VAR_3->dev, "Native CS is not working for cs > 0\n");

 return -VAR_0;
}
