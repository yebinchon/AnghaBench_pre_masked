
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {scalar_t__ disabled; int in_reset; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (int *) ;
 struct hl_device* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct hl_device *VAR_3 = FUNC_1(VAR_0);
 char *VAR_4;

 if (FUNC_0(&VAR_3->in_reset))
  VAR_4 = "In reset";
 else if (VAR_3->disabled)
  VAR_4 = "Malfunction";
 else
  VAR_4 = "Operational";

 return FUNC_2(VAR_2, "%s\n", VAR_4);
}
