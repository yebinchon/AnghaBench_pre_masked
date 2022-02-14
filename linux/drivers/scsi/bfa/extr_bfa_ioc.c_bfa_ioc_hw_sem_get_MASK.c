
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ioc_sem_reg; } ;
struct bfa_ioc_s {int iocpf; TYPE_1__ ioc_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct bfa_ioc_s*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct bfa_ioc_s *VAR_2)
{
 u32 VAR_3;





 VAR_3 = FUNC_3(VAR_2->ioc_regs.ioc_sem_reg);
 if (VAR_3 == ~0) {
  FUNC_0(VAR_3 == ~0);
  FUNC_1(&VAR_2->iocpf, VAR_1);
  return;
 }
 if (!(VAR_3 & 1)) {
  FUNC_1(&VAR_2->iocpf, VAR_0);
  return;
 }

 FUNC_2(VAR_2);
}
