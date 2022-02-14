
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ab8500 {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ab8500* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ab8500*,int ,int ,int*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 int VAR_5;
 u8 VAR_6;
 struct ab8500 *VAR_7;

 VAR_7 = FUNC_0(VAR_2);
 VAR_5 = FUNC_1(VAR_7, VAR_0,
  VAR_1, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;
 return FUNC_2(VAR_4, "%#x\n", VAR_6);
}
