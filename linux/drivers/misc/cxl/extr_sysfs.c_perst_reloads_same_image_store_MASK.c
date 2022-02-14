
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cxl {int perst_same_image; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (char const*,char*,int*) ;
 struct cxl* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct cxl *VAR_5 = FUNC_1(VAR_1);
 int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_3, "%i", &VAR_7);
 if ((VAR_6 != 1) || !(VAR_7 == 1 || VAR_7 == 0))
  return -VAR_0;

 VAR_5->perst_same_image = (VAR_7 == 1 ? 1 : 0);
 return VAR_4;
}
