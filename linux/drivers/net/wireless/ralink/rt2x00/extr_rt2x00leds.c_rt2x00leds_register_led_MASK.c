
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char const* name; int brightness; } ;
struct rt2x00_led {int flags; TYPE_2__ led_dev; } ;
struct rt2x00_dev {TYPE_1__* hw; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,TYPE_2__*) ;
 int FUNC_1 (struct rt2x00_dev*,char*) ;
 struct device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct rt2x00_dev *VAR_2,
       struct rt2x00_led *VAR_3,
       const char *VAR_4)
{
 struct device *VAR_5 = FUNC_2(VAR_2->hw->wiphy);
 int VAR_6;

 VAR_3->led_dev.name = VAR_4;
 VAR_3->led_dev.brightness = VAR_0;

 VAR_6 = FUNC_0(VAR_5, &VAR_3->led_dev);
 if (VAR_6) {
  FUNC_1(VAR_2, "Failed to register led handler\n");
  return VAR_6;
 }

 VAR_3->flags |= VAR_1;

 return 0;
}
