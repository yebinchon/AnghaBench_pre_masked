
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int ctrl_has_scaler_cap; int ctrl_has_compose_cap; int ctrl_has_crop_cap; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct vivid_dev *VAR_0, bool VAR_1)
{
 FUNC_0(VAR_0->ctrl_has_crop_cap, VAR_1);
 FUNC_0(VAR_0->ctrl_has_compose_cap, VAR_1);
 FUNC_0(VAR_0->ctrl_has_scaler_cap, VAR_1);
}
