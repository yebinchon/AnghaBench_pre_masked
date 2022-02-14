
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct il_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (struct il_priv*) ;
 int FUNC_2 (struct il_priv*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
   char *VAR_3)
{
 struct il_priv *VAR_4 = FUNC_0(VAR_1);

 if (!FUNC_2(VAR_4))
  return -VAR_0;

 return FUNC_3(VAR_3, "%d\n", FUNC_1(VAR_4));
}
