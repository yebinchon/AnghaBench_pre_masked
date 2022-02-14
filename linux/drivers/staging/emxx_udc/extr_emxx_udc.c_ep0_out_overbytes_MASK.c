
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * DATA; } ;
union usb_reg_access {TYPE_2__ byte; int dw; } ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct nbu2ss_udc {TYPE_1__* p_regs; } ;
struct TYPE_3__ {int EP0_READ; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct nbu2ss_udc *VAR_0, u8 *VAR_1, u32 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4 = 0;
 union usb_reg_access VAR_5;
 union usb_reg_access *VAR_6 = (union usb_reg_access *)VAR_1;

 if ((VAR_2 > 0) && (VAR_2 < sizeof(u32))) {
  VAR_5 = FUNC_0(&VAR_0->p_regs->EP0_READ);
  for (VAR_3 = 0 ; VAR_3 < VAR_2 ; VAR_3++)
   VAR_6->byte.DATA[VAR_3] = VAR_5[VAR_3];
  VAR_4 += VAR_2;
 }

 return VAR_4;
}
