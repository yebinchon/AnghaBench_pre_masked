
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phylink_link_state {scalar_t__ interface; int pause; scalar_t__ speed; scalar_t__ an_enabled; scalar_t__ duplex; int advertising; } ;
struct phylink_config {int dev; } ;
struct net_device {int dummy; } ;
struct mvneta_port {scalar_t__ phy_interface; scalar_t__ comphy; } ;


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
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mvneta_port*) ;
 int FUNC_2 (struct mvneta_port*,int ) ;
 int FUNC_3 (struct mvneta_port*,int ,int) ;
 struct mvneta_port* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (unsigned int) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 struct net_device* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct phylink_config *VAR_34, unsigned int VAR_35,
         const struct phylink_link_state *VAR_36)
{
 struct net_device *VAR_37 = FUNC_9(VAR_34->dev);
 struct mvneta_port *VAR_38 = FUNC_4(VAR_37);
 u32 VAR_39, VAR_40 = FUNC_2(VAR_38, VAR_19);
 u32 VAR_41, VAR_42 = FUNC_2(VAR_38, VAR_20);
 u32 VAR_43, VAR_44 = FUNC_2(VAR_38, VAR_21);
 u32 VAR_45, VAR_46 = FUNC_2(VAR_38, VAR_14);
 u32 VAR_47, VAR_48 = FUNC_2(VAR_38, VAR_13);

 VAR_39 = VAR_40 & ~VAR_2;
 VAR_41 = VAR_42 & ~(VAR_3 |
       VAR_5);
 VAR_43 = VAR_44 & ~(VAR_7);
 VAR_45 = VAR_46 & ~VAR_8;
 VAR_47 = VAR_48 & ~(VAR_24 |
        VAR_25 |
        VAR_18 |
        VAR_17 |
        VAR_12 |
        VAR_9 |
        VAR_15 |
        VAR_11 |
        VAR_16 |
        VAR_10);




 VAR_41 |= VAR_6;

 if (VAR_36->interface == VAR_28 ||
     VAR_36->interface == VAR_29 ||
     FUNC_5(VAR_36->interface))
  VAR_41 |= VAR_4;

 if (FUNC_8(VAR_36->advertising, VAR_30))
  VAR_47 |= VAR_9;
 if (VAR_36->pause & VAR_1)
  VAR_47 |= VAR_15;

 if (!FUNC_7(VAR_35)) {

  if (VAR_36->duplex)
   VAR_47 |= VAR_16;

  if (VAR_36->speed == VAR_32 || VAR_36->speed == VAR_33)
   VAR_47 |= VAR_17;
  else if (VAR_36->speed == VAR_31)
   VAR_47 |= VAR_18;
 } else if (VAR_36->interface == VAR_29) {

  VAR_41 |= VAR_3;
  VAR_45 |= VAR_8;
  VAR_47 = (VAR_47 & ~(VAR_22 |
         VAR_23)) |
    VAR_24 |
    VAR_12 |
    VAR_10;
 } else {

  VAR_39 |= VAR_2;
  VAR_45 |= VAR_8;
  VAR_47 = (VAR_47 & ~(VAR_22 |
         VAR_23)) |
    VAR_24 |
    VAR_17 |

    VAR_16;

  if (VAR_36->pause & VAR_0 && VAR_36->an_enabled)
   VAR_47 |= VAR_11;
 }




 if ((VAR_39 ^ VAR_40) & VAR_2 ||
     (VAR_41 ^ VAR_42) & VAR_3 ||
     (VAR_47 ^ VAR_48) & VAR_24) {
  FUNC_3(VAR_38, VAR_13,
       (VAR_48 & ~VAR_23) |
       VAR_22);
 }





 if (VAR_36->speed == VAR_33)
  VAR_43 |= VAR_7;

 if (VAR_38->comphy && VAR_38->phy_interface != VAR_36->interface &&
     (VAR_36->interface == VAR_29 ||
      VAR_36->interface == VAR_26 ||
      VAR_36->interface == VAR_27)) {
  VAR_38->phy_interface = VAR_36->interface;

  FUNC_0(FUNC_6(VAR_38->comphy));
  FUNC_0(FUNC_1(VAR_38));
 }

 if (VAR_39 != VAR_40)
  FUNC_3(VAR_38, VAR_19, VAR_39);
 if (VAR_41 != VAR_42)
  FUNC_3(VAR_38, VAR_20, VAR_41);
 if (VAR_43 != VAR_44)
  FUNC_3(VAR_38, VAR_21, VAR_43);
 if (VAR_45 != VAR_46)
  FUNC_3(VAR_38, VAR_14, VAR_45);
 if (VAR_47 != VAR_48)
  FUNC_3(VAR_38, VAR_13, VAR_47);

 if (VAR_42 & VAR_5) {
  while ((FUNC_2(VAR_38, VAR_20) &
   VAR_5) != 0)
   continue;
 }
}
