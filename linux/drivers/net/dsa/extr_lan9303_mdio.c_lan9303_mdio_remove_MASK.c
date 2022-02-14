
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdio_device {int dev; } ;
struct lan9303_mdio {int chip; } ;


 struct lan9303_mdio* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mdio_device *VAR_0)
{
 struct lan9303_mdio *VAR_1 = FUNC_0(&VAR_0->dev);

 if (!VAR_1)
  return;

 FUNC_1(&VAR_1->chip);
}
