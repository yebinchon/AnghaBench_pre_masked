
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int lpu_read_stat; } ;
struct bfa_ioc {TYPE_1__ ioc_regs; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static bool
FUNC_2(struct bfa_ioc *VAR_0)
{
 u32 VAR_1;

 VAR_1 = FUNC_0(VAR_0->ioc_regs.lpu_read_stat);
 if (VAR_1) {
  FUNC_1(1, VAR_0->ioc_regs.lpu_read_stat);
  return 1;
 }

 return 0;
}
