
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rave_sp {int dummy; } ;
struct backlight_properties {scalar_t__ power; int brightness; } ;
struct backlight_device {int dev; struct backlight_properties props; } ;
typedef int cmd ;


 scalar_t__ VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 struct rave_sp* FUNC_0 (int *) ;
 int FUNC_1 (struct rave_sp*,int*,int,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_3)
{
 const struct backlight_properties *VAR_4 = &VAR_3->props;
 const u8 VAR_5 =
  (VAR_4->power == VAR_0) ? VAR_4->brightness : 0;
 struct rave_sp *VAR_6 = FUNC_0(&VAR_3->dev);
 u8 VAR_7[] = {
  [0] = VAR_2,
  [1] = 0,
  [2] = VAR_5 ? VAR_1 | VAR_5 : 0,
  [3] = 0,
  [4] = 0,
 };

 return FUNC_1(VAR_6, VAR_7, sizeof(VAR_7), ((void*)0), 0);
}
