
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_iocpf {struct bfa_ioc* ioc; } ;
struct bfa_ioc {int iocpf_timer; } ;
typedef enum iocpf_event { ____Placeholder_iocpf_event } iocpf_event ;





 int FUNC_0 (struct bfa_iocpf*,int ) ;
 int FUNC_1 (struct bfa_ioc*) ;
 int FUNC_2 (struct bfa_ioc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct bfa_ioc*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct bfa_iocpf *VAR_3, enum iocpf_event VAR_4)
{
 struct bfa_ioc *VAR_5 = VAR_3->ioc;

 switch (VAR_4) {
 case 129:
  FUNC_0(VAR_3, VAR_1);
  break;

 case 128:
  FUNC_3(VAR_5);
  FUNC_1(VAR_5);
  FUNC_0(VAR_3, VAR_2);
  break;

 case 130:
  FUNC_5(&VAR_5->iocpf_timer);
  FUNC_2(VAR_5);
  FUNC_3(VAR_5);
  FUNC_0(VAR_3, VAR_0);
  break;

 default:
  FUNC_4(VAR_4);
 }
}
