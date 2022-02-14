
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ioc_fail_sync; } ;
struct bfa_ioc {TYPE_1__ ioc_regs; } ;


 int FUNC_0 (struct bfa_ioc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void
FUNC_3(struct bfa_ioc *VAR_0)
{
 u32 VAR_1 = FUNC_1(VAR_0->ioc_regs.ioc_fail_sync);
 u32 VAR_2 = FUNC_0(VAR_0);

 FUNC_2((VAR_1 | VAR_2), VAR_0->ioc_regs.ioc_fail_sync);
}
