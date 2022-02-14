
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nps_enet_priv {int ge_mac_cfg_2_value; int ge_mac_cfg_3_value; } ;
struct net_device {int mtu; } ;
typedef int s32 ;


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
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 struct nps_enet_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nps_enet_priv*,int ,int) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_37)
{
 struct nps_enet_priv *VAR_38 = FUNC_0(VAR_37);
 u32 VAR_39 = 0, VAR_40 = 0;
 u32 *VAR_41 = &VAR_38->ge_mac_cfg_2_value;
 u32 *VAR_42 = &VAR_38->ge_mac_cfg_3_value;
 s32 VAR_43;


 *VAR_41 = (*VAR_41 & ~VAR_16)
   | VAR_29 << VAR_17;


 *VAR_41 = (*VAR_41 & ~VAR_12)
   | VAR_24 << VAR_13;


 *VAR_41 = (*VAR_41 & ~VAR_14)
   | VAR_24 << VAR_15;

 FUNC_1(VAR_38, VAR_33,
    *VAR_41);


 VAR_43 = VAR_23 + VAR_37->mtu + VAR_22;
 if (VAR_43 <= VAR_30) {
  *VAR_42 =
    (*VAR_42 & ~VAR_20)
    | VAR_43 << VAR_21;
 }


 VAR_40 |= VAR_24 << VAR_35;
 VAR_40 |= VAR_24 << VAR_36;
 FUNC_1(VAR_38, VAR_31,
    VAR_40);


 FUNC_2(VAR_37);


 VAR_39 |= VAR_24 << VAR_10;
 VAR_39 |= VAR_24 << VAR_5;
 VAR_39 |= VAR_24 << VAR_0;


 VAR_39 |=
   VAR_25 << VAR_3;
 VAR_39 |=
   VAR_27 << VAR_9;


 VAR_39 |= VAR_24 << VAR_4;
 VAR_39 |=
   VAR_28 << VAR_11;


 VAR_39 |= VAR_24 << VAR_7;
 VAR_39 |= VAR_24 << VAR_2;
 VAR_39 |=
   VAR_26 << VAR_8;
 *VAR_42 = (*VAR_42 & ~VAR_18)
   | VAR_24 << VAR_19;


 VAR_39 |= VAR_24 << VAR_1;
 VAR_39 |= VAR_24 << VAR_6;

 FUNC_1(VAR_38, VAR_34,
    *VAR_42);
 FUNC_1(VAR_38, VAR_32,
    VAR_39);
}
