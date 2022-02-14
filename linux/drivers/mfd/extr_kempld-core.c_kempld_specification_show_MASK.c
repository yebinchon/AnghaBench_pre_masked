
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int spec_minor; int spec_major; } ;
struct kempld_device_data {TYPE_1__ info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct kempld_device_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct kempld_device_data *VAR_4 = FUNC_0(VAR_1);

 return FUNC_1(VAR_3, VAR_0, "%d.%d\n", VAR_4->info.spec_major,
         VAR_4->info.spec_minor);
}
