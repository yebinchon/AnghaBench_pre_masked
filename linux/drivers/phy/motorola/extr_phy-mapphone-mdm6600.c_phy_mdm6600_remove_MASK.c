
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct phy_mdm6600 {int status_work; int bootup_work; int modem_wake_work; int ack; int running; int dev; struct gpio_desc** ctrl_gpios; } ;
struct gpio_desc {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct gpio_desc*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct phy_mdm6600*) ;
 struct phy_mdm6600* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_2)
{
 struct phy_mdm6600 *VAR_3 = FUNC_4(VAR_2);
 struct gpio_desc *VAR_4 = VAR_3->ctrl_gpios[VAR_1];

 FUNC_6(VAR_3->dev);
 FUNC_7(VAR_3->dev);
 FUNC_5(VAR_3->dev);

 if (!VAR_3->running)
  FUNC_8(&VAR_3->ack,
   FUNC_2(VAR_0));

 FUNC_1(VAR_4, 1);
 FUNC_3(VAR_3);

 FUNC_0(&VAR_3->modem_wake_work);
 FUNC_0(&VAR_3->bootup_work);
 FUNC_0(&VAR_3->status_work);

 return 0;
}
