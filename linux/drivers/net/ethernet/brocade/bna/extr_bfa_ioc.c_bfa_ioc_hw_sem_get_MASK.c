
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ioc_sem_reg; } ;
struct bfa_ioc {int sem_timer; int iocpf; TYPE_1__ ioc_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct bfa_ioc *VAR_4)
{
 u32 VAR_5;





 VAR_5 = FUNC_3(VAR_4->ioc_regs.ioc_sem_reg);
 if (VAR_5 == ~0) {
  FUNC_0(&VAR_4->iocpf, VAR_2);
  return;
 }
 if (!(VAR_5 & 1)) {
  FUNC_0(&VAR_4->iocpf, VAR_1);
  return;
 }

 FUNC_1(&VAR_4->sem_timer, VAR_3 +
  FUNC_2(VAR_0));
}
