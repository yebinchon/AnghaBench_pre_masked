
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (char const*,char*,int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
      struct device_attribute *VAR_4,
      const char *VAR_5, size_t VAR_6)
{
 int VAR_7;

 if (FUNC_1(VAR_5, "%d", &VAR_7) != 1 ||
     VAR_7 < 0 || VAR_7 > VAR_1)
  return -VAR_0;

 VAR_2 = VAR_7;
 FUNC_0();

 return VAR_6;
}
