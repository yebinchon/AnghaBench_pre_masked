
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int tx_power_user_lmt; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct il_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (struct il_priv*) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct il_priv *VAR_3 = FUNC_0(VAR_0);

 if (!FUNC_1(VAR_3))
  return FUNC_2(VAR_2, "off\n");
 else
  return FUNC_2(VAR_2, "%d\n", VAR_3->tx_power_user_lmt);
}
