
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cxl_afu {int modes_supported; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char*) ;
 struct cxl_afu* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
        struct device_attribute *VAR_4, char *VAR_5)
{
 struct cxl_afu *VAR_6 = FUNC_1(VAR_3);
 char *VAR_7 = VAR_5, *VAR_8 = VAR_5 + VAR_2;

 if (VAR_6->modes_supported & VAR_0)
  VAR_7 += FUNC_0(VAR_7, VAR_8 - VAR_7, "dedicated_process\n");
 if (VAR_6->modes_supported & VAR_1)
  VAR_7 += FUNC_0(VAR_7, VAR_8 - VAR_7, "afu_directed\n");
 return (VAR_7 - VAR_5);
}
