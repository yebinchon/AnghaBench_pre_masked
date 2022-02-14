
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ccwgroup_device {scalar_t__ state; int onoff; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ccwgroup_device*) ;
 scalar_t__ FUNC_3 (struct device*,struct device_attribute*) ;
 struct ccwgroup_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_4,
          struct device_attribute *VAR_5,
          const char *VAR_6, size_t VAR_7)
{
 struct ccwgroup_device *VAR_8 = FUNC_4(VAR_4);
 int VAR_9 = 0;


 if (FUNC_0(&VAR_8->onoff, 0, 1) != 0)
  return -VAR_1;
 if (VAR_8->state != VAR_0) {
  VAR_9 = -VAR_2;
  goto out;
 }

 if (FUNC_3(VAR_4, VAR_5))
  FUNC_2(VAR_8);
 else
  VAR_9 = -VAR_3;
out:
 if (VAR_9) {

  FUNC_1(&VAR_8->onoff, 0);
  return VAR_9;
 }
 return VAR_7;
}
