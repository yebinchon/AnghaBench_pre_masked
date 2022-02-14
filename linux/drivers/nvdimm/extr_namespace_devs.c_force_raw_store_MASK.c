
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int force_raw; } ;


 int FUNC_0 (char const*,int*) ;
 TYPE_1__* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
  struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 bool VAR_4;
 int VAR_5 = FUNC_0(VAR_2, &VAR_4);

 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_0)->force_raw = VAR_4;
 return VAR_3;
}
