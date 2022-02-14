
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int brightness; } ;
struct tps65217_bl_pdata {int dft_brightness; TYPE_1__ props; } ;
struct tps65217_bl {int is_enabled; struct tps65217_bl_pdata* bl; TYPE_2__* dev; struct tps65217* tps; } ;
struct tps65217 {int dummy; } ;
struct TYPE_7__ {int parent; } ;
struct platform_device {int name; TYPE_2__ dev; } ;
struct backlight_properties {int max_brightness; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct tps65217_bl_pdata*) ;
 int FUNC_1 (struct tps65217_bl_pdata*) ;
 int FUNC_2 (struct tps65217_bl_pdata*) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 struct tps65217* FUNC_4 (int ) ;
 struct tps65217_bl_pdata* FUNC_5 (TYPE_2__*,int ,TYPE_2__*,struct tps65217_bl*,int *,struct backlight_properties*) ;
 struct tps65217_bl* FUNC_6 (TYPE_2__*,int,int ) ;
 int FUNC_7 (struct backlight_properties*,int ,int) ;
 int FUNC_8 (struct platform_device*,struct tps65217_bl*) ;
 int FUNC_9 (struct tps65217_bl*,struct tps65217_bl_pdata*) ;
 int VAR_3 ;
 struct tps65217_bl_pdata* FUNC_10 (struct platform_device*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_4)
{
 int VAR_5;
 struct tps65217 *VAR_6 = FUNC_4(VAR_4->dev.parent);
 struct tps65217_bl *VAR_7;
 struct tps65217_bl_pdata *VAR_8;
 struct backlight_properties VAR_9;

 VAR_8 = FUNC_10(VAR_4);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_7 = FUNC_6(&VAR_4->dev, sizeof(*VAR_7),
    VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 VAR_7->tps = VAR_6;
 VAR_7->dev = &VAR_4->dev;
 VAR_7->is_enabled = 0;

 VAR_5 = FUNC_9(VAR_7, VAR_8);
 if (VAR_5)
  return VAR_5;

 FUNC_7(&VAR_9, 0, sizeof(struct backlight_properties));
 VAR_9.type = VAR_0;
 VAR_9.max_brightness = 100;

 VAR_7->bl = FUNC_5(&VAR_4->dev, VAR_4->name,
      VAR_7->dev, VAR_7,
      &VAR_3, &VAR_9);
 if (FUNC_0(VAR_7->bl)) {
  FUNC_3(VAR_7->dev,
   "registration of backlight device failed: %d\n", VAR_5);
  return FUNC_1(VAR_7->bl);
 }

 VAR_7->bl->props.brightness = VAR_8->dft_brightness;
 FUNC_2(VAR_7->bl);
 FUNC_8(VAR_4, VAR_7);

 return 0;
}
