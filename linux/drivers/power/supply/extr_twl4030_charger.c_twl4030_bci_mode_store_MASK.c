
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twl4030_bci {int ac_mode; int usb_mode; TYPE_1__* ac; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 struct twl4030_bci* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (struct twl4030_bci*,int) ;
 int FUNC_3 (struct twl4030_bci*,int) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct twl4030_bci *VAR_6 = FUNC_0(VAR_2->parent);
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_1, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_2 == &VAR_6->ac->dev) {
  if (VAR_7 == 2)
   return -VAR_0;
  FUNC_2(VAR_6, 0);
  VAR_6->ac_mode = VAR_7;
  VAR_8 = FUNC_2(VAR_6, 1);
 } else {
  FUNC_3(VAR_6, 0);
  VAR_6->usb_mode = VAR_7;
  VAR_8 = FUNC_3(VAR_6, 1);
 }
 return (VAR_8 == 0) ? VAR_5 : VAR_8;
}
