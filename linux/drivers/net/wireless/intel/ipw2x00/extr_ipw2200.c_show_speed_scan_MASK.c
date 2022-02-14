
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int config; scalar_t__* speed_scan; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 struct ipw_priv* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
          char *VAR_3)
{
 struct ipw_priv *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = 0, VAR_6 = 0;
 if (VAR_4->config & VAR_0) {
  while (VAR_4->speed_scan[VAR_5] != 0)
   VAR_6 += FUNC_1(&VAR_3[VAR_6], "%d ",
           VAR_4->speed_scan[VAR_5++]);
  return VAR_6 + FUNC_1(&VAR_3[VAR_6], "\n");
 }

 return FUNC_1(VAR_3, "0\n");
}
