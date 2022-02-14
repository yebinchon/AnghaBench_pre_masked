
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_xusb_padctl {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct tegra_xusb_padctl*,int ) ;
 int FUNC_2 (struct tegra_xusb_padctl*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct tegra_xusb_padctl *VAR_2,
      unsigned int VAR_3, bool VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_2, FUNC_0(VAR_3));

 if (VAR_4)
  VAR_5 |= VAR_0 |
    VAR_1;
 else
  VAR_5 &= ~(VAR_0 |
      VAR_1);

 FUNC_2(VAR_2, VAR_5, FUNC_0(VAR_3));

 return 0;
}
