
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct camss_clock {int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;

int FUNC_3(int VAR_0, struct camss_clock *VAR_1,
   struct device *VAR_2)
{
 int VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = FUNC_1(VAR_1[VAR_4].clk);
  if (VAR_3) {
   FUNC_2(VAR_2, "clock enable failed: %d\n", VAR_3);
   goto error;
  }
 }

 return 0;

error:
 for (VAR_4--; VAR_4 >= 0; VAR_4--)
  FUNC_0(VAR_1[VAR_4].clk);

 return VAR_3;
}
