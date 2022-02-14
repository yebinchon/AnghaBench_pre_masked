
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,char*) ;
 int VAR_1 ;
 char** VAR_2 ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
     struct device_attribute *VAR_4, char *VAR_5)
{
 char *VAR_6 = VAR_5;
 int VAR_7;

 for (VAR_7 = VAR_0; VAR_7 < FUNC_0(VAR_2); VAR_7++)
  if (VAR_2[VAR_7]) {
   if (VAR_7 == VAR_1)
    VAR_6 += FUNC_1(VAR_6, "[%s] ", VAR_2[VAR_7]);
   else
    VAR_6 += FUNC_1(VAR_6, "%s ", VAR_2[VAR_7]);
  }


 if (VAR_6 != VAR_5)
  *(VAR_6 - 1) = '\n';
 return (VAR_6 - VAR_5);
}
