
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (char*,int ,char*,char*) ;
 int FUNC_1 () ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 ssize_t VAR_5 = 0;
 int VAR_6 = FUNC_1();

 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = FUNC_0(VAR_4, VAR_0, "%s\n", VAR_1[VAR_6]);

 return VAR_5;
}
