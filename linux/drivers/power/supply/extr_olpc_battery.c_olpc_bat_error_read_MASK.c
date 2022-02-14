
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int*,int) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 uint8_t VAR_4;
 ssize_t VAR_5;

 VAR_5 = FUNC_0(VAR_0, ((void*)0), 0, &VAR_4, 1);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_1(VAR_3, "%d\n", VAR_4);
}
