
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_nfc {void* core_clk; void* device_clk; void* phase_tx; int dev; void* phase_rx; int reg_clk; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,int) ;
 int FUNC_5 (int ,char*) ;
 void* FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct meson_nfc *VAR_1)
{
 int VAR_2;


 VAR_1->core_clk = FUNC_6(VAR_1->dev, "core");
 if (FUNC_0(VAR_1->core_clk)) {
  FUNC_5(VAR_1->dev, "failed to get core clock\n");
  return FUNC_1(VAR_1->core_clk);
 }

 VAR_1->device_clk = FUNC_6(VAR_1->dev, "device");
 if (FUNC_0(VAR_1->device_clk)) {
  FUNC_5(VAR_1->dev, "failed to get device clock\n");
  return FUNC_1(VAR_1->device_clk);
 }

 VAR_1->phase_tx = FUNC_6(VAR_1->dev, "tx");
 if (FUNC_0(VAR_1->phase_tx)) {
  FUNC_5(VAR_1->dev, "failed to get TX clk\n");
  return FUNC_1(VAR_1->phase_tx);
 }

 VAR_1->phase_rx = FUNC_6(VAR_1->dev, "rx");
 if (FUNC_0(VAR_1->phase_rx)) {
  FUNC_5(VAR_1->dev, "failed to get RX clk\n");
  return FUNC_1(VAR_1->phase_rx);
 }


 FUNC_7(VAR_1->reg_clk,
      0, VAR_0, VAR_0);

 VAR_2 = FUNC_3(VAR_1->core_clk);
 if (VAR_2) {
  FUNC_5(VAR_1->dev, "failed to enable core clock\n");
  return VAR_2;
 }

 VAR_2 = FUNC_3(VAR_1->device_clk);
 if (VAR_2) {
  FUNC_5(VAR_1->dev, "failed to enable device clock\n");
  goto err_device_clk;
 }

 VAR_2 = FUNC_3(VAR_1->phase_tx);
 if (VAR_2) {
  FUNC_5(VAR_1->dev, "failed to enable TX clock\n");
  goto err_phase_tx;
 }

 VAR_2 = FUNC_3(VAR_1->phase_rx);
 if (VAR_2) {
  FUNC_5(VAR_1->dev, "failed to enable RX clock\n");
  goto err_phase_rx;
 }

 VAR_2 = FUNC_4(VAR_1->device_clk, 24000000);
 if (VAR_2)
  goto err_phase_rx;

 return 0;
err_phase_rx:
 FUNC_2(VAR_1->phase_tx);
err_phase_tx:
 FUNC_2(VAR_1->device_clk);
err_device_clk:
 FUNC_2(VAR_1->core_clk);
 return VAR_2;
}
