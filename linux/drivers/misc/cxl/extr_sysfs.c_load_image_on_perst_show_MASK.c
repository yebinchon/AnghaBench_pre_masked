
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cxl {scalar_t__ perst_select_user; int perst_loads_image; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*) ;
 struct cxl* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct cxl *VAR_4 = FUNC_1(VAR_1);

 if (!VAR_4->perst_loads_image)
  return FUNC_0(VAR_3, VAR_0, "none\n");

 if (VAR_4->perst_select_user)
  return FUNC_0(VAR_3, VAR_0, "user\n");
 return FUNC_0(VAR_3, VAR_0, "factory\n");
}
