
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_xusb_padctl {int lock; int enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tegra_xusb_padctl*,int ) ;
 int FUNC_3 (struct tegra_xusb_padctl*,int ,int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct tegra_xusb_padctl *VAR_4)
{
 u32 VAR_5;

 FUNC_0(&VAR_4->lock);

 if (VAR_4->enable++ > 0)
  goto out;

 VAR_5 = FUNC_2(VAR_4, VAR_0);
 VAR_5 &= ~VAR_1;
 FUNC_3(VAR_4, VAR_5, VAR_0);

 FUNC_4(100, 200);

 VAR_5 = FUNC_2(VAR_4, VAR_0);
 VAR_5 &= ~VAR_2;
 FUNC_3(VAR_4, VAR_5, VAR_0);

 FUNC_4(100, 200);

 VAR_5 = FUNC_2(VAR_4, VAR_0);
 VAR_5 &= ~VAR_3;
 FUNC_3(VAR_4, VAR_5, VAR_0);

out:
 FUNC_1(&VAR_4->lock);
 return 0;
}
