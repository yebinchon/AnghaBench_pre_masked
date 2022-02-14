
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ccwgroup_device {scalar_t__ state; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,int) ;
 struct ccwgroup_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
        struct device_attribute *VAR_3,
        char *VAR_4)
{
 struct ccwgroup_device *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;

 VAR_6 = (VAR_5->state == VAR_0) ? 1 : 0;

 return FUNC_0(VAR_4, VAR_1, "%d\n", VAR_6);
}
