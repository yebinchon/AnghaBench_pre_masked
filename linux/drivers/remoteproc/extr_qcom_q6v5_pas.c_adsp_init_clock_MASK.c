
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_adsp {int dev; void* aggre2_clk; scalar_t__ has_aggre2_clk; void* xo; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,char*) ;
 void* FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct qcom_adsp *VAR_1)
{
 int VAR_2;

 VAR_1->xo = FUNC_3(VAR_1->dev, "xo");
 if (FUNC_0(VAR_1->xo)) {
  VAR_2 = FUNC_1(VAR_1->xo);
  if (VAR_2 != -VAR_0)
   FUNC_2(VAR_1->dev, "failed to get xo clock");
  return VAR_2;
 }

 if (VAR_1->has_aggre2_clk) {
  VAR_1->aggre2_clk = FUNC_3(VAR_1->dev, "aggre2");
  if (FUNC_0(VAR_1->aggre2_clk)) {
   VAR_2 = FUNC_1(VAR_1->aggre2_clk);
   if (VAR_2 != -VAR_0)
    FUNC_2(VAR_1->dev,
     "failed to get aggre2 clock");
   return VAR_2;
  }
 }

 return 0;
}
