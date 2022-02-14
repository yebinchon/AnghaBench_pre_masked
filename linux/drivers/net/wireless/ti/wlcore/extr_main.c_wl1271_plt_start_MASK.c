
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int fw_ver_str; int id; } ;
struct wl1271 {scalar_t__ state; int plt; int plt_mode; int mutex; TYPE_3__ chip; TYPE_2__* ops; TYPE_1__* hw; } ;
struct wiphy {int fw_version; int hw_version; } ;
typedef enum plt_mode { ____Placeholder_plt_mode } plt_mode ;
struct TYPE_5__ {int (* plt_init ) (struct wl1271*) ;} ;
struct TYPE_4__ {struct wiphy* wiphy; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct wl1271*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct wl1271*) ;
 int FUNC_7 (struct wl1271*,int) ;

int FUNC_8(struct wl1271 *VAR_6, const enum plt_mode VAR_7)
{
 int VAR_8 = VAR_3;
 struct wiphy *VAR_9 = VAR_6->hw->wiphy;

 static const char* const VAR_10[] = {
  "PLT_OFF",
  "PLT_ON",
  "PLT_FEM_DETECT",
  "PLT_CHIP_AWAKE"
 };

 int VAR_11;

 FUNC_0(&VAR_6->mutex);

 FUNC_5("power up");

 if (VAR_6->state != VAR_4) {
  FUNC_4("cannot go into PLT state because not "
        "in off state: %d", VAR_6->state);
  VAR_11 = -VAR_0;
  goto out;
 }


 VAR_6->plt = 1;
 VAR_6->plt_mode = VAR_7;

 while (VAR_8) {
  VAR_8--;
  VAR_11 = FUNC_7(VAR_6, 1);
  if (VAR_11 < 0)
   goto power_off;

  if (VAR_7 != VAR_1) {
   VAR_11 = VAR_6->ops->plt_init(VAR_6);
   if (VAR_11 < 0)
    goto power_off;
  }

  VAR_6->state = VAR_5;
  FUNC_5("firmware booted in PLT mode %s (%s)",
         VAR_10[VAR_7],
         VAR_6->chip.fw_ver_str);


  VAR_9->hw_version = VAR_6->chip.id;
  FUNC_2(VAR_9->fw_version, VAR_6->chip.fw_ver_str,
   sizeof(VAR_9->fw_version));

  goto out;

power_off:
  FUNC_6(VAR_6);
 }

 VAR_6->plt = 0;
 VAR_6->plt_mode = VAR_2;

 FUNC_4("firmware boot in PLT mode failed despite %d retries",
       VAR_3);
out:
 FUNC_1(&VAR_6->mutex);

 return VAR_11;
}
