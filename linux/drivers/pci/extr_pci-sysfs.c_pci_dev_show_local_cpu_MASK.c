
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cpumask {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int bus; } ;


 struct cpumask* VAR_0 ;
 int FUNC_0 (int,char*,struct cpumask const*) ;
 struct cpumask* FUNC_1 (int) ;
 struct cpumask* FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;
 TYPE_1__* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1, bool VAR_2,
          struct device_attribute *VAR_3, char *VAR_4)
{
 const struct cpumask *VAR_5;





 VAR_5 = FUNC_2(FUNC_4(VAR_1)->bus);

 return FUNC_0(VAR_2, VAR_4, VAR_5);
}
