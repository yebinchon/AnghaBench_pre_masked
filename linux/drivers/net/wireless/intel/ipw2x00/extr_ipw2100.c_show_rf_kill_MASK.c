
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw2100_priv {int status; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct ipw2100_priv* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct ipw2100_priv*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
       char *VAR_3)
{




 struct ipw2100_priv *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = ((VAR_4->status & VAR_0) ? 0x1 : 0x0) |
     (FUNC_1(VAR_4) ? 0x2 : 0x0);
 return FUNC_2(VAR_3, "%i\n", VAR_5);
}
