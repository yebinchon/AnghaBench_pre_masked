
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 scalar_t__ FUNC_1 (char const*,int ,unsigned int*) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 if (FUNC_1(VAR_4, 0, &VAR_6) || VAR_6 > 1)
  return -VAR_1;

 VAR_7 = FUNC_0(FUNC_2(VAR_2), VAR_0, VAR_6);

 return VAR_7 ? : VAR_5;
}
