
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int hwparams1; } ;
struct dwc3 {scalar_t__ revision; int link_state; int u1u2; int speed; int regs; TYPE_1__ hwparams; } ;
typedef enum dwc3_link_state { ____Placeholder_dwc3_link_state } dwc3_link_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;

 int VAR_7 ;



 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct dwc3*) ;
 int FUNC_3 (struct dwc3*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct dwc3 *VAR_11,
  unsigned int VAR_12)
{
 enum dwc3_link_state VAR_13 = VAR_12 & VAR_6;
 unsigned int VAR_14;
 VAR_14 = FUNC_0(VAR_11->hwparams.hwparams1);
 if ((VAR_11->revision < VAR_9) &&
   (VAR_14 != VAR_5)) {
  if ((VAR_11->link_state == 128) &&
    (VAR_13 == 131)) {
   return;
  }
 }
 if (VAR_11->revision < VAR_8) {
  if (VAR_13 == VAR_7) {
   u32 VAR_15;
   u32 VAR_16;

   switch (VAR_11->link_state) {
   case 130:
   case 129:
    VAR_16 = FUNC_1(VAR_11->regs, VAR_0);
    VAR_15 = VAR_16 & (VAR_4
      | VAR_2
      | VAR_3
      | VAR_1);

    if (!VAR_11->u1u2)
     VAR_11->u1u2 = VAR_16 & VAR_15;

    VAR_16 &= ~VAR_15;

    FUNC_4(VAR_11->regs, VAR_0, VAR_16);
    break;
   default:

    break;
   }
  }
 }

 switch (VAR_13) {
 case 130:
  if (VAR_11->speed == VAR_10)
   FUNC_3(VAR_11);
  break;
 case 129:
 case 128:
  FUNC_3(VAR_11);
  break;
 case 131:
  FUNC_2(VAR_11);
  break;
 default:

  break;
 }

 VAR_11->link_state = VAR_13;
}
