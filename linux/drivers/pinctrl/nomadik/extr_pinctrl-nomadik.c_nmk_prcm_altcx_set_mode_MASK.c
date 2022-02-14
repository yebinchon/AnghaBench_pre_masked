
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u16 ;
struct prcm_gpiocr_altcx_pin_desc {unsigned int pin; TYPE_2__* altcx; } ;
struct nmk_pinctrl {scalar_t__ prcm_base; int dev; TYPE_1__* soc; } ;
struct TYPE_4__ {int used; size_t reg_index; size_t control_bit; } ;
struct TYPE_3__ {int npins_altcx; scalar_t__* prcm_gpiocr_registers; struct prcm_gpiocr_altcx_pin_desc* altcx_pins; } ;


 int FUNC_0 (size_t) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ,char*,unsigned int,...) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_4 (scalar_t__,int,int) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct nmk_pinctrl *VAR_1,
 unsigned VAR_2, unsigned VAR_3)
{
 int VAR_4;
 u16 VAR_5;
 u8 VAR_6;
 u8 VAR_7;
 const struct prcm_gpiocr_altcx_pin_desc *VAR_8;
 const u16 *VAR_9;

 if (!VAR_1->prcm_base)
  return;

 if (VAR_3 > VAR_0) {
  FUNC_2(VAR_1->dev, "PRCM GPIOCR: alternate-C%i is invalid\n",
   VAR_3);
  return;
 }

 for (VAR_4 = 0 ; VAR_4 < VAR_1->soc->npins_altcx ; VAR_4++) {
  if (VAR_1->soc->altcx_pins[VAR_4].pin == VAR_2)
   break;
 }
 if (VAR_4 == VAR_1->soc->npins_altcx) {
  FUNC_1(VAR_1->dev, "PRCM GPIOCR: pin %i is not found\n",
   VAR_2);
  return;
 }

 VAR_8 = VAR_1->soc->altcx_pins + VAR_4;
 VAR_9 = VAR_1->soc->prcm_gpiocr_registers;





 if (!VAR_3) {
  for (VAR_4 = 0 ; VAR_4 < VAR_0 ; VAR_4++) {
   if (VAR_8->altcx[VAR_4].used == 1) {
    VAR_5 = VAR_9[VAR_8->altcx[VAR_4].reg_index];
    VAR_6 = VAR_8->altcx[VAR_4].control_bit;
    if (FUNC_5(VAR_1->prcm_base + VAR_5) & FUNC_0(VAR_6)) {
     FUNC_4(VAR_1->prcm_base + VAR_5, FUNC_0(VAR_6), 0);
     FUNC_1(VAR_1->dev,
      "PRCM GPIOCR: pin %i: alternate-C%i has been disabled\n",
      VAR_2, VAR_4+1);
    }
   }
  }
  return;
 }

 VAR_7 = VAR_3 - 1;
 if (VAR_8->altcx[VAR_7].used == 0) {
  FUNC_3(VAR_1->dev,
   "PRCM GPIOCR: pin %i: alternate-C%i does not exist\n",
   VAR_2, VAR_3);
  return;
 }





 for (VAR_4 = 0 ; VAR_4 < VAR_0 ; VAR_4++) {
  if (VAR_4 == VAR_7)
   continue;
  if (VAR_8->altcx[VAR_4].used == 1) {
   VAR_5 = VAR_9[VAR_8->altcx[VAR_4].reg_index];
   VAR_6 = VAR_8->altcx[VAR_4].control_bit;
   if (FUNC_5(VAR_1->prcm_base + VAR_5) & FUNC_0(VAR_6)) {
    FUNC_4(VAR_1->prcm_base + VAR_5, FUNC_0(VAR_6), 0);
    FUNC_1(VAR_1->dev,
     "PRCM GPIOCR: pin %i: alternate-C%i has been disabled\n",
     VAR_2, VAR_4+1);
   }
  }
 }

 VAR_5 = VAR_9[VAR_8->altcx[VAR_7].reg_index];
 VAR_6 = VAR_8->altcx[VAR_7].control_bit;
 FUNC_1(VAR_1->dev, "PRCM GPIOCR: pin %i: alternate-C%i has been selected\n",
  VAR_2, VAR_7+1);
 FUNC_4(VAR_1->prcm_base + VAR_5, FUNC_0(VAR_6), FUNC_0(VAR_6));
}
