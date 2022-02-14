
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_xusb_padctl {int lock; } ;
struct tegra186_xusb_padctl {scalar_t__ bias_pad_enable; int usb2_trk_clk; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tegra_xusb_padctl*,int ) ;
 int FUNC_5 (struct tegra_xusb_padctl*,int ,int ) ;
 struct tegra186_xusb_padctl* FUNC_6 (struct tegra_xusb_padctl*) ;

__attribute__((used)) static void FUNC_7(struct tegra_xusb_padctl *VAR_2)
{
 struct tegra186_xusb_padctl *VAR_3 = FUNC_6(VAR_2);
 u32 VAR_4;

 FUNC_2(&VAR_2->lock);

 if (FUNC_0(VAR_3->bias_pad_enable == 0)) {
  FUNC_3(&VAR_2->lock);
  return;
 }

 if (--VAR_3->bias_pad_enable > 0) {
  FUNC_3(&VAR_2->lock);
  return;
 }

 VAR_4 = FUNC_4(VAR_2, VAR_1);
 VAR_4 |= VAR_0;
 FUNC_5(VAR_2, VAR_4, VAR_1);

 FUNC_1(VAR_3->usb2_trk_clk);

 FUNC_3(&VAR_2->lock);
}
