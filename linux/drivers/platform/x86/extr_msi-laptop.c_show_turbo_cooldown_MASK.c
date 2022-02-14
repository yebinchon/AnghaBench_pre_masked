
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
 int VAR_2 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
 struct device_attribute *VAR_4, char *VAR_5)
{

 u8 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_0, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_1(VAR_5, "%i\n", (!!(VAR_6 & VAR_2)) |
  (!!(VAR_6 & VAR_1) << 1));
}
