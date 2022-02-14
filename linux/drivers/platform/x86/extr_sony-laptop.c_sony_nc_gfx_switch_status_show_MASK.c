
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_4,
           struct device_attribute *VAR_5,
           char *VAR_6)
{
 int VAR_7 = FUNC_0();

 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_1(VAR_6, VAR_1, "%s\n",
     VAR_7 == VAR_2 ? "speed" :
     VAR_7 == VAR_3 ? "stamina" :
     VAR_7 == VAR_0 ? "auto" : "unknown");
}
