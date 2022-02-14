
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ action; char* name; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (char*,scalar_t__,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
 struct device_attribute *VAR_4, char *VAR_5)
{
 int VAR_6 = 0;
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++) {
  if (VAR_2[VAR_7].action == VAR_1)
   VAR_6 += FUNC_1(VAR_5 + VAR_6, VAR_0 - VAR_6,
    "[%s] ", VAR_2[VAR_7].name);
  else
   VAR_6 += FUNC_1(VAR_5 + VAR_6, VAR_0 - VAR_6,
    "%s ", VAR_2[VAR_7].name);
 }

 VAR_6 += FUNC_1(VAR_5 + VAR_6, VAR_0 - VAR_6, "\n");

 return VAR_6;
}
