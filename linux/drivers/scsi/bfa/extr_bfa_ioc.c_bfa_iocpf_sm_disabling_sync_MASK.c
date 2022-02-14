
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_iocpf_s {struct bfa_ioc_s* ioc; } ;
struct TYPE_2__ {int ioc_sem_reg; } ;
struct bfa_ioc_s {TYPE_1__ ioc_regs; } ;
typedef enum iocpf_event { ____Placeholder_iocpf_event } iocpf_event ;





 int VAR_0 ;
 int FUNC_0 (struct bfa_ioc_s*,int ) ;
 int FUNC_1 (struct bfa_iocpf_s*,int ) ;
 int FUNC_2 (struct bfa_ioc_s*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct bfa_ioc_s*,int) ;
 int FUNC_4 (struct bfa_ioc_s*,int) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void
FUNC_6(struct bfa_iocpf_s *VAR_3, enum iocpf_event VAR_4)
{
 struct bfa_ioc_s *VAR_5 = VAR_3->ioc;

 FUNC_4(VAR_5, VAR_4);

 switch (VAR_4) {
 case 129:
  FUNC_2(VAR_5);
  FUNC_5(1, VAR_5->ioc_regs.ioc_sem_reg);
  FUNC_1(VAR_3, VAR_1);
  break;

 case 128:
  FUNC_1(VAR_3, VAR_2);
  FUNC_0(VAR_5, VAR_0);
  break;

 case 130:
  break;

 default:
  FUNC_3(VAR_5, VAR_4);
 }
}
