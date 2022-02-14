
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipw_priv {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct ipw_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ipw_priv*,int,int ) ;
 int FUNC_2 (char const*,char*,int *) ;
 int FUNC_3 (char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
      struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 u32 VAR_4;
 struct ipw_priv *VAR_5 = FUNC_0(VAR_0);

 FUNC_2(VAR_2, "%x", &VAR_4);
 FUNC_1(VAR_5, 0x301100, VAR_4);
 return FUNC_3(VAR_2, VAR_3);
}
