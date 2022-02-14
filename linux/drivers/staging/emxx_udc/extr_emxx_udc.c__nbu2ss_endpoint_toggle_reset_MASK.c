
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nbu2ss_udc {TYPE_2__* p_regs; } ;
struct TYPE_4__ {TYPE_1__* EP_REGS; } ;
struct TYPE_3__ {int EP_CONTROL; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(struct nbu2ss_udc *VAR_4, u8 VAR_5)
{
 u8 VAR_6;
 u32 VAR_7;

 if ((VAR_5 == 0) || (VAR_5 == 0x80))
  return;

 VAR_6 = (VAR_5 & 0x7F) - 1;

 if (VAR_5 & VAR_3)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_0 | VAR_2;

 FUNC_0(&VAR_4->p_regs->EP_REGS[VAR_6].EP_CONTROL, VAR_7);
}
