
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ci_hdrc {scalar_t__ role; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct ci_hdrc*) ;
 struct ci_hdrc* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct ci_hdrc *VAR_4 = FUNC_1(VAR_1);

 if (VAR_4->role != VAR_0)
  return FUNC_2(VAR_3, "%s\n", FUNC_0(VAR_4)->name);

 return 0;
}
