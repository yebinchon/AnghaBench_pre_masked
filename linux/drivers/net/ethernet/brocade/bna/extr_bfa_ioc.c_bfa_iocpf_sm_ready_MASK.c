
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_iocpf {int dummy; } ;
typedef enum iocpf_event { ____Placeholder_iocpf_event } iocpf_event ;





 int FUNC_0 (struct bfa_iocpf*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct bfa_iocpf *VAR_3, enum iocpf_event VAR_4)
{
 switch (VAR_4) {
 case 130:
  FUNC_0(VAR_3, VAR_0);
  break;

 case 128:
  FUNC_0(VAR_3, VAR_2);
  break;

 case 129:
  FUNC_0(VAR_3, VAR_1);
  break;

 default:
  FUNC_1(VAR_4);
 }
}
