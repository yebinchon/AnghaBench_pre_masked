
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct asus_laptop {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct asus_laptop* FUNC_0 (struct device*) ;
 int FUNC_1 (struct asus_laptop*,int ,int*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3,
        char *VAR_4)
{
 struct asus_laptop *VAR_5 = FUNC_0(VAR_2);
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_1(VAR_5, VAR_0, &VAR_7);
 if (!VAR_6)
  VAR_6 = FUNC_1(VAR_5, VAR_1, &VAR_8);
 if (!VAR_6)
  return FUNC_2(VAR_4, "%d\n", 10 * VAR_7 + VAR_8);
 return VAR_6;
}
