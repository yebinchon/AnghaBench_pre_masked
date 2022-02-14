
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
 int FUNC_3 (struct bfa_ioc_s*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct bfa_ioc_s*) ;
 int FUNC_5 (struct bfa_ioc_s*) ;
 int FUNC_6 (struct bfa_ioc_s*,int) ;
 int FUNC_7 (struct bfa_ioc_s*,int) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static void
FUNC_9(struct bfa_iocpf_s *VAR_4, enum iocpf_event VAR_5)
{
 struct bfa_ioc_s *VAR_6 = VAR_4->ioc;

 FUNC_7(VAR_6, VAR_5);

 switch (VAR_5) {
 case 129:
  if (FUNC_2(VAR_6)) {
   FUNC_3(VAR_6);
   FUNC_1(VAR_4, VAR_3);
  } else {
   FUNC_8(1, VAR_6->ioc_regs.ioc_sem_reg);
   FUNC_4(VAR_6);
  }
  break;

 case 128:
  FUNC_1(VAR_4, VAR_2);
  FUNC_0(VAR_6, VAR_0);
  break;

 case 130:
  FUNC_5(VAR_6);
  FUNC_1(VAR_4, VAR_1);
  break;

 default:
  FUNC_6(VAR_6, VAR_5);
 }
}
