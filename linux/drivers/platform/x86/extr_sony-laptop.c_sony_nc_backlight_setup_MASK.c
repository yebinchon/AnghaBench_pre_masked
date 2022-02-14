
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct backlight_properties {int max_brightness; int type; } ;
struct backlight_ops {int (* get_brightness ) (TYPE_2__*) ;} ;
struct TYPE_10__ {int cmd_base; int maxlvl; int offset; TYPE_2__* dev; } ;
struct TYPE_8__ {int brightness; } ;
struct TYPE_9__ {TYPE_1__ props; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 TYPE_2__* FUNC_2 (char*,int *,TYPE_3__*,struct backlight_ops const*,struct backlight_properties*) ;
 int FUNC_3 (struct backlight_properties*,int ,int) ;
 int FUNC_4 (char*) ;
 struct backlight_ops VAR_2 ;
 struct backlight_ops VAR_3 ;
 TYPE_3__ VAR_4 ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_5 ;
 int FUNC_6 (int,TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_8(void)
{
 int VAR_6 = 0;
 const struct backlight_ops *VAR_7 = ((void*)0);
 struct backlight_properties VAR_8;

 if (FUNC_5(0x12f) >= 0) {
  VAR_7 = &VAR_2;
  VAR_4.cmd_base = 0x0100;
  FUNC_6(0x12f, &VAR_4);
  VAR_6 = VAR_4.maxlvl - VAR_4.offset;

 } else if (FUNC_5(0x137) >= 0) {
  VAR_7 = &VAR_2;
  VAR_4.cmd_base = 0x0100;
  FUNC_6(0x137, &VAR_4);
  VAR_6 = VAR_4.maxlvl - VAR_4.offset;

 } else if (FUNC_5(0x143) >= 0) {
  VAR_7 = &VAR_2;
  VAR_4.cmd_base = 0x3000;
  FUNC_6(0x143, &VAR_4);
  VAR_6 = VAR_4.maxlvl - VAR_4.offset;

 } else if (FUNC_5(0x14b) >= 0) {
  VAR_7 = &VAR_2;
  VAR_4.cmd_base = 0x3000;
  FUNC_6(0x14b, &VAR_4);
  VAR_6 = VAR_4.maxlvl - VAR_4.offset;

 } else if (FUNC_5(0x14c) >= 0) {
  VAR_7 = &VAR_2;
  VAR_4.cmd_base = 0x3000;
  FUNC_6(0x14c, &VAR_4);
  VAR_6 = VAR_4.maxlvl - VAR_4.offset;

 } else if (FUNC_1(VAR_5, "GBRT")) {
  VAR_7 = &VAR_3;
  VAR_6 = VAR_1 - 1;

 } else
  return;

 FUNC_3(&VAR_8, 0, sizeof(struct backlight_properties));
 VAR_8.type = VAR_0;
 VAR_8.max_brightness = VAR_6;
 VAR_4.dev = FUNC_2("sony", ((void*)0),
            &VAR_4,
            VAR_7, &VAR_8);

 if (FUNC_0(VAR_4.dev)) {
  FUNC_4("unable to register backlight device\n");
  VAR_4.dev = ((void*)0);
 } else
  VAR_4.dev->props.brightness =
   VAR_7->get_brightness(VAR_4.dev);
}
