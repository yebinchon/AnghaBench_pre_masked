
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp855x {scalar_t__ mode; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct lp855x* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
         struct device_attribute *VAR_4, char *VAR_5)
{
 struct lp855x *VAR_6 = FUNC_0(VAR_3);
 char *VAR_7 = ((void*)0);

 if (VAR_6->mode == VAR_1)
  VAR_7 = "pwm based";
 else if (VAR_6->mode == VAR_2)
  VAR_7 = "register based";

 return FUNC_1(VAR_5, VAR_0, "%s\n", VAR_7);
}
