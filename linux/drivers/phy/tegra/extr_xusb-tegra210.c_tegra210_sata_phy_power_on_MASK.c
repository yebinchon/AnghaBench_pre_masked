
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_xusb_padctl {int lock; } ;
struct tegra_xusb_lane {int index; TYPE_1__* pad; } ;
struct phy {int dummy; } ;
struct TYPE_2__ {struct tegra_xusb_padctl* padctl; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tegra_xusb_padctl*,int ) ;
 int FUNC_4 (struct tegra_xusb_padctl*,int ,int ) ;
 struct tegra_xusb_lane* FUNC_5 (struct phy*) ;
 int FUNC_6 (struct tegra_xusb_padctl*,int) ;

__attribute__((used)) static int FUNC_7(struct phy *VAR_1)
{
 struct tegra_xusb_lane *VAR_2 = FUNC_5(VAR_1);
 struct tegra_xusb_padctl *VAR_3 = VAR_2->pad->padctl;
 u32 VAR_4;
 int VAR_5;

 FUNC_1(&VAR_3->lock);

 VAR_5 = FUNC_6(VAR_3, 0);
 if (VAR_5 < 0)
  goto unlock;

 VAR_4 = FUNC_3(VAR_3, VAR_0);
 VAR_4 |= FUNC_0(VAR_2->index);
 FUNC_4(VAR_3, VAR_4, VAR_0);

unlock:
 FUNC_2(&VAR_3->lock);
 return VAR_5;
}
