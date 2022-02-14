
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk {int dummy; } ;


 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct device*,char*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0,
      struct clk **VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = FUNC_1(VAR_1[VAR_4]);
  if (VAR_3) {
   FUNC_2(VAR_0, "Clock enable failed\n");
   goto err;
  }
 }

 return 0;
err:
 for (VAR_4--; VAR_4 >= 0; VAR_4--)
  FUNC_0(VAR_1[VAR_4]);

 return VAR_3;
}
