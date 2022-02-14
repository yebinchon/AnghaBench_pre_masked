
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan9303 {int reset_gpio; int ds; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct lan9303*) ;

int FUNC_5(struct lan9303 *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1 != 0)
  FUNC_0(VAR_0->dev, "shutting down failed\n");

 FUNC_1(VAR_0->ds);


 FUNC_2(VAR_0->reset_gpio, 1);
 FUNC_3(VAR_0->reset_gpio);

 return 0;
}
