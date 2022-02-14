
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct b43legacy_wldev {int wl; TYPE_1__* dev; } ;
struct TYPE_4__ {char const* default_trigger; int brightness_set; int name; } ;
struct b43legacy_led {int activelow; struct b43legacy_wldev* dev; TYPE_2__ led_dev; int name; int index; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_4(struct b43legacy_wldev *VAR_3,
      struct b43legacy_led *VAR_4,
      const char *VAR_5,
      const char *VAR_6,
      u8 VAR_7, bool VAR_8)
{
 int VAR_9;

 FUNC_0(VAR_3, VAR_7, VAR_8);
 if (VAR_4->dev)
  return -VAR_0;
 if (!VAR_6)
  return -VAR_1;
 VAR_4->dev = VAR_3;
 VAR_4->index = VAR_7;
 VAR_4->activelow = VAR_8;
 FUNC_3(VAR_4->name, VAR_5, sizeof(VAR_4->name));

 VAR_4->led_dev.name = VAR_4->name;
 VAR_4->led_dev.default_trigger = VAR_6;
 VAR_4->led_dev.brightness_set = VAR_2;

 VAR_9 = FUNC_2(VAR_3->dev->dev, &VAR_4->led_dev);
 if (VAR_9) {
  FUNC_1(VAR_3->wl, "LEDs: Failed to register %s\n", VAR_5);
  VAR_4->dev = ((void*)0);
  return VAR_9;
 }
 return 0;
}
