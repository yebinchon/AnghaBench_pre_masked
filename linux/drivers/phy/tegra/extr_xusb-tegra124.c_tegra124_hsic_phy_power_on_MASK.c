
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_xusb_padctl {int dummy; } ;
struct tegra_xusb_lane {unsigned int index; TYPE_1__* pad; } ;
struct tegra_xusb_hsic_pad {int supply; } ;
struct tegra_xusb_hsic_lane {int strobe_trim; int tx_rtune_n; int tx_rtune_p; int tx_rslew_n; int tx_rslew_p; int rx_strobe_trim; int rx_data_trim; scalar_t__ auto_term; } ;
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
 int FUNC_3 (struct tegra_xusb_padctl*,int ) ;
 int FUNC_4 (struct tegra_xusb_padctl*,int,int ) ;
 struct tegra_xusb_lane* FUNC_5 (struct phy*) ;
 int FUNC_6 (int ) ;
 struct tegra_xusb_hsic_lane* FUNC_7 (struct tegra_xusb_lane*) ;
 struct tegra_xusb_hsic_pad* FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(struct phy *VAR_22)
{
 struct tegra_xusb_lane *VAR_23 = FUNC_5(VAR_22);
 struct tegra_xusb_hsic_lane *VAR_24 = FUNC_7(VAR_23);
 struct tegra_xusb_hsic_pad *VAR_25 = FUNC_8(VAR_23->pad);
 struct tegra_xusb_padctl *VAR_26 = VAR_23->pad->padctl;
 unsigned int VAR_27 = VAR_23->index;
 u32 VAR_28;
 int VAR_29;

 VAR_29 = FUNC_6(VAR_25->supply);
 if (VAR_29)
  return VAR_29;

 FUNC_4(VAR_26, VAR_24->strobe_trim,
        VAR_21);

 VAR_28 = FUNC_3(VAR_26, FUNC_1(VAR_27));

 if (VAR_24->auto_term)
  VAR_28 |= VAR_8;
 else
  VAR_28 &= ~VAR_8;

 FUNC_4(VAR_26, VAR_28, FUNC_1(VAR_27));

 VAR_28 = FUNC_3(VAR_26, FUNC_0(VAR_27));
 VAR_28 &= ~((VAR_4 <<
      VAR_5) |
     (VAR_6 <<
      VAR_7) |
     (VAR_0 <<
      VAR_1) |
     (VAR_2 <<
      VAR_3));
 VAR_28 |= (VAR_24->tx_rtune_n <<
    VAR_5) |
  (VAR_24->tx_rtune_p <<
    VAR_7) |
  (VAR_24->tx_rslew_n <<
   VAR_1) |
  (VAR_24->tx_rslew_p <<
   VAR_3);
 FUNC_4(VAR_26, VAR_28, FUNC_0(VAR_27));

 VAR_28 = FUNC_3(VAR_26, FUNC_2(VAR_27));
 VAR_28 &= ~((VAR_19 <<
      VAR_20) |
     (VAR_17 <<
      VAR_18));
 VAR_28 |= (VAR_24->rx_strobe_trim <<
    VAR_20) |
  (VAR_24->rx_data_trim <<
   VAR_18);
 FUNC_4(VAR_26, VAR_28, FUNC_2(VAR_27));

 VAR_28 = FUNC_3(VAR_26, FUNC_1(VAR_27));
 VAR_28 &= ~(VAR_14 |
     VAR_15 |
     VAR_9 |
     VAR_12 |
     VAR_10 |
     VAR_11);
 VAR_28 |= VAR_13 |
   VAR_16;
 FUNC_4(VAR_26, VAR_28, FUNC_1(VAR_27));

 return 0;
}
