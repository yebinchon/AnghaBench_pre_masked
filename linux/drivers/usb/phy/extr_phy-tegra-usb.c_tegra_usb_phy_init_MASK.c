
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct tegra_usb_phy {int pll_u; scalar_t__ is_ulpi_phy; TYPE_1__ u_phy; int vbus; TYPE_2__* freq; } ;
struct TYPE_5__ {unsigned long freq; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_10 (struct tegra_usb_phy*) ;
 int FUNC_11 (struct tegra_usb_phy*) ;

__attribute__((used)) static int FUNC_12(struct tegra_usb_phy *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_2->pll_u = FUNC_8(VAR_2->u_phy.dev, "pll_u");
 if (FUNC_1(VAR_2->pll_u)) {
  VAR_5 = FUNC_2(VAR_2->pll_u);
  FUNC_7(VAR_2->u_phy.dev,
   "Failed to get pll_u clock: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_6(VAR_2->pll_u);
 if (VAR_5)
  return VAR_5;

 VAR_3 = FUNC_5(FUNC_4(VAR_2->pll_u));
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  if (VAR_1[VAR_4].freq == VAR_3) {
   VAR_2->freq = &VAR_1[VAR_4];
   break;
  }
 }
 if (!VAR_2->freq) {
  FUNC_7(VAR_2->u_phy.dev, "Invalid pll_u parent rate %ld\n",
   VAR_3);
  VAR_5 = -VAR_0;
  goto fail;
 }

 if (!FUNC_1(VAR_2->vbus)) {
  VAR_5 = FUNC_9(VAR_2->vbus);
  if (VAR_5) {
   FUNC_7(VAR_2->u_phy.dev,
    "Failed to enable USB VBUS regulator: %d\n",
    VAR_5);
   goto fail;
  }
 }

 if (VAR_2->is_ulpi_phy)
  VAR_5 = FUNC_10(VAR_2);
 else
  VAR_5 = FUNC_11(VAR_2);
 if (VAR_5 < 0)
  goto fail;

 return 0;

fail:
 FUNC_3(VAR_2->pll_u);
 return VAR_5;
}
