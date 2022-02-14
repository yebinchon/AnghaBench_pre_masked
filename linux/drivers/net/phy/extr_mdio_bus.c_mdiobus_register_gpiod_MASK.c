
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdio_device {scalar_t__ reset_gpio; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (scalar_t__,char*) ;

__attribute__((used)) static int FUNC_3(struct mdio_device *VAR_1)
{
 int VAR_2;


 VAR_1->reset_gpio = FUNC_1(&VAR_1->dev,
       "reset", VAR_0);
 VAR_2 = FUNC_0(VAR_1->reset_gpio);
 if (VAR_2)
  return VAR_2;

 if (VAR_1->reset_gpio)
  FUNC_2(VAR_1->reset_gpio, "PHY reset");

 return 0;
}
