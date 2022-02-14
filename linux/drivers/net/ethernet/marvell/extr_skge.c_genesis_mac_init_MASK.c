
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct skge_port {scalar_t__ duplex; } ;
struct skge_hw {int phy_type; int ports; struct net_device** dev; } ;
struct net_device {scalar_t__ mtu; int const* dev_addr; } ;


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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
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


 int FUNC_0 (int,int ) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_1 (int) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int FUNC_2 (struct skge_hw*,int) ;
 int FUNC_3 (struct skge_port*) ;
 struct skge_port* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (struct skge_hw*,int ) ;
 int FUNC_7 (struct skge_hw*,int ) ;
 int FUNC_8 (struct skge_hw*,int ,int) ;
 int FUNC_9 (struct skge_hw*,int ,int) ;
 int FUNC_10 (struct skge_hw*,int ,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct skge_hw*,int,int ,int const*) ;
 int FUNC_13 (struct skge_port*) ;
 int FUNC_14 (struct skge_hw*,int,int ,int) ;
 int FUNC_15 (struct skge_hw*,int,int ,int ) ;

__attribute__((used)) static void FUNC_16(struct skge_hw *VAR_52, int VAR_53)
{
 struct net_device *VAR_54 = VAR_52->dev[VAR_53];
 struct skge_port *VAR_55 = FUNC_4(VAR_54);
 int VAR_56 = VAR_52->dev[VAR_53]->mtu > VAR_12;
 int VAR_57;
 u32 VAR_58;
 static const u8 VAR_59[6] = { 0 };

 for (VAR_57 = 0; VAR_57 < 10; VAR_57++) {
  FUNC_8(VAR_52, FUNC_0(VAR_53, VAR_29),
        VAR_23);
  if (FUNC_6(VAR_52, FUNC_0(VAR_53, VAR_29)) & VAR_23)
   goto reset_ok;
  FUNC_11(1);
 }

 FUNC_5(VAR_54, "genesis reset failed\n");

 reset_ok:

 FUNC_8(VAR_52, FUNC_0(VAR_53, VAR_29), VAR_18);






 if (VAR_52->phy_type != 128) {

  VAR_58 = FUNC_7(VAR_52, VAR_0);
  if (VAR_53 == 0)
   VAR_58 |= VAR_13|VAR_15;
  else
   VAR_58 |= VAR_14|VAR_16;

  FUNC_9(VAR_52, VAR_0, VAR_58);


  FUNC_14(VAR_52, VAR_53, VAR_34, VAR_35);
 }


 switch (VAR_52->phy_type) {
 case 128:
  FUNC_13(VAR_55);
  break;
 case 129:
  FUNC_3(VAR_55);
  FUNC_2(VAR_52, VAR_53);
 }


 FUNC_12(VAR_52, VAR_53, VAR_44, VAR_54->dev_addr);


 for (VAR_57 = 1; VAR_57 < 16; VAR_57++)
  FUNC_12(VAR_52, VAR_53, FUNC_1(VAR_57), VAR_59);


 FUNC_14(VAR_52, VAR_53, VAR_47,
   VAR_45 | VAR_46);

 FUNC_14(VAR_52, VAR_53, VAR_47,
   VAR_45 | VAR_46);


 FUNC_14(VAR_52, VAR_53, VAR_41, 1450);


 VAR_58 = VAR_42 | VAR_43;
 if (VAR_56)
  VAR_58 |= VAR_37;

 if (VAR_55->duplex == VAR_11) {





  VAR_58 |= VAR_39;
 }
 FUNC_14(VAR_52, VAR_53, VAR_38, VAR_58);


 FUNC_14(VAR_52, VAR_53, VAR_49, VAR_48);


 if (VAR_52->ports > 1 && VAR_56)
  FUNC_14(VAR_52, VAR_53, VAR_51, 1020);
 else
  FUNC_14(VAR_52, VAR_53, VAR_51, 512);
 FUNC_15(VAR_52, VAR_53, VAR_36, VAR_33);







 FUNC_15(VAR_52, VAR_53, VAR_40, VAR_31);






 FUNC_15(VAR_52, VAR_53, VAR_50, VAR_32);


 FUNC_8(VAR_52, VAR_9, VAR_17);


 FUNC_10(VAR_52, VAR_5, 72);
 FUNC_10(VAR_52, VAR_6, 72);
 FUNC_10(VAR_52, VAR_7, 72);
 FUNC_10(VAR_52, VAR_8, 72);

 FUNC_10(VAR_52, VAR_1, 0);
 FUNC_10(VAR_52, VAR_2, 0);
 FUNC_10(VAR_52, VAR_3, 0);
 FUNC_10(VAR_52, VAR_4, 0);


 FUNC_10(VAR_52, FUNC_0(VAR_53, VAR_28), VAR_22);
 FUNC_8(VAR_52, FUNC_0(VAR_53, VAR_27), VAR_21);
 FUNC_10(VAR_52, FUNC_0(VAR_53, VAR_28), VAR_20);


 FUNC_10(VAR_52, FUNC_0(VAR_53, VAR_30), VAR_22);
 FUNC_8(VAR_52, FUNC_0(VAR_53, VAR_29), VAR_24);
 FUNC_10(VAR_52, FUNC_0(VAR_53, VAR_30), VAR_20);

 if (VAR_56) {

  FUNC_8(VAR_52, FUNC_0(VAR_53, VAR_27), VAR_19);
 } else {

  FUNC_8(VAR_52, VAR_10,
        (VAR_53 == 0) ? VAR_25 : VAR_26);
 }
}
