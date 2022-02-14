
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lcd_device {int ops_lock; TYPE_1__* ops; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* get_power ) (struct lcd_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (struct lcd_device*) ;
 int FUNC_4 (struct lcd_device*) ;
 struct lcd_device* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1, struct device_attribute *VAR_2,
  char *VAR_3)
{
 int VAR_4;
 struct lcd_device *VAR_5 = FUNC_5(VAR_1);

 FUNC_0(&VAR_5->ops_lock);
 if (VAR_5->ops && VAR_5->ops->get_power)
  VAR_4 = FUNC_2(VAR_3, "%d\n", VAR_5->ops->get_power(VAR_5));
 else
  VAR_4 = -VAR_0;
 FUNC_1(&VAR_5->ops_lock);

 return VAR_4;
}
