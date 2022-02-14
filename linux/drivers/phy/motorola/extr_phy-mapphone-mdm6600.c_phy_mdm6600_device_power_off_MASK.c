
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_mdm6600 {int enabled; scalar_t__ status; int dev; int ack; struct gpio_desc** ctrl_gpios; } ;
struct gpio_desc {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct gpio_desc*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct phy_mdm6600*,int ) ;
 scalar_t__ FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct phy_mdm6600 *VAR_3)
{
 struct gpio_desc *VAR_4 =
  VAR_3->ctrl_gpios[VAR_1];

 VAR_3->enabled = 0;
 FUNC_5(VAR_3, VAR_0);
 FUNC_4(100);

 FUNC_2(VAR_4, 1);

 FUNC_1(VAR_3->dev, "Waiting for power down request to complete.. ");
 if (FUNC_6(&VAR_3->ack,
     FUNC_3(5000))) {
  if (VAR_3->status == VAR_2)
   FUNC_1(VAR_3->dev, "Powered down OK\n");
 } else {
  FUNC_0(VAR_3->dev, "Timed out powering down\n");
 }
}
