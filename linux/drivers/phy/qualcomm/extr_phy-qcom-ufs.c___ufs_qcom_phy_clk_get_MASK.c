
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct device*,char*,char const*,int) ;
 struct clk* FUNC_3 (struct device*,char const*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0,
    const char *VAR_1, struct clk **VAR_2, bool VAR_3)
{
 struct clk *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_3(VAR_0, VAR_1);
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  if (VAR_3)
   FUNC_2(VAR_0, "failed to get %s err %d", VAR_1, VAR_5);
 } else {
  *VAR_2 = VAR_4;
 }

 return VAR_5;
}
