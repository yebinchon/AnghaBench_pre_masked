
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3_qcom {int is_suspended; int num_clocks; int * clks; int dev; scalar_t__ qscratch_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dwc3_qcom*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct dwc3_qcom *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 if (VAR_2->is_suspended)
  return 0;

 VAR_3 = FUNC_3(VAR_2->qscratch_base + VAR_0);
 if (!(VAR_3 & VAR_1))
  FUNC_1(VAR_2->dev, "HS-PHY not in L2\n");

 for (VAR_4 = VAR_2->num_clocks - 1; VAR_4 >= 0; VAR_4--)
  FUNC_0(VAR_2->clks[VAR_4]);

 VAR_2->is_suspended = 1;
 FUNC_2(VAR_2);

 return 0;
}
