
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsim_bus_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int ,unsigned int*) ;
 int FUNC_1 (struct nsim_bus_dev*,unsigned int) ;
 struct nsim_bus_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct nsim_bus_dev *VAR_4 = FUNC_2(VAR_0);
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, 0, &VAR_5);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_1(VAR_4, VAR_5);
 return VAR_6 ? VAR_6 : VAR_3;
}
