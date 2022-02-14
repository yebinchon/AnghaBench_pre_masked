
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* default_trigger; int brightness_set; scalar_t__* name; } ;
struct ath5k_led {struct ath5k_hw* ah; TYPE_1__ led_dev; scalar_t__* name; } ;
struct ath5k_hw {int dev; } ;


 int FUNC_0 (struct ath5k_hw*,char*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (scalar_t__*,char const*,int) ;

__attribute__((used)) static int
FUNC_3(struct ath5k_hw *VAR_1, struct ath5k_led *VAR_2,
     const char *VAR_3, const char *VAR_4)
{
 int VAR_5;

 VAR_2->ah = VAR_1;
 FUNC_2(VAR_2->name, VAR_3, sizeof(VAR_2->name));
 VAR_2->name[sizeof(VAR_2->name)-1] = 0;
 VAR_2->led_dev.name = VAR_2->name;
 VAR_2->led_dev.default_trigger = VAR_4;
 VAR_2->led_dev.brightness_set = VAR_0;

 VAR_5 = FUNC_1(VAR_1->dev, &VAR_2->led_dev);
 if (VAR_5) {
  FUNC_0(VAR_1, "could not register LED %s\n", VAR_3);
  VAR_2->ah = ((void*)0);
 }
 return VAR_5;
}
