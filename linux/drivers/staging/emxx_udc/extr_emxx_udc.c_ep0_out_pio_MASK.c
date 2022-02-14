
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union usb_reg_access {int dw; } ;
typedef int u8 ;
typedef int u32 ;
struct nbu2ss_udc {TYPE_1__* p_regs; } ;
struct TYPE_2__ {int EP0_READ; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct nbu2ss_udc *VAR_0, u8 *VAR_1, u32 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4 = VAR_2 / sizeof(u32);
 union usb_reg_access *VAR_5 = (union usb_reg_access *)VAR_1;

 if (!VAR_4)
  return 0;


 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_5->dw = FUNC_0(&VAR_0->p_regs->EP0_READ);
  VAR_5++;
 }

 return VAR_4 * sizeof(u32);
}
