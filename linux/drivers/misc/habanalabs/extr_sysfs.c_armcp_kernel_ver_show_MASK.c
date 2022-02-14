
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* kernel_version; } ;
struct TYPE_4__ {TYPE_1__ armcp_info; } ;
struct hl_device {TYPE_2__ asic_prop; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct hl_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct hl_device *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, "%s", VAR_3->asic_prop.armcp_info.kernel_version);
}
