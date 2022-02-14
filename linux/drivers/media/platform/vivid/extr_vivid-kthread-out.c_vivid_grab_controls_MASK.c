
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int ctrl_tx_rgb_range; int ctrl_tx_mode; int ctrl_has_scaler_out; int ctrl_has_compose_out; int ctrl_has_crop_out; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct vivid_dev *VAR_0, bool VAR_1)
{
 FUNC_0(VAR_0->ctrl_has_crop_out, VAR_1);
 FUNC_0(VAR_0->ctrl_has_compose_out, VAR_1);
 FUNC_0(VAR_0->ctrl_has_scaler_out, VAR_1);
 FUNC_0(VAR_0->ctrl_tx_mode, VAR_1);
 FUNC_0(VAR_0->ctrl_tx_rgb_range, VAR_1);
}
