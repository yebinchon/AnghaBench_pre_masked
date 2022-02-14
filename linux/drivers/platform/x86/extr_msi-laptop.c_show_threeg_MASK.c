
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ old_ec_model; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_2 ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
 struct device_attribute *VAR_4, char *VAR_5)
{

 int VAR_6;


 if (VAR_1->old_ec_model)
  return -VAR_0;

 VAR_6 = FUNC_0();
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_1(VAR_5, "%i\n", VAR_2);
}
