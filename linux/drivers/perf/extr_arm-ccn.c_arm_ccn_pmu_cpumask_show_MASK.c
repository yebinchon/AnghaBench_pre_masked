
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int cpu; } ;
struct arm_ccn {TYPE_1__ dt; } ;
typedef int ssize_t ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 struct arm_ccn* FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 struct arm_ccn *VAR_3 = FUNC_3(FUNC_2(VAR_0));

 return FUNC_0(1, VAR_2, FUNC_1(VAR_3->dt.cpu));
}
