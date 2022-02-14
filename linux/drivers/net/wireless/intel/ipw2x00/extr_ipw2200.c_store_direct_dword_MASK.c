
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int status; int direct_dword; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct ipw_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,char*,int *) ;
 int FUNC_2 (char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct ipw_priv *VAR_5 = FUNC_0(VAR_1);

 FUNC_1(VAR_3, "%x", &VAR_5->direct_dword);
 VAR_5->status |= VAR_0;
 return FUNC_2(VAR_3, VAR_4);
}
