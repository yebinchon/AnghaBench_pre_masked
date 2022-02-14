
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct dcon_priv {scalar_t__ bl_val; int ignore_fb_events; } ;
struct TYPE_2__ {int brightness; scalar_t__ power; int state; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct dcon_priv* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct dcon_priv*,scalar_t__) ;
 int FUNC_2 (struct dcon_priv*,int) ;

__attribute__((used)) static int FUNC_3(struct backlight_device *VAR_2)
{
 struct dcon_priv *VAR_3 = FUNC_0(VAR_2);
 u8 VAR_4 = VAR_2->props.brightness & 0x0F;

 if (VAR_2->props.power != VAR_1)
  VAR_4 = 0;

 if (VAR_4 != VAR_3->bl_val)
  FUNC_1(VAR_3, VAR_4);


 if (!VAR_3->ignore_fb_events)
  FUNC_2(VAR_3, !!(VAR_2->props.state & VAR_0));

 return 0;
}
