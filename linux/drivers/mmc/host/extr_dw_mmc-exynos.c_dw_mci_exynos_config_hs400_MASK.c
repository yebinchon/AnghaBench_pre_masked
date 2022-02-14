
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dw_mci_exynos_priv_data {scalar_t__ ctrl_type; scalar_t__ saved_dqs_en; scalar_t__ saved_strobe_ctrl; int dqs_delay; } ;
struct dw_mci {int dev; struct dw_mci_exynos_priv_data* priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dw_mci*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct dw_mci *VAR_6, u32 VAR_7)
{
 struct dw_mci_exynos_priv_data *VAR_8 = VAR_6->priv;
 u32 VAR_9, VAR_10;





 if (VAR_8->ctrl_type < VAR_1) {
  if (VAR_7 == VAR_4)
   FUNC_1(VAR_6->dev,
     "cannot configure HS400, unsupported chipset\n");
  return;
 }

 VAR_9 = VAR_8->saved_dqs_en;
 VAR_10 = VAR_8->saved_strobe_ctrl;

 if (VAR_7 == VAR_4) {
  VAR_9 |= VAR_0;
  VAR_10 = FUNC_0(VAR_10, VAR_8->dqs_delay);
 } else if (VAR_7 == VAR_5) {
  VAR_9 &= 0xffffff00;
 } else {
  VAR_9 &= ~VAR_0;
 }

 FUNC_2(VAR_6, VAR_3, VAR_9);
 FUNC_2(VAR_6, VAR_2, VAR_10);
}
