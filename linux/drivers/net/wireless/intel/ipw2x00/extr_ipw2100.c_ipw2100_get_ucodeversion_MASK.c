
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ver ;
typedef int u32 ;
struct ipw2100_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ipw2100_priv*,int ,int*,int*) ;
 int FUNC_1 (char*,size_t,char*,int) ;

__attribute__((used)) static int FUNC_2(struct ipw2100_priv *VAR_2, char *VAR_3,
        size_t VAR_4)
{
 u32 VAR_5;
 u32 VAR_6 = sizeof(VAR_5);

 if (FUNC_0(VAR_2, VAR_1, &VAR_5, &VAR_6))
  return -VAR_0;
 return FUNC_1(VAR_3, VAR_4, "%08X", VAR_5);
}
