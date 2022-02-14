
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct device*,char*,char*) ;
 struct clk* FUNC_3 (struct device*,char*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, struct clk **VAR_2,
  char **VAR_3)
{
 int VAR_4;

 if (!VAR_3)
  return 0;

 for (VAR_4 = 0; VAR_3[VAR_4]; VAR_4++) {
  VAR_2[VAR_4] = FUNC_3(VAR_1, VAR_3[VAR_4]);
  if (FUNC_0(VAR_2[VAR_4])) {
   int VAR_5 = FUNC_1(VAR_2[VAR_4]);

   if (VAR_5 != -VAR_0)
    FUNC_2(VAR_1, "Failed to get %s clock\n",
     VAR_3[VAR_4]);
   return VAR_5;
  }
 }

 return VAR_4;
}
