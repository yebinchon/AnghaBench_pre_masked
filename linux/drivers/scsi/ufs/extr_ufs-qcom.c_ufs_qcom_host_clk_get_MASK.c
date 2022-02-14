
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct device*,char*,char const*,int) ;
 struct clk* FUNC_3 (struct device*,char const*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2,
  const char *VAR_3, struct clk **VAR_4, bool VAR_5)
{
 struct clk *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_3(VAR_2, VAR_3);
 if (!FUNC_0(VAR_6)) {
  *VAR_4 = VAR_6;
  return 0;
 }

 VAR_7 = FUNC_1(VAR_6);

 if (VAR_5 && VAR_7 == -VAR_0) {
  *VAR_4 = ((void*)0);
  return 0;
 }

 if (VAR_7 != -VAR_1)
  FUNC_2(VAR_2, "failed to get %s err %d\n", VAR_3, VAR_7);

 return VAR_7;
}
