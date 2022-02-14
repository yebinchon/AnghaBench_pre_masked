
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct backlight_properties {scalar_t__ max_brightness; scalar_t__ brightness; int type; } ;
struct arcxcnn {int bl; int dev; TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ initial_brightness; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,char const*,int ,struct arcxcnn*,int *,struct backlight_properties*) ;
 struct backlight_properties* FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct arcxcnn *VAR_5)
{
 struct backlight_properties *VAR_6;
 const char *VAR_7 = VAR_5->pdata->name ? : "arctic_bl";

 VAR_6 = FUNC_2(VAR_5->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->type = VAR_0;
 VAR_6->max_brightness = VAR_3;

 if (VAR_5->pdata->initial_brightness > VAR_6->max_brightness)
  VAR_5->pdata->initial_brightness = VAR_6->max_brightness;

 VAR_6->brightness = VAR_5->pdata->initial_brightness;

 VAR_5->bl = FUNC_1(VAR_5->dev, VAR_7, VAR_5->dev, VAR_5,
           &VAR_4, VAR_6);
 return FUNC_0(VAR_5->bl);
}
