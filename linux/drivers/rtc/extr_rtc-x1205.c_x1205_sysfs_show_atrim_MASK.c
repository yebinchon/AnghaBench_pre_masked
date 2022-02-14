
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int,int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_2(FUNC_1(VAR_0), &VAR_4);
 if (VAR_3)
  return VAR_3;

 return FUNC_0(VAR_2, "%d.%02d pF\n", VAR_4 / 1000, VAR_4 % 1000);
}
