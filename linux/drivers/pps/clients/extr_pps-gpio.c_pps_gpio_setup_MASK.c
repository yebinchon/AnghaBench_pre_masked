
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pps_gpio_device_data {int echo_active_ms; int assert_falling_edge; scalar_t__ echo_pin; scalar_t__ gpio_pin; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_5 (struct device_node*,char*) ;
 int FUNC_6 (struct device_node*,char*,int*) ;
 struct pps_gpio_device_data* FUNC_7 (struct platform_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct pps_gpio_device_data *VAR_4 = FUNC_7(VAR_3);
 struct device_node *VAR_5 = VAR_3->dev.of_node;
 int VAR_6;
 u32 VAR_7;

 VAR_4->gpio_pin = FUNC_3(&VAR_3->dev,
  ((void*)0),
  VAR_1);
 if (FUNC_0(VAR_4->gpio_pin)) {
  FUNC_2(&VAR_3->dev,
   "failed to request PPS GPIO\n");
  return FUNC_1(VAR_4->gpio_pin);
 }

 VAR_4->echo_pin = FUNC_4(&VAR_3->dev,
   "echo",
   VAR_2);
 if (VAR_4->echo_pin) {
  if (FUNC_0(VAR_4->echo_pin)) {
   FUNC_2(&VAR_3->dev, "failed to request ECHO GPIO\n");
   return FUNC_1(VAR_4->echo_pin);
  }

  VAR_6 = FUNC_6(VAR_5,
   "echo-active-ms",
   &VAR_7);
  if (VAR_6) {
   FUNC_2(&VAR_3->dev,
    "failed to get echo-active-ms from OF\n");
   return VAR_6;
  }
  VAR_4->echo_active_ms = VAR_7;

  if (!VAR_4->echo_active_ms || VAR_4->echo_active_ms > 999) {
   FUNC_2(&VAR_3->dev,
    "echo-active-ms: %u - bad value from OF\n",
    VAR_4->echo_active_ms);
   return -VAR_0;
  }
 }

 if (FUNC_5(VAR_5, "assert-falling-edge"))
  VAR_4->assert_falling_edge = 1;
 return 0;
}
