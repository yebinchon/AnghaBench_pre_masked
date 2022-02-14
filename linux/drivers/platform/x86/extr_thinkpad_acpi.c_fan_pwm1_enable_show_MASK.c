
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
 int FUNC_0 (int*) ;
 int FUNC_1 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
        struct device_attribute *VAR_4,
        char *VAR_5)
{
 int VAR_6, VAR_7;
 u8 VAR_8;

 VAR_6 = FUNC_0(&VAR_8);
 if (VAR_6)
  return VAR_6;

 if (VAR_8 & VAR_2) {
  VAR_7 = 0;
 } else if (VAR_8 & VAR_1) {
  VAR_7 = 2;
 } else
  VAR_7 = 1;

 return FUNC_1(VAR_5, VAR_0, "%d\n", VAR_7);
}
