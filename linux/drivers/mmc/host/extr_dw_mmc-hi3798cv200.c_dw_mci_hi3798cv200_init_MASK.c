
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hi3798cv200_priv {void* sample_clk; void* drive_clk; } ;
struct dw_mci {struct hi3798cv200_priv* priv; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,char*) ;
 void* FUNC_5 (int ,char*) ;
 struct hi3798cv200_priv* FUNC_6 (int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct dw_mci *VAR_2)
{
 struct hi3798cv200_priv *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_6(VAR_2->dev, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->sample_clk = FUNC_5(VAR_2->dev, "ciu-sample");
 if (FUNC_0(VAR_3->sample_clk)) {
  FUNC_4(VAR_2->dev, "failed to get ciu-sample clock\n");
  return FUNC_1(VAR_3->sample_clk);
 }

 VAR_3->drive_clk = FUNC_5(VAR_2->dev, "ciu-drive");
 if (FUNC_0(VAR_3->drive_clk)) {
  FUNC_4(VAR_2->dev, "failed to get ciu-drive clock\n");
  return FUNC_1(VAR_3->drive_clk);
 }

 VAR_4 = FUNC_3(VAR_3->sample_clk);
 if (VAR_4) {
  FUNC_4(VAR_2->dev, "failed to enable ciu-sample clock\n");
  return VAR_4;
 }

 VAR_4 = FUNC_3(VAR_3->drive_clk);
 if (VAR_4) {
  FUNC_4(VAR_2->dev, "failed to enable ciu-drive clock\n");
  goto disable_sample_clk;
 }

 VAR_2->priv = VAR_3;
 return 0;

disable_sample_clk:
 FUNC_2(VAR_3->sample_clk);
 return VAR_4;
}
