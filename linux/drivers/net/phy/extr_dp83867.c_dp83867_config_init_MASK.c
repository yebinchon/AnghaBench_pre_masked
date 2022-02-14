
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {scalar_t__ interface; struct dp83867_private* priv; } ;
struct dp83867_private {int fifo_depth; int rx_id_delay; int tx_id_delay; scalar_t__ io_impedance; scalar_t__ port_mirroring; int clk_output_sel; scalar_t__ set_clk_output; scalar_t__ sgmii_ref_clk_en; scalar_t__ rxctrl_strap_quirk; } ;


 int FUNC_0 (int) ;
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
 scalar_t__ VAR_16 ;
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
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*,int ,int ,int) ;
 scalar_t__ FUNC_4 (struct phy_device*) ;
 scalar_t__ FUNC_5 (struct phy_device*) ;
 int FUNC_6 (struct phy_device*,int ,int ,int,int) ;
 int FUNC_7 (struct phy_device*,int ) ;
 int FUNC_8 (struct phy_device*,int ,int ) ;
 int FUNC_9 (struct phy_device*,int ,int) ;
 int FUNC_10 (struct phy_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_11(struct phy_device *VAR_31)
{
 struct dp83867_private *VAR_32 = VAR_31->priv;
 int VAR_33, VAR_34, VAR_35;
 u16 VAR_36;

 VAR_33 = FUNC_2(VAR_31);
 if (VAR_33)
  return VAR_33;


 if (VAR_32->rxctrl_strap_quirk)
  FUNC_3(VAR_31, VAR_7, VAR_3,
       FUNC_0(7));

 if (FUNC_4(VAR_31)) {
  VAR_34 = FUNC_7(VAR_31, VAR_26);
  if (VAR_34 < 0)
   return VAR_34;
  VAR_34 &= ~VAR_13;
  VAR_34 |= (VAR_32->fifo_depth << VAR_14);
  VAR_35 = FUNC_8(VAR_31, VAR_7, VAR_24);
  if (VAR_35 & VAR_25)
   VAR_34 &= ~VAR_15;

  VAR_33 = FUNC_9(VAR_31, VAR_26, VAR_34);
  if (VAR_33)
   return VAR_33;
  VAR_34 = FUNC_8(VAR_31, VAR_7, VAR_17);

  VAR_34 &= ~(VAR_20 | VAR_19);
  if (VAR_31->interface == VAR_27)
   VAR_34 |= (VAR_20 | VAR_19);

  if (VAR_31->interface == VAR_29)
   VAR_34 |= VAR_20;

  if (VAR_31->interface == VAR_28)
   VAR_34 |= VAR_19;

  FUNC_10(VAR_31, VAR_7, VAR_17, VAR_34);

  VAR_36 = (VAR_32->rx_id_delay |
   (VAR_32->tx_id_delay << VAR_21));

  FUNC_10(VAR_31, VAR_7, VAR_18,
         VAR_36);
 }


 if (VAR_32->io_impedance >= 0)
  FUNC_6(VAR_31, VAR_7, VAR_8,
          VAR_12,
          VAR_32->io_impedance);

 if (VAR_31->interface == VAR_30) {






  VAR_33 = FUNC_6(VAR_31, VAR_7,
         VAR_0,
         VAR_1,
         0);
  if (VAR_33)
   return VAR_33;





  VAR_33 = FUNC_6(VAR_31, VAR_7,
         VAR_3,
         VAR_4,
         VAR_5);

  if (VAR_33)
   return VAR_33;

  VAR_34 = FUNC_8(VAR_31, VAR_7, VAR_22);




  if (VAR_32->sgmii_ref_clk_en)
   VAR_34 |= VAR_23;
  else
   VAR_34 &= ~VAR_23;
  FUNC_10(VAR_31, VAR_7, VAR_22, VAR_34);
 }


 if (FUNC_5(VAR_31)) {
  VAR_34 = FUNC_7(VAR_31, VAR_2);
  VAR_34 |= FUNC_0(7);
  FUNC_9(VAR_31, VAR_2, VAR_34);
 }

 if (VAR_32->port_mirroring != VAR_16)
  FUNC_1(VAR_31);


 if (VAR_32->set_clk_output) {
  u16 VAR_37 = VAR_9;

  if (VAR_32->clk_output_sel == VAR_6) {
   VAR_34 = VAR_9;
  } else {
   VAR_37 |= VAR_10;
   VAR_34 = VAR_32->clk_output_sel <<
         VAR_11;
  }

  FUNC_6(VAR_31, VAR_7, VAR_8,
          VAR_37, VAR_34);
 }

 return 0;
}
