
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phylink_link_state {scalar_t__ interface; scalar_t__ speed; int pause; scalar_t__ an_enabled; scalar_t__ duplex; int advertising; } ;
struct mvpp2_port {scalar_t__ base; } ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
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
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct mvpp2_port *VAR_36, unsigned int VAR_37,
         const struct phylink_link_state *VAR_38)
{
 u32 VAR_39, VAR_40;
 u32 VAR_41, VAR_42;
 u32 VAR_43, VAR_44;
 u32 VAR_45, VAR_46;

 VAR_39 = VAR_40 = FUNC_4(VAR_36->base + VAR_14);
 VAR_41 = VAR_42 = FUNC_4(VAR_36->base + VAR_18);
 VAR_43 = VAR_44 = FUNC_4(VAR_36->base + VAR_19);
 VAR_45 = VAR_46 = FUNC_4(VAR_36->base + VAR_10);

 VAR_40 &= ~(VAR_17 | VAR_16 |
  VAR_13 | VAR_21 |
  VAR_20 | VAR_22 |
  VAR_15 | VAR_11 |
  VAR_26 | VAR_27);
 VAR_42 &= ~VAR_30;
 VAR_44 &= ~(VAR_25 | VAR_29 |
     VAR_28);
 VAR_46 &= ~(VAR_7 | VAR_9);


 if (FUNC_0(VAR_38->interface)) {
  VAR_44 |= VAR_28;
  VAR_46 &= ~VAR_5;
  VAR_46 |= VAR_8 |
    VAR_4 |
    VAR_6;
 } else if (VAR_38->interface == VAR_31) {
  VAR_44 |= VAR_28 | VAR_25;
  VAR_46 &= ~VAR_5;
  VAR_46 |= VAR_8 |
    VAR_4 |
    VAR_6;
 } else if (FUNC_1(VAR_38->interface)) {
  VAR_46 &= ~VAR_4;
  VAR_46 |= VAR_5 |
    VAR_8 |
    VAR_6;
 }


 if (FUNC_3(VAR_38->advertising, VAR_32))
  VAR_40 |= VAR_21;
 if (FUNC_3(VAR_38->advertising, VAR_0))
  VAR_40 |= VAR_20;


 if (!FUNC_2(VAR_37)) {

  if (VAR_38->duplex)
   VAR_40 |= VAR_15;

  if (VAR_38->speed == VAR_34 || VAR_38->speed == VAR_35)
   VAR_40 |= VAR_16;
  else if (VAR_38->speed == VAR_33)
   VAR_40 |= VAR_17;

  if (VAR_38->pause & VAR_3)
   VAR_46 |= VAR_9;
  if (VAR_38->pause & VAR_2)
   VAR_46 |= VAR_7;
 } else if (VAR_38->interface == VAR_31) {


  VAR_40 &= ~(VAR_23 | VAR_24);
  VAR_40 |= VAR_26 |
        VAR_13 |
        VAR_11;

  if (VAR_38->pause & VAR_3)
   VAR_46 |= VAR_9;
  if (VAR_38->pause & VAR_2)
   VAR_46 |= VAR_7;
 } else if (FUNC_0(VAR_38->interface)) {





  VAR_42 |= VAR_30;
  VAR_40 &= ~(VAR_23 | VAR_24);
  VAR_40 |= VAR_26 |
        VAR_16 |
        VAR_15;

  if (VAR_38->pause & VAR_1 && VAR_38->an_enabled) {
   VAR_40 |= VAR_22;
  } else {
   if (VAR_38->pause & VAR_3)
    VAR_46 |= VAR_9;
   if (VAR_38->pause & VAR_2)
    VAR_46 |= VAR_7;
  }
 }
 if ((VAR_41 ^ VAR_42) & VAR_30 ||
     (VAR_43 ^ VAR_44) & VAR_25 ||
     (VAR_39 ^ VAR_40) & (VAR_26 | VAR_27 | VAR_17 | VAR_16 | VAR_13 | VAR_15 | VAR_11)) {

  VAR_39 &= ~VAR_24;
  VAR_39 |= VAR_23;
  FUNC_5(VAR_39, VAR_36->base + VAR_14);




  VAR_43 |= VAR_29;
  FUNC_5(VAR_43, VAR_36->base + VAR_19);
 }

 if (VAR_41 != VAR_42)
  FUNC_5(VAR_42, VAR_36->base + VAR_18);
 if (VAR_43 != VAR_44)
  FUNC_5(VAR_44, VAR_36->base + VAR_19);
 if (VAR_45 != VAR_46)
  FUNC_5(VAR_46, VAR_36->base + VAR_10);
 if (VAR_39 != VAR_40)
  FUNC_5(VAR_40, VAR_36->base + VAR_14);

 if (VAR_43 & VAR_29) {
  while (FUNC_4(VAR_36->base + VAR_19) &
         VAR_29)
   continue;
 }
}
