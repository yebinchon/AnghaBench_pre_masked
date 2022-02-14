
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phylink_link_state {int link; int an_complete; int duplex; int pause; int speed; } ;
struct mt7530_priv {int dummy; } ;
struct dsa_switch {struct mt7530_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct mt7530_priv*,int ) ;

__attribute__((used)) static int
FUNC_2(struct dsa_switch *VAR_13, int VAR_14,
         struct phylink_link_state *VAR_15)
{
 struct mt7530_priv *VAR_16 = VAR_13->priv;
 u32 VAR_17;

 if (VAR_14 < 0 || VAR_14 >= VAR_3)
  return -VAR_0;

 VAR_17 = FUNC_1(VAR_16, FUNC_0(VAR_14));

 VAR_15->link = (VAR_17 & VAR_5);
 VAR_15->an_complete = VAR_15->link;
 VAR_15->duplex = !!(VAR_17 & VAR_4);

 switch (VAR_17 & VAR_7) {
 case 130:
  VAR_15->speed = VAR_9;
  break;
 case 129:
  VAR_15->speed = VAR_10;
  break;
 case 128:
  VAR_15->speed = VAR_11;
  break;
 default:
  VAR_15->speed = VAR_12;
  break;
 }

 VAR_15->pause &= ~(VAR_1 | VAR_2);
 if (VAR_17 & VAR_6)
  VAR_15->pause |= VAR_1;
 if (VAR_17 & VAR_8)
  VAR_15->pause |= VAR_2;

 return 1;
}
