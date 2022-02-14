
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8994_ldo {TYPE_1__* wm8994; } ;
struct regulator_dev {int dummy; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;



 unsigned int VAR_1 ;
 struct wm8994_ldo* FUNC_0 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_2,
        unsigned int VAR_3)
{
 struct wm8994_ldo *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3 > VAR_1)
  return -VAR_0;

 switch (VAR_4->wm8994->type) {
 case 128:
  return (VAR_3 * 100000) + 900000;
 case 129:
  return (VAR_3 * 100000) + 1000000;
 case 130:
  switch (VAR_3) {
  case 0:
   return -VAR_0;
  default:
   return (VAR_3 * 100000) + 950000;
  }
  break;
 default:
  return -VAR_0;
 }
}
