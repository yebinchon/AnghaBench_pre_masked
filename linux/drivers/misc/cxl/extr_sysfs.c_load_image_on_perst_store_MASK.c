
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cxl {int perst_loads_image; int perst_select_user; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct cxl*) ;
 int FUNC_1 (char const*,char*,int) ;
 struct cxl* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct cxl *VAR_5 = FUNC_2(VAR_1);
 int VAR_6;

 if (!FUNC_1(VAR_3, "none", 4))
  VAR_5->perst_loads_image = 0;
 else if (!FUNC_1(VAR_3, "user", 4)) {
  VAR_5->perst_select_user = 1;
  VAR_5->perst_loads_image = 1;
 } else if (!FUNC_1(VAR_3, "factory", 7)) {
  VAR_5->perst_select_user = 0;
  VAR_5->perst_loads_image = 1;
 } else
  return -VAR_0;

 if ((VAR_6 = FUNC_0(VAR_5)))
  return VAR_6;

 return VAR_4;
}
