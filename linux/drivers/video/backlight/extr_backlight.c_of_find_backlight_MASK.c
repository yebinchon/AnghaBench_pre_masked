
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct device {scalar_t__ of_node; } ;
struct TYPE_2__ {scalar_t__ max_brightness; scalar_t__ brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct backlight_device* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct backlight_device* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (scalar_t__,char*,int ) ;

struct backlight_device *FUNC_5(struct device *VAR_2)
{
 struct backlight_device *VAR_3 = ((void*)0);
 struct device_node *VAR_4;

 if (!VAR_2)
  return ((void*)0);

 if (FUNC_1(VAR_0) && VAR_2->of_node) {
  VAR_4 = FUNC_4(VAR_2->of_node, "backlight", 0);
  if (VAR_4) {
   VAR_3 = FUNC_2(VAR_4);
   FUNC_3(VAR_4);
   if (!VAR_3)
    return FUNC_0(-VAR_1);




   if (!VAR_3->props.brightness)
    VAR_3->props.brightness = VAR_3->props.max_brightness;
  }
 }

 return VAR_3;
}
