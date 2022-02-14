
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int major; int minor; int config; } ;
struct timberdale_device {TYPE_1__ fw; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct timberdale_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
 char *VAR_2)
{
 struct timberdale_device *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, "%d.%d.%d\n", VAR_3->fw.major, VAR_3->fw.minor,
  VAR_3->fw.config);
}
