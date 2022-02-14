
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int config; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 struct ipw_priv* FUNC_0 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_1, struct device_attribute *VAR_2,
          const char *VAR_3, size_t VAR_4)
{
 struct ipw_priv *VAR_5 = FUNC_0(VAR_1);
 if (VAR_3[0] == '1')
  VAR_5->config |= VAR_0;
 else
  VAR_5->config &= ~VAR_0;

 return VAR_4;
}
