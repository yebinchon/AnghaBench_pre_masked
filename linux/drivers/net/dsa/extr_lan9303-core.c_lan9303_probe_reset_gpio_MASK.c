
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan9303 {int reset_duration; int dev; int reset_gpio; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_5(struct lan9303 *VAR_1,
         struct device_node *VAR_2)
{
 VAR_1->reset_gpio = FUNC_3(VAR_1->dev, "reset",
         VAR_0);
 if (FUNC_0(VAR_1->reset_gpio))
  return FUNC_1(VAR_1->reset_gpio);

 if (!VAR_1->reset_gpio) {
  FUNC_2(VAR_1->dev, "No reset GPIO defined\n");
  return 0;
 }

 VAR_1->reset_duration = 200;

 if (VAR_2) {
  FUNC_4(VAR_2, "reset-duration",
         &VAR_1->reset_duration);
 } else {
  FUNC_2(VAR_1->dev, "reset duration defaults to 200 ms\n");
 }


 if (VAR_1->reset_duration > 1000)
  VAR_1->reset_duration = 1000;

 return 0;
}
