
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lcd_device {int ops_lock; TYPE_1__* ops; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* set_contrast ) (struct lcd_device*,unsigned long) ;} ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,unsigned long*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,unsigned long) ;
 int FUNC_4 (struct lcd_device*,unsigned long) ;
 struct lcd_device* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 int VAR_5;
 struct lcd_device *VAR_6 = FUNC_5(VAR_1);
 unsigned long VAR_7;

 VAR_5 = FUNC_0(VAR_3, 0, &VAR_7);
 if (VAR_5)
  return VAR_5;

 VAR_5 = -VAR_0;

 FUNC_1(&VAR_6->ops_lock);
 if (VAR_6->ops && VAR_6->ops->set_contrast) {
  FUNC_3("set contrast to %lu\n", VAR_7);
  VAR_6->ops->set_contrast(VAR_6, VAR_7);
  VAR_5 = VAR_4;
 }
 FUNC_2(&VAR_6->ops_lock);

 return VAR_5;
}
