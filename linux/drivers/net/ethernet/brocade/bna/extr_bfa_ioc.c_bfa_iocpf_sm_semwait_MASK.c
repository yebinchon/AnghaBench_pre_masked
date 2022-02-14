
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_iocpf {struct bfa_ioc* ioc; } ;
struct bfa_ioc {int sem_timer; } ;
typedef enum iocpf_event { ____Placeholder_iocpf_event } iocpf_event ;


 int VAR_0 ;



 int FUNC_0 (struct bfa_iocpf*,int ) ;
 int FUNC_1 (struct bfa_ioc*) ;
 int FUNC_2 (struct bfa_ioc*) ;
 int FUNC_3 (struct bfa_ioc*) ;
 int FUNC_4 (struct bfa_ioc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct bfa_ioc*) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct bfa_iocpf *VAR_5, enum iocpf_event VAR_6)
{
 struct bfa_ioc *VAR_7 = VAR_5->ioc;

 switch (VAR_6) {
 case 129:
  if (FUNC_3(VAR_7)) {
   FUNC_4(VAR_7);
   FUNC_0(VAR_5, VAR_3);
  } else {
   FUNC_5(VAR_7);
   FUNC_7(&VAR_7->sem_timer, VAR_4 +
    FUNC_8(VAR_0));
  }
  break;

 case 128:
  FUNC_0(VAR_5, VAR_2);
  FUNC_2(VAR_7);
  break;

 case 130:
  FUNC_1(VAR_7);
  FUNC_0(VAR_5, VAR_1);
  break;

 default:
  FUNC_6(VAR_6);
 }
}
