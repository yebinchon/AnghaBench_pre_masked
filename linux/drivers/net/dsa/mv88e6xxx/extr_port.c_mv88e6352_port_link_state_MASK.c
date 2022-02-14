
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct phylink_link_state {int link; int an_enabled; int an_complete; int duplex; int speed; int interface; } ;
struct mv88e6xxx_chip {TYPE_1__* ports; } ;
struct TYPE_2__ {int cmode; } ;


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
 int FUNC_0 (struct mv88e6xxx_chip*,int,int ,int*) ;

int FUNC_1(struct mv88e6xxx_chip *VAR_25, int VAR_26,
         struct phylink_link_state *VAR_27)
{
 int VAR_28;
 u16 VAR_29;

 switch (VAR_25->ports[VAR_26].cmode) {
 case 135:
  VAR_28 = FUNC_0(VAR_25, VAR_26, VAR_2,
       &VAR_29);
  if (VAR_28)
   return VAR_28;

  if ((VAR_29 & VAR_3) &&
      (VAR_29 & VAR_4))
   VAR_27->interface = VAR_14;
  else if (VAR_29 & VAR_3)
   VAR_27->interface = VAR_15;
  else if (VAR_29 & VAR_4)
   VAR_27->interface = VAR_16;
  else
   VAR_27->interface = VAR_13;
  break;
 case 137:
  VAR_27->interface = VAR_10;
  break;
 case 133:
  VAR_27->interface = VAR_18;
  break;
 case 136:
  VAR_27->interface = VAR_11;
  break;
 case 132:
  VAR_27->interface = VAR_19;
  break;
 case 134:
  VAR_27->interface = VAR_17;
  break;
 default:

  VAR_27->interface = VAR_12;
 }

 VAR_28 = FUNC_0(VAR_25, VAR_26, VAR_5, &VAR_29);
 if (VAR_28)
  return VAR_28;

 switch (VAR_29 & VAR_9) {
 case 131:
  VAR_27->speed = VAR_20;
  break;
 case 130:
  VAR_27->speed = VAR_21;
  break;
 case 129:
  VAR_27->speed = VAR_22;
  break;
 case 128:
  if ((VAR_29 & VAR_6) ==
      136)
   VAR_27->speed = VAR_24;
  else
   VAR_27->speed = VAR_23;
  break;
 }

 VAR_27->duplex = VAR_29 & VAR_7 ?
   VAR_0 : VAR_1;
 VAR_27->link = !!(VAR_29 & VAR_8);
 VAR_27->an_enabled = 1;
 VAR_27->an_complete = VAR_27->link;

 return 0;
}
