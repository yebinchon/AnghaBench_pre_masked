
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nbu2ss_udc {TYPE_1__* p_regs; int dev; } ;
struct TYPE_2__ {int TEST_CONTROL; int USB_CONTROL; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void FUNC_4(struct nbu2ss_udc *VAR_4, u32 VAR_5)
{
 u32 VAR_6;

 if (VAR_5 > VAR_1)
  return;

 FUNC_3(VAR_4->dev, "SET FEATURE : test mode = %d\n", VAR_5);

 VAR_6 = FUNC_1(&VAR_4->p_regs->USB_CONTROL);
 VAR_6 &= ~VAR_2;
 VAR_6 |= VAR_5 << VAR_3;

 FUNC_2(&VAR_4->p_regs->USB_CONTROL, VAR_6);
 FUNC_0(&VAR_4->p_regs->TEST_CONTROL, VAR_0);
}
