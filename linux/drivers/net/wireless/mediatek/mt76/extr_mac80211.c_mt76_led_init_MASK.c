
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int default_trigger; int name; int blink_set; int brightness_set; } ;
struct mt76_dev {int led_pin; TYPE_2__ led_cdev; TYPE_1__* dev; int led_al; int led_name; struct ieee80211_hw* hw; } ;
struct ieee80211_hw {int wiphy; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int ,int ) ;
 int VAR_1 ;
 struct device_node* FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*,char*) ;
 int FUNC_5 (struct device_node*,char*,int*) ;
 int FUNC_6 (int ,int,char*,char*) ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct mt76_dev *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->dev->of_node;
 struct ieee80211_hw *VAR_4 = VAR_2->hw;
 int VAR_5;

 if (!VAR_2->led_cdev.brightness_set && !VAR_2->led_cdev.blink_set)
  return 0;

 FUNC_6(VAR_2->led_name, sizeof(VAR_2->led_name),
   "mt76-%s", FUNC_7(VAR_4->wiphy));

 VAR_2->led_cdev.name = VAR_2->led_name;
 VAR_2->led_cdev.default_trigger =
  FUNC_2(VAR_4,
     VAR_0,
     VAR_1,
     FUNC_0(VAR_1));

 VAR_3 = FUNC_3(VAR_3, "led");
 if (VAR_3) {
  if (!FUNC_5(VAR_3, "led-sources", &VAR_5))
   VAR_2->led_pin = VAR_5;
  VAR_2->led_al = FUNC_4(VAR_3, "led-active-low");
 }

 return FUNC_1(VAR_2->dev, &VAR_2->led_cdev);
}
