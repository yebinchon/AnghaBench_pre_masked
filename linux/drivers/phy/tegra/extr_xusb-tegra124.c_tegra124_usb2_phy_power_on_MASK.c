
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tegra_xusb_usb2_port {int supply; } ;
struct tegra_xusb_usb2_pad {int lock; int enable; } ;
struct tegra_xusb_usb2_lane {int hs_curr_level_offset; } ;
struct tegra_xusb_padctl {int dummy; } ;
struct tegra_xusb_lane {unsigned int index; TYPE_2__* pad; } ;
struct TYPE_3__ {int hs_squelch_level; int* hs_curr_level; int hs_term_range_adj; int hs_iref_cap; } ;
struct tegra124_xusb_padctl {TYPE_1__ fuse; } ;
struct phy {int dev; } ;
struct TYPE_4__ {struct tegra_xusb_padctl* padctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (unsigned int) ;
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
 int FUNC_3 (unsigned int) ;
 int VAR_27 ;
 int FUNC_4 (int *,char*,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct tegra_xusb_padctl*,int ) ;
 int FUNC_8 (struct tegra_xusb_padctl*,int,int ) ;
 struct tegra_xusb_lane* FUNC_9 (struct phy*) ;
 int FUNC_10 (int ) ;
 struct tegra_xusb_usb2_port* FUNC_11 (struct tegra_xusb_padctl*,unsigned int) ;
 struct tegra124_xusb_padctl* FUNC_12 (struct tegra_xusb_padctl*) ;
 struct tegra_xusb_usb2_lane* FUNC_13 (struct tegra_xusb_lane*) ;
 struct tegra_xusb_usb2_pad* FUNC_14 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_15(struct phy *VAR_28)
{
 struct tegra_xusb_lane *VAR_29 = FUNC_9(VAR_28);
 struct tegra_xusb_usb2_lane *VAR_30 = FUNC_13(VAR_29);
 struct tegra_xusb_usb2_pad *VAR_31 = FUNC_14(VAR_29->pad);
 struct tegra_xusb_padctl *VAR_32 = VAR_29->pad->padctl;
 struct tegra124_xusb_padctl *VAR_33;
 struct tegra_xusb_usb2_port *VAR_34;
 unsigned int VAR_35 = VAR_29->index;
 u32 VAR_36;
 int VAR_37;

 VAR_34 = FUNC_11(VAR_32, VAR_35);
 if (!VAR_34) {
  FUNC_4(&VAR_28->dev, "no port found for USB2 lane %u\n", VAR_35);
  return -VAR_0;
 }

 VAR_33 = FUNC_12(VAR_32);

 VAR_36 = FUNC_7(VAR_32, VAR_1);
 VAR_36 &= ~((VAR_5 <<
      VAR_6) |
     (VAR_2 <<
      VAR_3));
 VAR_36 |= (VAR_33->fuse.hs_squelch_level <<
    VAR_6) |
   (VAR_4 <<
    VAR_3);
 FUNC_8(VAR_32, VAR_36, VAR_1);

 VAR_36 = FUNC_7(VAR_32, VAR_25);
 VAR_36 &= ~(VAR_27 <<
     FUNC_3(VAR_35));
 VAR_36 |= VAR_26 <<
  FUNC_3(VAR_35);
 FUNC_8(VAR_32, VAR_36, VAR_25);

 VAR_36 = FUNC_7(VAR_32, FUNC_0(VAR_35));
 VAR_36 &= ~((VAR_8 <<
      VAR_9) |
     (VAR_10 <<
      VAR_11) |
     (VAR_13 <<
      VAR_14) |
     VAR_15 |
     VAR_16 |
     VAR_17);
 VAR_36 |= (VAR_33->fuse.hs_curr_level[VAR_35] +
    VAR_30->hs_curr_level_offset) <<
  VAR_9;
 VAR_36 |= VAR_12 <<
  VAR_11;
 VAR_36 |= FUNC_2(VAR_35) <<
  VAR_14;
 FUNC_8(VAR_32, VAR_36, FUNC_0(VAR_35));

 VAR_36 = FUNC_7(VAR_32, FUNC_1(VAR_35));
 VAR_36 &= ~((VAR_23 <<
      VAR_24) |
     (VAR_18 <<
      VAR_19) |
     VAR_22 |
     VAR_20 |
     VAR_21);
 VAR_36 |= (VAR_33->fuse.hs_term_range_adj <<
    VAR_24) |
   (VAR_33->fuse.hs_iref_cap <<
    VAR_19);
 FUNC_8(VAR_32, VAR_36, FUNC_1(VAR_35));

 VAR_37 = FUNC_10(VAR_34->supply);
 if (VAR_37)
  return VAR_37;

 FUNC_5(&VAR_31->lock);

 if (VAR_31->enable++ > 0)
  goto out;

 VAR_36 = FUNC_7(VAR_32, VAR_1);
 VAR_36 &= ~VAR_7;
 FUNC_8(VAR_32, VAR_36, VAR_1);

out:
 FUNC_6(&VAR_31->lock);
 return 0;
}
