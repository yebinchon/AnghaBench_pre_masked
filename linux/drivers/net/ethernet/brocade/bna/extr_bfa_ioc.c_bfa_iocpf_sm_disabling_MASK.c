
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_iocpf {struct bfa_ioc* ioc; } ;
struct bfa_ioc {int iocpf_timer; } ;
typedef enum iocpf_event { ____Placeholder_iocpf_event } iocpf_event ;


 int VAR_0 ;




 int FUNC_0 (struct bfa_iocpf*,int ) ;
 int FUNC_1 (struct bfa_ioc*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct bfa_iocpf *VAR_2, enum iocpf_event VAR_3)
{
 struct bfa_ioc *VAR_4 = VAR_2->ioc;

 switch (VAR_3) {
 case 130:
  FUNC_3(&VAR_4->iocpf_timer);
  FUNC_0(VAR_2, VAR_1);
  break;

 case 131:
  FUNC_3(&VAR_4->iocpf_timer);


 case 128:
  FUNC_1(VAR_4, VAR_0);
  FUNC_0(VAR_2, VAR_1);
  break;

 case 129:
  break;

 default:
  FUNC_2(VAR_3);
 }
}
