
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm3533_bl {int cb; } ;
struct backlight_device {int dummy; } ;


 struct lm3533_bl* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int *,int*) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_0)
{
 struct lm3533_bl *VAR_1 = FUNC_0(VAR_0);
 u8 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_1->cb, &VAR_2);
 if (VAR_3)
  return VAR_3;

 return VAR_2;
}
