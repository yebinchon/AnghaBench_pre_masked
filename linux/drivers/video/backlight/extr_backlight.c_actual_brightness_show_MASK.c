
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int brightness; } ;
struct backlight_device {int ops_lock; TYPE_1__ props; TYPE_2__* ops; } ;
typedef int ssize_t ;
struct TYPE_4__ {int (* get_brightness ) (struct backlight_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (struct backlight_device*) ;
 int FUNC_4 (struct backlight_device*) ;
 struct backlight_device* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4 = -VAR_0;
 struct backlight_device *VAR_5 = FUNC_5(VAR_1);

 FUNC_0(&VAR_5->ops_lock);
 if (VAR_5->ops && VAR_5->ops->get_brightness)
  VAR_4 = FUNC_2(VAR_3, "%d\n", VAR_5->ops->get_brightness(VAR_5));
 else
  VAR_4 = FUNC_2(VAR_3, "%d\n", VAR_5->props.brightness);
 FUNC_1(&VAR_5->ops_lock);

 return VAR_4;
}
