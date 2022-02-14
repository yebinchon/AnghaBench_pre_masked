
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kempld_device_data {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct kempld_device_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct kempld_device_data*) ;
 int FUNC_2 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct kempld_device_data *VAR_4 = FUNC_0(VAR_1);

 return FUNC_2(VAR_3, VAR_0, "%s\n", FUNC_1(VAR_4));
}
