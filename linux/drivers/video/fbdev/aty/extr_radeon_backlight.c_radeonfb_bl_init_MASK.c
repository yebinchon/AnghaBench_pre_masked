
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeonfb_info {scalar_t__ mon1_type; scalar_t__ family; TYPE_2__* info; } ;
struct radeon_bl_privdata {int negative; struct radeonfb_info* rinfo; } ;
struct backlight_properties {scalar_t__ max_brightness; int type; } ;
struct TYPE_3__ {int power; int max_brightness; int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
typedef int name ;
struct TYPE_4__ {int node; struct backlight_device* bl_dev; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 struct backlight_device* FUNC_1 (char*,int ,struct radeon_bl_privdata*,int *,struct backlight_properties*) ;
 int FUNC_2 (struct backlight_device*) ;
 int FUNC_3 (TYPE_2__*,int ,int,int) ;
 int FUNC_4 (struct radeon_bl_privdata*) ;
 struct radeon_bl_privdata* FUNC_5 (int,int ) ;
 int FUNC_6 (struct backlight_properties*,int ,int) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,...) ;
 int VAR_11 ;
 int FUNC_10 (char*,int,char*,int) ;

void FUNC_11(struct radeonfb_info *VAR_12)
{
 struct backlight_properties VAR_13;
 struct backlight_device *VAR_14;
 struct radeon_bl_privdata *VAR_15;
 char VAR_16[12];

 if (VAR_12->mon1_type != VAR_10)
  return;







 VAR_15 = FUNC_5(sizeof(struct radeon_bl_privdata), VAR_8);
 if (!VAR_15) {
  FUNC_9("radeonfb: Memory allocation failed\n");
  goto error;
 }

 FUNC_10(VAR_16, sizeof(VAR_16), "radeonbl%d", VAR_12->info->node);

 FUNC_6(&VAR_13, 0, sizeof(struct backlight_properties));
 VAR_13.type = VAR_0;
 VAR_13.max_brightness = VAR_5 - 1;
 VAR_14 = FUNC_1(VAR_16, VAR_12->info->dev, VAR_15,
           &VAR_11, &VAR_13);
 if (FUNC_0(VAR_14)) {
  VAR_12->info->bl_dev = ((void*)0);
  FUNC_9("radeonfb: Backlight registration failed\n");
  goto error;
 }

 VAR_15->rinfo = VAR_12;




 VAR_15->negative =
  (VAR_12->family != VAR_1 &&
   VAR_12->family != VAR_2 &&
   VAR_12->family != VAR_3 &&
   VAR_12->family != VAR_4);
 VAR_12->info->bl_dev = VAR_14;
 FUNC_3(VAR_12->info, 0,
   63 * VAR_6 / VAR_9,
  217 * VAR_6 / VAR_9);

 VAR_14->props.brightness = VAR_14->props.max_brightness;
 VAR_14->props.power = VAR_7;
 FUNC_2(VAR_14);

 FUNC_9("radeonfb: Backlight initialized (%s)\n", VAR_16);

 return;

error:
 FUNC_4(VAR_15);
 return;
}
