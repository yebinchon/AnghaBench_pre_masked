
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int driver; } ;
struct ccwgroup_device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct ccwgroup_device*) ;
 int FUNC_1 (struct ccwgroup_device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (char const*,int ,unsigned long*) ;
 struct ccwgroup_device* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct ccwgroup_device *VAR_5 = FUNC_5(VAR_1);
 unsigned long VAR_6;
 int VAR_7;

 FUNC_2(VAR_1);
 if (!VAR_1->driver) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_4(VAR_3, 0, &VAR_6);
 if (VAR_7)
  goto out;

 if (VAR_6 == 1)
  VAR_7 = FUNC_1(VAR_5);
 else if (VAR_6 == 0)
  VAR_7 = FUNC_0(VAR_5);
 else
  VAR_7 = -VAR_0;
out:
 FUNC_3(VAR_1);
 return (VAR_7 == 0) ? VAR_4 : VAR_7;
}
