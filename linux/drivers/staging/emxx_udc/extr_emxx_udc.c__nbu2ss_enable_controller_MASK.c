
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nbu2ss_udc {int udc_enabled; TYPE_1__* p_regs; int dev; } ;
struct TYPE_2__ {int USB_INT_ENA; int USB_CONTROL; int UTMI_CHARACTER_1; int EPCTR; int AHBMCTR; int AHBSCTR; } ;


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
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct nbu2ss_udc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct nbu2ss_udc *VAR_15)
{
 int VAR_16 = 0;

 if (VAR_15->udc_enabled)
  return 0;


 FUNC_1(&VAR_15->p_regs->EPCTR, (VAR_0 | VAR_4));
 FUNC_7(VAR_5);

 FUNC_0(&VAR_15->p_regs->EPCTR, VAR_0);
 FUNC_6(VAR_2);

 FUNC_0(&VAR_15->p_regs->EPCTR, VAR_4);

 FUNC_4(&VAR_15->p_regs->AHBSCTR, VAR_13);

  FUNC_4(&VAR_15->p_regs->AHBMCTR,
          VAR_6 | VAR_7 | VAR_14);

 while (!(FUNC_3(&VAR_15->p_regs->EPCTR) & VAR_9)) {
  VAR_16++;
  FUNC_7(1);
  if (VAR_16 == VAR_3) {
   FUNC_5(VAR_15->dev, "*** Reset Cancel failed\n");
   return -VAR_1;
  }
 }

  FUNC_1(&VAR_15->p_regs->UTMI_CHARACTER_1, VAR_12);

 FUNC_1(&VAR_15->p_regs->USB_CONTROL, (VAR_8 | VAR_10));


 FUNC_2(VAR_15);


 FUNC_1(&VAR_15->p_regs->USB_INT_ENA, VAR_11);

 VAR_15->udc_enabled = 1;

 return 0;
}
