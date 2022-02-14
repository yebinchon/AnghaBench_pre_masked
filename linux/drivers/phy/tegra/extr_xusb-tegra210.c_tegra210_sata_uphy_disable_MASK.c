
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_xusb_sata_pad {scalar_t__ enable; int pll; int rst; } ;
struct tegra_xusb_padctl {int lock; int sata; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 struct tegra_xusb_sata_pad* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct tegra_xusb_padctl *VAR_0)
{
 struct tegra_xusb_sata_pad *VAR_1 = FUNC_5(VAR_0->sata);

 FUNC_2(&VAR_0->lock);

 if (FUNC_0(VAR_1->enable == 0))
  goto unlock;

 if (--VAR_1->enable > 0)
  goto unlock;

 FUNC_4(VAR_1->rst);
 FUNC_1(VAR_1->pll);

unlock:
 FUNC_3(&VAR_0->lock);
}
