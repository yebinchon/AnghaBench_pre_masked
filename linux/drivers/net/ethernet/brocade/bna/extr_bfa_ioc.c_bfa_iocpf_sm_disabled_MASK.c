
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_iocpf {struct bfa_ioc* ioc; } ;
struct bfa_ioc {int dummy; } ;
typedef enum iocpf_event { ____Placeholder_iocpf_event } iocpf_event ;




 int FUNC_0 (struct bfa_iocpf*,int ) ;
 int FUNC_1 (struct bfa_ioc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct bfa_iocpf *VAR_2, enum iocpf_event VAR_3)
{
 struct bfa_ioc *VAR_4 = VAR_2->ioc;

 switch (VAR_3) {
 case 129:
  FUNC_0(VAR_2, VAR_1);
  break;

 case 128:
  FUNC_1(VAR_4);
  FUNC_0(VAR_2, VAR_0);
  break;

 default:
  FUNC_2(VAR_3);
 }
}
