
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union usb_reg_access {int dw; } ;
typedef int u8 ;
typedef int u32 ;
struct nbu2ss_udc {TYPE_1__* p_regs; } ;
struct TYPE_2__ {int EP0_WRITE; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(struct nbu2ss_udc *VAR_1, u8 *VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 u32 VAR_5 = VAR_0;
 u32 VAR_6 = 0;
 u32 VAR_7 = 0;
 union usb_reg_access *VAR_8 = (union usb_reg_access *)VAR_2;



 if (VAR_5 < VAR_3)
  VAR_6 = VAR_5 / sizeof(u32);
 else
  VAR_6 = VAR_3 / sizeof(u32);



 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  FUNC_0(&VAR_1->p_regs->EP0_WRITE, VAR_8->dw);
  VAR_8++;
  VAR_7 += sizeof(u32);
 }

 return VAR_7;
}
