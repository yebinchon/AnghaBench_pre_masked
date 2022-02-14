
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cxl_afu {TYPE_1__* adapter; scalar_t__ pp_size; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ ps_size; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,scalar_t__) ;
 struct cxl_afu* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
         struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct cxl_afu *VAR_4 = FUNC_1(VAR_1);

 if (VAR_4->pp_size)
  return FUNC_0(VAR_3, VAR_0, "%llu\n", VAR_4->pp_size);
 return FUNC_0(VAR_3, VAR_0, "%llu\n", VAR_4->adapter->ps_size);
}
