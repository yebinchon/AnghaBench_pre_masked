
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int config; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 struct ipw_priv* FUNC_2 (struct device*) ;
 int FUNC_3 (struct ipw_priv*) ;
 int FUNC_4 (struct ipw_priv*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct ipw_priv *VAR_5 = FUNC_2(VAR_1);

 FUNC_0("enter\n");

 if (VAR_4 == 0)
  return 0;

 if (*VAR_3 == 0) {
  FUNC_1("Disabling LED control.\n");
  VAR_5->config |= VAR_0;
  FUNC_4(VAR_5);
 } else {
  FUNC_1("Enabling LED control.\n");
  VAR_5->config &= ~VAR_0;
  FUNC_3(VAR_5);
 }

 FUNC_0("exit\n");
 return VAR_4;
}
