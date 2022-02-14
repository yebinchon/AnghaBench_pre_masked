
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_xusb_padctl {int dummy; } ;
struct tegra_xusb_lane {unsigned int index; TYPE_1__* pad; } ;
struct tegra_xusb_hsic_pad {int supply; int clk; } ;
struct tegra_xusb_hsic_lane {int strobe_trim; int tx_rtune_p; int rx_strobe_trim; int rx_data_trim; } ;
struct tegra210_xusb_padctl {int dummy; } ;
struct phy {int dummy; } ;
struct TYPE_2__ {struct tegra_xusb_padctl* padctl; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct tegra_xusb_padctl*,int ) ;
 int FUNC_6 (struct tegra_xusb_padctl*,int,int ) ;
 struct tegra_xusb_lane* FUNC_7 (struct phy*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct tegra_xusb_hsic_lane* FUNC_10 (struct tegra_xusb_lane*) ;
 struct tegra_xusb_hsic_pad* FUNC_11 (TYPE_1__*) ;
 struct tegra210_xusb_padctl* FUNC_12 (struct tegra_xusb_padctl*) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct phy *VAR_30)
{
 struct tegra_xusb_lane *VAR_31 = FUNC_7(VAR_30);
 struct tegra_xusb_hsic_lane *VAR_32 = FUNC_10(VAR_31);
 struct tegra_xusb_hsic_pad *VAR_33 = FUNC_11(VAR_31->pad);
 struct tegra_xusb_padctl *VAR_34 = VAR_31->pad->padctl;
 struct tegra210_xusb_padctl *VAR_35;
 unsigned int VAR_36 = VAR_31->index;
 u32 VAR_37;
 int VAR_38;

 VAR_35 = FUNC_12(VAR_34);

 VAR_38 = FUNC_9(VAR_33->supply);
 if (VAR_38)
  return VAR_38;

 FUNC_6(VAR_34, VAR_32->strobe_trim,
        VAR_29);

 VAR_37 = FUNC_5(VAR_34, FUNC_1(VAR_36));
 VAR_37 &= ~(VAR_15 <<
     VAR_16);
 VAR_37 |= (VAR_32->tx_rtune_p <<
    VAR_16);
 FUNC_6(VAR_34, VAR_37, FUNC_1(VAR_36));

 VAR_37 = FUNC_5(VAR_34, FUNC_2(VAR_36));
 VAR_37 &= ~((VAR_19 <<
      VAR_20) |
     (VAR_17 <<
      VAR_18));
 VAR_37 |= (VAR_32->rx_strobe_trim <<
    VAR_20) |
   (VAR_32->rx_data_trim <<
    VAR_18);
 FUNC_6(VAR_34, VAR_37, FUNC_2(VAR_36));

 VAR_37 = FUNC_5(VAR_34, FUNC_0(VAR_36));
 VAR_37 &= ~(VAR_12 |
     VAR_13 |
     VAR_14 |
     VAR_0 |
     VAR_1 |
     VAR_2 |
     VAR_6 |
     VAR_7 |
     VAR_8 |
     VAR_3 |
     VAR_4 |
     VAR_5);
 VAR_37 |= VAR_9 |
   VAR_10 |
   VAR_11;
 FUNC_6(VAR_34, VAR_37, FUNC_0(VAR_36));

 VAR_38 = FUNC_4(VAR_33->clk);
 if (VAR_38)
  goto disable;

 VAR_37 = FUNC_5(VAR_34, VAR_21);
 VAR_37 &= ~((VAR_26 <<
      VAR_27) |
     (VAR_23 <<
      VAR_24));
 VAR_37 |= (VAR_28 <<
    VAR_27) |
   (VAR_25 <<
    VAR_24);
 FUNC_6(VAR_34, VAR_37, VAR_21);

 FUNC_13(1);

 VAR_37 = FUNC_5(VAR_34, VAR_21);
 VAR_37 &= ~VAR_22;
 FUNC_6(VAR_34, VAR_37, VAR_21);

 FUNC_13(50);

 FUNC_3(VAR_33->clk);

 return 0;

disable:
 FUNC_8(VAR_33->supply);
 return VAR_38;
}
