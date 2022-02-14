
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {int num_strings; } ;
struct pm8941_wled {scalar_t__ addr; int regmap; TYPE_2__ cfg; } ;
struct TYPE_3__ {scalar_t__ brightness; scalar_t__ power; scalar_t__ fb_blank; int state; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 struct pm8941_wled* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__*,int) ;
 int FUNC_2 (int ,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct backlight_device *VAR_10)
{
 struct pm8941_wled *VAR_11 = FUNC_0(VAR_10);
 u16 VAR_12 = VAR_10->props.brightness;
 u8 VAR_13 = 0;
 int VAR_14;
 int VAR_15;

 if (VAR_10->props.power != VAR_1 ||
     VAR_10->props.fb_blank != VAR_1 ||
     VAR_10->props.state & VAR_0)
  VAR_12 = 0;

 if (VAR_12 != 0)
  VAR_13 = VAR_3;

 VAR_14 = FUNC_2(VAR_11->regmap,
   VAR_11->addr + VAR_2,
   VAR_4, VAR_13);
 if (VAR_14)
  return VAR_14;

 for (VAR_15 = 0; VAR_15 < VAR_11->cfg.num_strings; ++VAR_15) {
  u8 VAR_16[2] = { VAR_12 & 0xff, (VAR_12 >> 8) & 0xf };

  VAR_14 = FUNC_1(VAR_11->regmap,
    VAR_11->addr + VAR_9 + 2 * VAR_15,
    VAR_16, 2);
  if (VAR_14)
   return VAR_14;
 }

 VAR_14 = FUNC_2(VAR_11->regmap,
   VAR_11->addr + VAR_5,
   VAR_8, VAR_6);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_2(VAR_11->regmap,
   VAR_11->addr + VAR_5,
   VAR_8, VAR_7);
 return VAR_14;
}
