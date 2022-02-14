
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cpumask {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int,char*,struct cpumask const*) ;
 struct cpumask* FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 const struct cpumask *VAR_3 = FUNC_1(FUNC_2(VAR_0));

 return FUNC_0(0, VAR_2, VAR_3);
}
