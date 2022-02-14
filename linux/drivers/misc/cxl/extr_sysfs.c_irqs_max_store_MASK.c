
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cxl_afu {int pp_irqs; int irqs_max; TYPE_2__* guest; TYPE_1__* adapter; } ;
typedef int ssize_t ;
struct TYPE_4__ {int max_ints; } ;
struct TYPE_3__ {int user_irqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char const*,char*,int*) ;
 struct cxl_afu* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
      struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 struct cxl_afu *VAR_6 = FUNC_2(VAR_2);
 ssize_t VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_4, "%i", &VAR_8);
 if (VAR_7 != 1)
  return -VAR_1;

 if (VAR_8 < VAR_6->pp_irqs)
  return -VAR_1;

 if (FUNC_0(VAR_0)) {
  if (VAR_8 > VAR_6->adapter->user_irqs)
   return -VAR_1;
 } else {

  if (VAR_8 > VAR_6->guest->max_ints)
   return -VAR_1;
 }

 VAR_6->irqs_max = VAR_8;
 return VAR_5;
}
