
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
 int FUNC_5 (struct bfa_ioc*) ;
 int FUNC_6 (struct bfa_ioc*) ;
 int FUNC_7 (struct bfa_ioc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (struct bfa_ioc*) ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (int *,scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(struct bfa_iocpf *VAR_6, enum iocpf_event VAR_7)
{
 struct bfa_ioc *VAR_8 = VAR_6->ioc;

 switch (VAR_7) {
 case 130:
  if (FUNC_1(VAR_8)) {
   if (FUNC_7(VAR_8)) {
    FUNC_6(VAR_8);
    FUNC_0(VAR_6, VAR_2);
   } else {
    FUNC_2(VAR_8);
    FUNC_8(VAR_8);
    FUNC_10(&VAR_8->sem_timer, VAR_5 +
     FUNC_11(VAR_0));
   }
  } else {
   FUNC_8(VAR_8);
   FUNC_0(VAR_6, VAR_3);
  }
  break;

 case 129:
  FUNC_0(VAR_6, VAR_1);
  FUNC_5(VAR_8);
  break;

 case 131:
  FUNC_3(VAR_8);
  FUNC_0(VAR_6, VAR_4);
  FUNC_4(VAR_8);
  break;

 case 128:
  FUNC_3(VAR_8);
  FUNC_0(VAR_6, VAR_4);
  break;

 default:
  FUNC_9(VAR_7);
 }
}
