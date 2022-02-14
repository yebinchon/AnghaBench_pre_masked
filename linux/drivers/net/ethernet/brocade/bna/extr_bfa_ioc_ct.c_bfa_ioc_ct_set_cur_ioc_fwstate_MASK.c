
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ioc_fwstate; } ;
struct bfa_ioc {TYPE_1__ ioc_regs; } ;
typedef enum bfi_ioc_state { ____Placeholder_bfi_ioc_state } bfi_ioc_state ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void
FUNC_1(struct bfa_ioc *VAR_0,
          enum bfi_ioc_state VAR_1)
{
 FUNC_0(VAR_1, VAR_0->ioc_regs.ioc_fwstate);
}
