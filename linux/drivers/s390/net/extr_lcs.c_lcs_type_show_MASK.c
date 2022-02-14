
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ccwgroup_device {TYPE_2__** cdev; } ;
typedef int ssize_t ;
struct TYPE_3__ {size_t driver_info; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (char*,char*,char*) ;
 struct ccwgroup_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_2, struct device_attribute *VAR_3, char *VAR_4)
{
 struct ccwgroup_device *VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 if (!VAR_5)
  return -VAR_0;

 return FUNC_0(VAR_4, "%s\n", VAR_1[VAR_5->cdev[0]->id.driver_info]);
}
