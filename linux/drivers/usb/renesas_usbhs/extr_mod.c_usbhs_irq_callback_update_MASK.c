
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbhs_priv {int dummy; } ;
struct usbhs_mod_info {scalar_t__ irq_vbus; } ;
struct usbhs_mod {int irq_bempsts; int irq_brdysts; scalar_t__ irq_sack; scalar_t__ irq_sign; scalar_t__ irq_dtch; scalar_t__ irq_attch; scalar_t__ irq_ready; scalar_t__ irq_empty; scalar_t__ irq_ctrl_stage; } ;


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
 scalar_t__ FUNC_0 (struct usbhs_priv*) ;
 struct usbhs_mod_info* FUNC_1 (struct usbhs_priv*) ;
 int FUNC_2 (struct usbhs_priv*,int ,int) ;

void FUNC_3(struct usbhs_priv *VAR_12, struct usbhs_mod *VAR_13)
{
 u16 VAR_14 = 0;
 u16 VAR_15 = 0;
 struct usbhs_mod_info *VAR_16 = FUNC_1(VAR_12);
 FUNC_2(VAR_12, VAR_7, 0);
 if (FUNC_0(VAR_12))
  FUNC_2(VAR_12, VAR_8, 0);

 FUNC_2(VAR_12, VAR_2, 0);
 FUNC_2(VAR_12, VAR_4, 0);
 if (VAR_16->irq_vbus)
  VAR_14 |= VAR_11;

 if (VAR_13) {



  if (VAR_13->irq_ctrl_stage)
   VAR_14 |= VAR_5;

  if (VAR_13->irq_empty && VAR_13->irq_bempsts) {
   FUNC_2(VAR_12, VAR_2, VAR_13->irq_bempsts);
   VAR_14 |= VAR_1;
  }

  if (VAR_13->irq_ready && VAR_13->irq_brdysts) {
   FUNC_2(VAR_12, VAR_4, VAR_13->irq_brdysts);
   VAR_14 |= VAR_3;
  }

  if (FUNC_0(VAR_12)) {



   if (VAR_13->irq_attch)
    VAR_15 |= VAR_0;

   if (VAR_13->irq_dtch)
    VAR_15 |= VAR_6;

   if (VAR_13->irq_sign)
    VAR_15 |= VAR_10;

   if (VAR_13->irq_sack)
    VAR_15 |= VAR_9;
  }
 }

 if (VAR_14)
  FUNC_2(VAR_12, VAR_7, VAR_14);

 if (FUNC_0(VAR_12) && VAR_15)
  FUNC_2(VAR_12, VAR_8, VAR_15);
}
