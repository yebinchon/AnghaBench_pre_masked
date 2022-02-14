
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int smem_pg0; } ;
struct bfa_ioc {TYPE_1__ ioc_regs; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static u32
FUNC_1(struct bfa_ioc *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_0->ioc_regs.smem_pg0, VAR_1);
}
