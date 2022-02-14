
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_device {struct clk** clock; int dev; } ;
struct clk {int dummy; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (int ,char*,int ) ;
 struct clk* FUNC_4 (int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_5(struct isp_device *VAR_1)
{
 struct clk *VAR_2;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); ++VAR_3) {
  VAR_2 = FUNC_4(VAR_1->dev, VAR_0[VAR_3]);
  if (FUNC_1(VAR_2)) {
   FUNC_3(VAR_1->dev, "clk_get %s failed\n", VAR_0[VAR_3]);
   return FUNC_2(VAR_2);
  }

  VAR_1->clock[VAR_3] = VAR_2;
 }

 return 0;
}
