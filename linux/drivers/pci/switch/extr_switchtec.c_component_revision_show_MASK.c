
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchtec_dev {TYPE_1__* mmio_sys_info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int component_revision; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,int) ;
 struct switchtec_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
 struct device_attribute *VAR_1, char *VAR_2)
{
 struct switchtec_dev *VAR_3 = FUNC_2(VAR_0);
 int VAR_4 = FUNC_0(&VAR_3->mmio_sys_info->component_revision);

 return FUNC_1(VAR_2, "%d\n", VAR_4);
}
