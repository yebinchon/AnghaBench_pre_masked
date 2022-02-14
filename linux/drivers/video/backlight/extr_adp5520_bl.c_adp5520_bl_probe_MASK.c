
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int parent; } ;
struct platform_device {TYPE_3__ dev; int name; int id; } ;
struct backlight_properties {void* max_brightness; int type; } ;
struct TYPE_9__ {int kobj; } ;
struct TYPE_8__ {void* brightness; } ;
struct backlight_device {TYPE_2__ dev; TYPE_1__ props; } ;
struct adp5520_bl {TYPE_5__* pdata; int master; int lock; scalar_t__ current_brightness; int id; } ;
struct TYPE_11__ {scalar_t__ en_ambl_sens; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct backlight_device*) ;
 int FUNC_3 (struct backlight_device*) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 TYPE_5__* FUNC_5 (TYPE_3__*) ;
 struct backlight_device* FUNC_6 (TYPE_3__*,int ,int ,struct adp5520_bl*,int *,struct backlight_properties*) ;
 struct adp5520_bl* FUNC_7 (TYPE_3__*,int,int ) ;
 int FUNC_8 (struct backlight_properties*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct platform_device*,struct backlight_device*) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_7)
{
 struct backlight_properties VAR_8;
 struct backlight_device *VAR_9;
 struct adp5520_bl *VAR_10;
 int VAR_11 = 0;

 VAR_10 = FUNC_7(&VAR_7->dev, sizeof(*VAR_10), VAR_4);
 if (VAR_10 == ((void*)0))
  return -VAR_3;

 VAR_10->master = VAR_7->dev.parent;
 VAR_10->pdata = FUNC_5(&VAR_7->dev);

 if (VAR_10->pdata == ((void*)0)) {
  FUNC_4(&VAR_7->dev, "missing platform data\n");
  return -VAR_2;
 }

 VAR_10->id = VAR_7->id;
 VAR_10->current_brightness = 0;

 FUNC_9(&VAR_10->lock);

 FUNC_8(&VAR_8, 0, sizeof(struct backlight_properties));
 VAR_8.type = VAR_1;
 VAR_8.max_brightness = VAR_0;
 VAR_9 = FUNC_6(&VAR_7->dev, VAR_7->name,
     VAR_10->master, VAR_10, &VAR_6,
     &VAR_8);
 if (FUNC_0(VAR_9)) {
  FUNC_4(&VAR_7->dev, "failed to register backlight\n");
  return FUNC_1(VAR_9);
 }

 VAR_9->props.brightness = VAR_0;
 if (VAR_10->pdata->en_ambl_sens)
  VAR_11 = FUNC_11(&VAR_9->dev.kobj,
   &VAR_5);

 if (VAR_11) {
  FUNC_4(&VAR_7->dev, "failed to register sysfs\n");
  return VAR_11;
 }

 FUNC_10(VAR_7, VAR_9);
 VAR_11 = FUNC_2(VAR_9);
 if (VAR_11) {
  FUNC_4(&VAR_7->dev, "failed to setup\n");
  if (VAR_10->pdata->en_ambl_sens)
   FUNC_12(&VAR_9->dev.kobj,
     &VAR_5);
  return VAR_11;
 }

 FUNC_3(VAR_9);

 return 0;
}
