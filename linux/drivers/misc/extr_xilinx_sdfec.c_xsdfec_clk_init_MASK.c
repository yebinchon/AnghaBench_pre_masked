
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsdfec_clks {int * core_clk; int * axi_clk; int * din_clk; int * din_words_clk; int * dout_clk; int * dout_words_clk; int * ctrl_clk; int * status_clk; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,...) ;
 void* FUNC_5 (int *,char*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1,
      struct xsdfec_clks *VAR_2)
{
 int VAR_3;

 VAR_2->core_clk = FUNC_5(&VAR_1->dev, "core_clk");
 if (FUNC_0(VAR_2->core_clk)) {
  FUNC_4(&VAR_1->dev, "failed to get core_clk");
  return FUNC_1(VAR_2->core_clk);
 }

 VAR_2->axi_clk = FUNC_5(&VAR_1->dev, "s_axi_aclk");
 if (FUNC_0(VAR_2->axi_clk)) {
  FUNC_4(&VAR_1->dev, "failed to get axi_clk");
  return FUNC_1(VAR_2->axi_clk);
 }

 VAR_2->din_words_clk = FUNC_5(&VAR_1->dev, "s_axis_din_words_aclk");
 if (FUNC_0(VAR_2->din_words_clk)) {
  if (FUNC_1(VAR_2->din_words_clk) != -VAR_0) {
   VAR_3 = FUNC_1(VAR_2->din_words_clk);
   return VAR_3;
  }
  VAR_2->din_words_clk = ((void*)0);
 }

 VAR_2->din_clk = FUNC_5(&VAR_1->dev, "s_axis_din_aclk");
 if (FUNC_0(VAR_2->din_clk)) {
  if (FUNC_1(VAR_2->din_clk) != -VAR_0) {
   VAR_3 = FUNC_1(VAR_2->din_clk);
   return VAR_3;
  }
  VAR_2->din_clk = ((void*)0);
 }

 VAR_2->dout_clk = FUNC_5(&VAR_1->dev, "m_axis_dout_aclk");
 if (FUNC_0(VAR_2->dout_clk)) {
  if (FUNC_1(VAR_2->dout_clk) != -VAR_0) {
   VAR_3 = FUNC_1(VAR_2->dout_clk);
   return VAR_3;
  }
  VAR_2->dout_clk = ((void*)0);
 }

 VAR_2->dout_words_clk =
  FUNC_5(&VAR_1->dev, "s_axis_dout_words_aclk");
 if (FUNC_0(VAR_2->dout_words_clk)) {
  if (FUNC_1(VAR_2->dout_words_clk) != -VAR_0) {
   VAR_3 = FUNC_1(VAR_2->dout_words_clk);
   return VAR_3;
  }
  VAR_2->dout_words_clk = ((void*)0);
 }

 VAR_2->ctrl_clk = FUNC_5(&VAR_1->dev, "s_axis_ctrl_aclk");
 if (FUNC_0(VAR_2->ctrl_clk)) {
  if (FUNC_1(VAR_2->ctrl_clk) != -VAR_0) {
   VAR_3 = FUNC_1(VAR_2->ctrl_clk);
   return VAR_3;
  }
  VAR_2->ctrl_clk = ((void*)0);
 }

 VAR_2->status_clk = FUNC_5(&VAR_1->dev, "m_axis_status_aclk");
 if (FUNC_0(VAR_2->status_clk)) {
  if (FUNC_1(VAR_2->status_clk) != -VAR_0) {
   VAR_3 = FUNC_1(VAR_2->status_clk);
   return VAR_3;
  }
  VAR_2->status_clk = ((void*)0);
 }

 VAR_3 = FUNC_3(VAR_2->core_clk);
 if (VAR_3) {
  FUNC_4(&VAR_1->dev, "failed to enable core_clk (%d)", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_2->axi_clk);
 if (VAR_3) {
  FUNC_4(&VAR_1->dev, "failed to enable axi_clk (%d)", VAR_3);
  goto err_disable_core_clk;
 }

 VAR_3 = FUNC_3(VAR_2->din_clk);
 if (VAR_3) {
  FUNC_4(&VAR_1->dev, "failed to enable din_clk (%d)", VAR_3);
  goto err_disable_axi_clk;
 }

 VAR_3 = FUNC_3(VAR_2->din_words_clk);
 if (VAR_3) {
  FUNC_4(&VAR_1->dev, "failed to enable din_words_clk (%d)", VAR_3);
  goto err_disable_din_clk;
 }

 VAR_3 = FUNC_3(VAR_2->dout_clk);
 if (VAR_3) {
  FUNC_4(&VAR_1->dev, "failed to enable dout_clk (%d)", VAR_3);
  goto err_disable_din_words_clk;
 }

 VAR_3 = FUNC_3(VAR_2->dout_words_clk);
 if (VAR_3) {
  FUNC_4(&VAR_1->dev, "failed to enable dout_words_clk (%d)",
   VAR_3);
  goto err_disable_dout_clk;
 }

 VAR_3 = FUNC_3(VAR_2->ctrl_clk);
 if (VAR_3) {
  FUNC_4(&VAR_1->dev, "failed to enable ctrl_clk (%d)", VAR_3);
  goto err_disable_dout_words_clk;
 }

 VAR_3 = FUNC_3(VAR_2->status_clk);
 if (VAR_3) {
  FUNC_4(&VAR_1->dev, "failed to enable status_clk (%d)\n", VAR_3);
  goto err_disable_ctrl_clk;
 }

 return VAR_3;

err_disable_ctrl_clk:
 FUNC_2(VAR_2->ctrl_clk);
err_disable_dout_words_clk:
 FUNC_2(VAR_2->dout_words_clk);
err_disable_dout_clk:
 FUNC_2(VAR_2->dout_clk);
err_disable_din_words_clk:
 FUNC_2(VAR_2->din_words_clk);
err_disable_din_clk:
 FUNC_2(VAR_2->din_clk);
err_disable_axi_clk:
 FUNC_2(VAR_2->axi_clk);
err_disable_core_clk:
 FUNC_2(VAR_2->core_clk);

 return VAR_3;
}
