
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_private {scalar_t__ PHYType; int duplexmode; int line_speed; int crvalue; int * phys; scalar_t__ mem; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (struct net_device*,int ,int ) ;
 struct netdev_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_29)
{
 struct netdev_private *VAR_30 = FUNC_2(VAR_29);

 if (VAR_30->PHYType == VAR_18) {
  if (FUNC_0(VAR_30->mem + VAR_28) & VAR_1)
   VAR_30->duplexmode = 2;
  else
   VAR_30->duplexmode = 1;
  if (FUNC_0(VAR_30->mem + VAR_28) & VAR_2)
   VAR_30->line_speed = 1;
  else
   VAR_30->line_speed = 2;
 } else {
  if (VAR_30->PHYType == VAR_21) {
   unsigned int VAR_31;

   VAR_31 = FUNC_1(VAR_29, VAR_30->phys[0], VAR_15);
   if (VAR_31 & VAR_19)
    VAR_30->line_speed = 2;
   else
    VAR_30->line_speed = 1;
   if (VAR_31 & VAR_6)
    VAR_30->duplexmode = 2;
   else
    VAR_30->duplexmode = 1;
  } else if (VAR_30->PHYType == VAR_0) {
   unsigned int VAR_32;

   VAR_32 = FUNC_1(VAR_29, VAR_30->phys[0], VAR_8);
   if (VAR_32 & VAR_24)
    VAR_30->line_speed = 2;
   else
    VAR_30->line_speed = 1;
   if (VAR_32 & VAR_7)
    VAR_30->duplexmode = 2;
   else
    VAR_30->duplexmode = 1;
  }

  else if (VAR_30->PHYType == VAR_16) {
   unsigned int VAR_33;

   VAR_33 = FUNC_1(VAR_29, VAR_30->phys[0], VAR_22);
   if (VAR_33 & VAR_10)
    VAR_30->duplexmode = 2;
   else
    VAR_30->duplexmode = 1;
   VAR_33 &= VAR_23;
   if (VAR_33 == VAR_25)
    VAR_30->line_speed = 3;
   else if (VAR_33 == VAR_26)
    VAR_30->line_speed = 2;
   else
    VAR_30->line_speed = 1;
  }


  else if (VAR_30->PHYType == VAR_17) {
   unsigned int VAR_34;

   VAR_34 = FUNC_1(VAR_29, VAR_30->phys[0], VAR_27);

   if (VAR_34 & VAR_20)
    VAR_30->line_speed = 2;
   else
    VAR_30->line_speed = 1;

   if (VAR_34 & VAR_9)
    VAR_30->duplexmode = 2;
   else
    VAR_30->duplexmode = 1;
  }


  else if (VAR_30->PHYType == VAR_14) {
   unsigned int VAR_35;

   VAR_35 = FUNC_1(VAR_29, VAR_30->phys[0], VAR_22);
   if (VAR_35 & VAR_13)
    VAR_30->duplexmode = 2;
   else
    VAR_30->duplexmode = 1;
   VAR_35 &= VAR_23;
   if (VAR_35 == VAR_11)
    VAR_30->line_speed = 3;
   else if (VAR_35 == VAR_12)
    VAR_30->line_speed = 2;
   else
    VAR_30->line_speed = 1;
  }
  VAR_30->crvalue &= (~VAR_4) & (~VAR_3) & (~VAR_5);
  if (VAR_30->line_speed == 1)
   VAR_30->crvalue |= VAR_4;
  else if (VAR_30->line_speed == 3)
   VAR_30->crvalue |= VAR_5;
  if (VAR_30->duplexmode == 2)
   VAR_30->crvalue |= VAR_3;
 }
}
