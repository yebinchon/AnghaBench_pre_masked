
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fsm; } ;
struct bfa_ioc_s {TYPE_1__ iocpf; int fsm; } ;
typedef enum bfa_iocpf_state { ____Placeholder_bfa_iocpf_state } bfa_iocpf_state ;
typedef enum bfa_ioc_state { ____Placeholder_bfa_ioc_state } bfa_ioc_state ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;

enum bfa_ioc_state
FUNC_1(struct bfa_ioc_s *VAR_8)
{
 enum bfa_iocpf_state VAR_9;
 enum bfa_ioc_state VAR_10 = FUNC_0(VAR_6, VAR_8->fsm);

 if (VAR_10 == VAR_0 ||
  VAR_10 == VAR_1 || VAR_10 == VAR_4) {

  VAR_9 = FUNC_0(VAR_7, VAR_8->iocpf.fsm);

  switch (VAR_9) {
  case 128:
   VAR_10 = VAR_5;
   break;

  case 130:
   VAR_10 = VAR_3;
   break;

  case 131:
   VAR_10 = VAR_2;
   break;

  case 132:
   VAR_10 = VAR_1;
   break;

  case 129:
   VAR_10 = VAR_4;
   break;

  default:
   break;
  }
 }

 return VAR_10;
}
