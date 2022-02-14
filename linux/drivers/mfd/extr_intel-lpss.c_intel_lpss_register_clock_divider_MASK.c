
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_lpss {int priv; } ;
struct clk {int dummy; } ;
typedef int name ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (int *,char*,int ,int ,int ,int,int,int,int,int ,int *) ;
 struct clk* FUNC_4 (int *,char*,int ,int ,int ,int,int ,int *) ;
 int FUNC_5 (char*,int,char*,char const*) ;

__attribute__((used)) static int FUNC_6(struct intel_lpss *VAR_1,
          const char *VAR_2,
          struct clk **VAR_3)
{
 char VAR_4[32];
 struct clk *VAR_5 = *VAR_3;

 FUNC_5(VAR_4, sizeof(VAR_4), "%s-enable", VAR_2);
 VAR_5 = FUNC_4(((void*)0), VAR_4, FUNC_2(VAR_5), 0,
    VAR_1->priv, 0, 0, ((void*)0));
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 FUNC_5(VAR_4, sizeof(VAR_4), "%s-div", VAR_2);
 VAR_5 = FUNC_3(((void*)0), VAR_4, FUNC_2(VAR_5),
           0, VAR_1->priv, 1, 15, 16, 15, 0,
           ((void*)0));
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 *VAR_3 = VAR_5;

 FUNC_5(VAR_4, sizeof(VAR_4), "%s-update", VAR_2);
 VAR_5 = FUNC_4(((void*)0), VAR_4, FUNC_2(VAR_5),
    VAR_0, VAR_1->priv, 31, 0, ((void*)0));
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 *VAR_3 = VAR_5;

 return 0;
}
