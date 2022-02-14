
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_qcom {int is_suspended; int num_clocks; int qscratch_base; int * clks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dwc3_qcom*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct dwc3_qcom *VAR_3)
{
 int VAR_4;
 int VAR_5;

 if (!VAR_3->is_suspended)
  return 0;

 FUNC_2(VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_3->num_clocks; VAR_5++) {
  VAR_4 = FUNC_1(VAR_3->clks[VAR_5]);
  if (VAR_4 < 0) {
   while (--VAR_5 >= 0)
    FUNC_0(VAR_3->clks[VAR_5]);
   return VAR_4;
  }
 }


 FUNC_3(VAR_3->qscratch_base, VAR_0,
     VAR_1 | VAR_2);

 VAR_3->is_suspended = 0;

 return 0;
}
