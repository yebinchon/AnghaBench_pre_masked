
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_iocpf {int auto_recover; struct bfa_ioc* ioc; } ;
struct bfa_ioc {int dummy; } ;
typedef enum iocpf_event { ____Placeholder_iocpf_event } iocpf_event ;


 int VAR_0 ;




 int FUNC_0 (struct bfa_iocpf*,int ) ;
 int FUNC_1 (struct bfa_ioc*) ;
 int FUNC_2 (struct bfa_ioc*) ;
 int FUNC_3 (struct bfa_ioc*) ;
 int FUNC_4 (struct bfa_ioc*,int ) ;
 int FUNC_5 (struct bfa_ioc*) ;
 int FUNC_6 (struct bfa_ioc*) ;
 int FUNC_7 (struct bfa_ioc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (struct bfa_ioc*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10(struct bfa_iocpf *VAR_5, enum iocpf_event VAR_6)
{
 struct bfa_ioc *VAR_7 = VAR_5->ioc;

 switch (VAR_6) {
 case 129:
  FUNC_5(VAR_7);
  FUNC_2(VAR_7);
  if (!VAR_5->auto_recover) {
   FUNC_7(VAR_7);
   FUNC_4(VAR_7, VAR_0);
   FUNC_8(VAR_7);
   FUNC_0(VAR_5, VAR_2);
  } else {
   if (FUNC_6(VAR_7))
    FUNC_0(VAR_5, VAR_3);
   else {
    FUNC_8(VAR_7);
    FUNC_0(VAR_5, VAR_4);
   }
  }
  break;

 case 128:
  FUNC_0(VAR_5, VAR_2);
  FUNC_3(VAR_7);
  break;

 case 131:
  FUNC_1(VAR_7);
  FUNC_0(VAR_5, VAR_1);
  break;

 case 130:
  break;

 default:
  FUNC_9(VAR_6);
 }
}
