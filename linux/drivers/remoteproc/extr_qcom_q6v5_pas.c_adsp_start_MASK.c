
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {scalar_t__ priv; } ;
struct qcom_adsp {int xo; int aggre2_clk; int cx_supply; int px_supply; int pas_id; int dev; int q6v5; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct rproc *VAR_1)
{
 struct qcom_adsp *VAR_2 = (struct qcom_adsp *)VAR_1->priv;
 int VAR_3;

 FUNC_4(&VAR_2->q6v5);

 VAR_3 = FUNC_1(VAR_2->xo);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_2->aggre2_clk);
 if (VAR_3)
  goto disable_xo_clk;

 VAR_3 = FUNC_9(VAR_2->cx_supply);
 if (VAR_3)
  goto disable_aggre2_clk;

 VAR_3 = FUNC_9(VAR_2->px_supply);
 if (VAR_3)
  goto disable_cx_supply;

 VAR_3 = FUNC_6(VAR_2->pas_id);
 if (VAR_3) {
  FUNC_2(VAR_2->dev,
   "failed to authenticate image and release reset\n");
  goto disable_px_supply;
 }

 VAR_3 = FUNC_5(&VAR_2->q6v5, FUNC_3(5000));
 if (VAR_3 == -VAR_0) {
  FUNC_2(VAR_2->dev, "start timed out\n");
  FUNC_7(VAR_2->pas_id);
  goto disable_px_supply;
 }

 return 0;

disable_px_supply:
 FUNC_8(VAR_2->px_supply);
disable_cx_supply:
 FUNC_8(VAR_2->cx_supply);
disable_aggre2_clk:
 FUNC_0(VAR_2->aggre2_clk);
disable_xo_clk:
 FUNC_0(VAR_2->xo);

 return VAR_3;
}
