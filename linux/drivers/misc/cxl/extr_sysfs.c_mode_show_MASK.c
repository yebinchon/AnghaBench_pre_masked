
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cxl_afu {scalar_t__ current_mode; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char*) ;
 struct cxl_afu* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
    struct device_attribute *VAR_4,
    char *VAR_5)
{
 struct cxl_afu *VAR_6 = FUNC_1(VAR_3);

 if (VAR_6->current_mode == VAR_0)
  return FUNC_0(VAR_5, VAR_2, "dedicated_process\n");
 if (VAR_6->current_mode == VAR_1)
  return FUNC_0(VAR_5, VAR_2, "afu_directed\n");
 return FUNC_0(VAR_5, VAR_2, "none\n");
}
