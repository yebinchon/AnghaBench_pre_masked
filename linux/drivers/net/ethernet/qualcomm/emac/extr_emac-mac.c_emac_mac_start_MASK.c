
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {scalar_t__ pause; scalar_t__ asym_pause; scalar_t__ speed; scalar_t__ duplex; } ;
struct emac_adapter {scalar_t__ rx_flow_control; int tx_flow_control; int preamble; int irq_mod; scalar_t__ base; scalar_t__ csr; scalar_t__ single_pause_mode; scalar_t__ automatic; struct phy_device* phydev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
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
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_1 (struct emac_adapter*) ;
 int FUNC_2 (scalar_t__,int,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct emac_adapter *VAR_39)
{
 struct phy_device *VAR_40 = VAR_39->phydev;
 u32 VAR_41, VAR_42;


 FUNC_2(VAR_39->base + VAR_10, 0, VAR_37);


 FUNC_2(VAR_39->base + VAR_9, 0, VAR_28);


 VAR_41 = FUNC_3(VAR_39->base + VAR_8);
 VAR_42 = FUNC_3(VAR_39->csr + VAR_6);

 VAR_41 |= VAR_35 | VAR_26;





 VAR_41 &= ~(VAR_27 | VAR_36);

 if (VAR_39->automatic) {

  VAR_39->rx_flow_control = VAR_40->pause;
  VAR_39->tx_flow_control = VAR_40->pause != VAR_40->asym_pause;
 }
 VAR_41 |= VAR_39->rx_flow_control ? VAR_27 : 0;
 VAR_41 |= VAR_39->tx_flow_control ? VAR_36 : 0;


 VAR_41 &= ~VAR_33;
 if (VAR_40->speed == VAR_32) {
  VAR_41 |= FUNC_0(2);
  VAR_42 |= VAR_12;
 } else {
  VAR_41 |= FUNC_0(1);
  VAR_42 &= ~VAR_12;
 }

 if (VAR_40->duplex == VAR_3)
  VAR_41 |= VAR_13;
 else
  VAR_41 &= ~VAR_13;


 VAR_41 |= (VAR_1 | VAR_23);
 VAR_41 |= ((VAR_39->preamble << VAR_25) & VAR_24);
 VAR_41 |= VAR_0;
 VAR_41 |= VAR_11;
 VAR_41 &= ~VAR_29;
 VAR_41 &= ~(VAR_17 | VAR_38 | VAR_34 | VAR_30 | VAR_16 | VAR_22 |
   VAR_2 | VAR_31);
 VAR_41 |= VAR_39->single_pause_mode ? VAR_31 : 0;

 FUNC_4(VAR_42, VAR_39->csr + VAR_6);

 FUNC_4(VAR_41, VAR_39->base + VAR_8);





 FUNC_4(VAR_39->irq_mod, VAR_39->base + VAR_7);
 FUNC_4(VAR_18 | VAR_21 | VAR_20 |
   VAR_19, VAR_39->base + VAR_5);

 FUNC_1(VAR_39);

 FUNC_2(VAR_39->base + VAR_4,
     (VAR_15 | VAR_14), 0);
}
