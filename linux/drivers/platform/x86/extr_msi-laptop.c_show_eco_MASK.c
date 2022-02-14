
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
 struct device_attribute *VAR_3, char *VAR_4)
{

 u8 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_1(VAR_4, "%i\n", !!(VAR_5 & VAR_0));
}
