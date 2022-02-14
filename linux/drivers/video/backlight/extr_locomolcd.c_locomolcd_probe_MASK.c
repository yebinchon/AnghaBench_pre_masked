
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int parent; } ;
struct locomo_dev {TYPE_5__ dev; } ;
struct backlight_properties {int max_brightness; int type; } ;
struct TYPE_8__ {int brightness; } ;
struct TYPE_9__ {TYPE_1__ props; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (char*,TYPE_5__*,int *,int *,struct backlight_properties*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 struct locomo_dev* VAR_4 ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (struct backlight_properties*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct locomo_dev *VAR_5)
{
 struct backlight_properties VAR_6;
 unsigned long VAR_7;

 FUNC_4(VAR_7);
 VAR_4 = VAR_5;

 FUNC_5(VAR_5->dev.parent, VAR_1, 0);






 if (FUNC_8())
  FUNC_6(1);

 FUNC_3(VAR_7);

 FUNC_9(&VAR_6, 0, sizeof(struct backlight_properties));
 VAR_6.type = VAR_0;
 VAR_6.max_brightness = 4;
 VAR_3 = FUNC_2("locomo-bl",
       &VAR_5->dev, ((void*)0),
       &VAR_2, &VAR_6);

 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);


 VAR_3->props.brightness = 2;
 FUNC_7(VAR_3);

 return 0;
}
