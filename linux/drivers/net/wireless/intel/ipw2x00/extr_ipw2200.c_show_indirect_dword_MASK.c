
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipw_priv {int status; int indirect_dword; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct ipw_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ipw_priv*,int ) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 u32 VAR_4 = 0;
 struct ipw_priv *VAR_5 = FUNC_0(VAR_1);

 if (VAR_5->status & VAR_0)
  VAR_4 = FUNC_1(VAR_5, VAR_5->indirect_dword);
 else
  VAR_4 = 0;

 return FUNC_2(VAR_3, "0x%08x\n", VAR_4);
}
