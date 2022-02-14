
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fsm; } ;
struct bfa_ioc {TYPE_1__ iocpf; } ;
typedef enum bfa_iocpf_state { ____Placeholder_bfa_iocpf_state } bfa_iocpf_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct bfa_ioc*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;

void
FUNC_3(struct bfa_ioc *VAR_3)
{
 enum bfa_iocpf_state VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_3->iocpf.fsm);

 if (VAR_4 == VAR_0)
  FUNC_1(VAR_3);
 else
  FUNC_0(&VAR_3->iocpf, VAR_1);
}
