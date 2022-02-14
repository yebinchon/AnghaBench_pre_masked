
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct phylink_link_state {int an_complete; int link; int pause; int duplex; int speed; } ;
struct b53_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
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
 scalar_t__ FUNC_1 (struct b53_device*,int) ;
 int FUNC_2 (struct b53_device*,scalar_t__,int ,int ) ;

int FUNC_3(struct b53_device *VAR_20, int VAR_21,
     struct phylink_link_state *VAR_22)
{
 u8 VAR_23 = FUNC_1(VAR_20, VAR_21);
 u16 VAR_24, VAR_25;

 if (VAR_23 == VAR_0)
  return 1;

 VAR_24 = FUNC_2(VAR_20, VAR_23, VAR_1,
         VAR_12);
 VAR_25 = FUNC_2(VAR_20, VAR_23, FUNC_0(VAR_7),
          VAR_13);

 switch ((VAR_24 >> VAR_19) & VAR_18) {
 case 131:
  VAR_22->speed = VAR_14;
  break;
 case 130:
  VAR_22->speed = VAR_15;
  break;
 case 129:
  VAR_22->speed = VAR_16;
  break;
 default:
 case 128:
  VAR_22->speed = VAR_17;
  break;
 }

 VAR_22->duplex = VAR_24 & VAR_5 ? VAR_3 : VAR_4;
 VAR_22->an_complete = !!(VAR_25 & VAR_2);
 VAR_22->link = !!(VAR_24 & VAR_6);
 if (VAR_24 & VAR_10)
  VAR_22->pause |= VAR_8;
 if (VAR_24 & VAR_11)
  VAR_22->pause |= VAR_9;

 return 0;
}
