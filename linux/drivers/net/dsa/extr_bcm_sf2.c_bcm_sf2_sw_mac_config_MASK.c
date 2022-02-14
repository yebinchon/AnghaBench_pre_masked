
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phylink_link_state {int interface; int pause; int speed; scalar_t__ duplex; scalar_t__ link; } ;
struct dsa_switch {int dummy; } ;
struct bcm_sf2_priv {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
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
 int FUNC_2 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;


 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 struct bcm_sf2_priv* FUNC_3 (struct dsa_switch*) ;
 int FUNC_4 (struct bcm_sf2_priv*,int ) ;
 int FUNC_5 (struct bcm_sf2_priv*,int,int) ;
 int FUNC_6 (struct bcm_sf2_priv*,int ) ;
 int FUNC_7 (struct bcm_sf2_priv*,int,int ) ;

__attribute__((used)) static void FUNC_8(struct dsa_switch *VAR_19, int VAR_20,
      unsigned int VAR_21,
      const struct phylink_link_state *VAR_22)
{
 struct bcm_sf2_priv *VAR_23 = FUNC_3(VAR_19);
 u32 VAR_24 = 0, VAR_25;
 u32 VAR_26, VAR_27;

 if (VAR_20 == FUNC_4(VAR_23, VAR_1))
  return;

 if (VAR_23->type == VAR_0)
  VAR_27 = FUNC_1(VAR_20);
 else
  VAR_27 = FUNC_0(VAR_20);

 switch (VAR_22->interface) {
 case 131:
  VAR_24 = 1;

 case 130:
  VAR_25 = VAR_5;
  break;
 case 133:
  VAR_25 = VAR_4;
  break;
 case 132:
  VAR_25 = VAR_6;
  break;
 default:

  goto force_link;
 }




 VAR_26 = FUNC_6(VAR_23, FUNC_2(VAR_20));
 VAR_26 &= ~VAR_7;
 VAR_26 &= ~(VAR_11 << VAR_12);
 VAR_26 &= ~(VAR_13 | VAR_18);

 VAR_26 |= VAR_25;
 if (VAR_24)
  VAR_26 |= VAR_7;

 if (VAR_22->pause & VAR_10) {
  if (VAR_22->pause & VAR_9)
   VAR_26 |= VAR_18;
  VAR_26 |= VAR_13;
 }

 FUNC_7(VAR_23, VAR_26, FUNC_2(VAR_20));

force_link:

 VAR_26 = VAR_17;
 switch (VAR_22->speed) {
 case 128:
  VAR_26 |= VAR_15 << VAR_16;
  break;
 case 129:
  VAR_26 |= VAR_14 << VAR_16;
  break;
 }

 if (VAR_22->link)
  VAR_26 |= VAR_8;
 if (VAR_22->duplex == VAR_2)
  VAR_26 |= VAR_3;

 FUNC_5(VAR_23, VAR_26, VAR_27);
}
