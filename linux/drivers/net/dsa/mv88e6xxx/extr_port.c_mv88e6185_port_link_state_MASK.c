
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct phylink_link_state {scalar_t__ interface; int link; int an_enabled; int an_complete; int speed; int duplex; } ;
struct mv88e6xxx_chip {TYPE_1__* ports; } ;
struct TYPE_2__ {scalar_t__ cmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,struct phylink_link_state*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int ,int*) ;

int FUNC_2(struct mv88e6xxx_chip *VAR_9, int VAR_10,
         struct phylink_link_state *VAR_11)
{
 if (VAR_11->interface == VAR_6) {
  u8 VAR_12 = VAR_9->ports[VAR_10].cmode;






  if (VAR_12 == VAR_4) {
   u16 VAR_13;
   int VAR_14;

   VAR_14 = FUNC_1(VAR_9, VAR_10,
        VAR_5, &VAR_13);
   if (VAR_14)
    return VAR_14;

   VAR_11->link = !!(VAR_13 & VAR_3);
   VAR_11->an_enabled = 1;
   VAR_11->an_complete =
    !!(VAR_13 & VAR_2);
   VAR_11->duplex =
    VAR_11->link ? VAR_0 : VAR_1;
   VAR_11->speed =
    VAR_11->link ? VAR_7 : VAR_8;

   return 0;
  }
 }

 return FUNC_0(VAR_9, VAR_10, VAR_11);
}
