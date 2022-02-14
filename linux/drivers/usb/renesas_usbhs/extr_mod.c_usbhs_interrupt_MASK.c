
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_irq_state {int intsts0; int intsts1; int brdysts; int nrdysts; int bempsts; } ;
typedef int irqreturn_t ;


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
 int FUNC_0 (struct usbhs_priv*,int ,struct usbhs_priv*,struct usbhs_irq_state*) ;
 int FUNC_1 (struct usbhs_priv*,int ,struct usbhs_priv*,struct usbhs_irq_state*) ;
 scalar_t__ FUNC_2 (struct usbhs_priv*) ;
 scalar_t__ FUNC_3 (struct usbhs_priv*,struct usbhs_irq_state*) ;
 int FUNC_4 (struct usbhs_priv*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_27, void *VAR_28)
{
 struct usbhs_priv *VAR_29 = VAR_28;
 struct usbhs_irq_state VAR_30;

 if (FUNC_3(VAR_29, &VAR_30) < 0)
  return VAR_13;
 FUNC_4(VAR_29, VAR_8, ~VAR_30.intsts0 & VAR_9);
 if (FUNC_2(VAR_29))
  FUNC_4(VAR_29, VAR_10, ~VAR_30.intsts1 & VAR_11);






 if (VAR_30.intsts0 & VAR_3)
  FUNC_4(VAR_29, VAR_4, ~VAR_30.brdysts);
 FUNC_4(VAR_29, VAR_14, ~VAR_30.nrdysts);
 if (VAR_30.intsts0 & VAR_1)
  FUNC_4(VAR_29, VAR_2, ~VAR_30.bempsts);
 if (VAR_30.intsts0 & VAR_17)
  FUNC_1(VAR_29, VAR_26, VAR_29, &VAR_30);

 if (VAR_30.intsts0 & VAR_7)
  FUNC_0(VAR_29, VAR_20, VAR_29, &VAR_30);

 if (VAR_30.intsts0 & VAR_5)
  FUNC_0(VAR_29, VAR_19, VAR_29, &VAR_30);

 if (VAR_30.intsts0 & VAR_1)
  FUNC_0(VAR_29, VAR_22, VAR_29, &VAR_30);

 if (VAR_30.intsts0 & VAR_3)
  FUNC_0(VAR_29, VAR_23, VAR_29, &VAR_30);

 if (FUNC_2(VAR_29)) {

  if (VAR_30.intsts1 & VAR_0)
   FUNC_0(VAR_29, VAR_18, VAR_29, &VAR_30);

  if (VAR_30.intsts1 & VAR_6)
   FUNC_0(VAR_29, VAR_21, VAR_29, &VAR_30);

  if (VAR_30.intsts1 & VAR_16)
   FUNC_0(VAR_29, VAR_25, VAR_29, &VAR_30);

  if (VAR_30.intsts1 & VAR_15)
   FUNC_0(VAR_29, VAR_24, VAR_29, &VAR_30);
 }
 return VAR_12;
}
