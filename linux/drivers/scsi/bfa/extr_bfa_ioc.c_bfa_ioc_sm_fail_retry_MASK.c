
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioc_s {int iocpf; int bfa; TYPE_1__* cbfn; } ;
typedef enum ioc_event { ____Placeholder_ioc_event } ioc_event ;
struct TYPE_2__ {int (* enable_cbfn ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct bfa_ioc_s*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct bfa_ioc_s*,int) ;
 int FUNC_3 (struct bfa_ioc_s*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct bfa_ioc_s *VAR_8, enum ioc_event VAR_9)
{
 FUNC_3(VAR_8, VAR_9);

 switch (VAR_9) {
 case 131:
  FUNC_1(VAR_8, VAR_5);
  break;

 case 128:
 case 130:



  VAR_8->cbfn->enable_cbfn(VAR_8->bfa, VAR_0);
  FUNC_1(VAR_8, VAR_4);
  if (VAR_9 != 128)
   FUNC_0(&VAR_8->iocpf, VAR_1);
  break;

 case 129:
  VAR_8->cbfn->enable_cbfn(VAR_8->bfa, VAR_0);
  FUNC_1(VAR_8, VAR_6);
  break;

 case 132:
  break;

 case 133:
  FUNC_1(VAR_8, VAR_3);
  break;

 case 134:
  FUNC_1(VAR_8, VAR_7);
  FUNC_0(&VAR_8->iocpf, VAR_2);
  break;

 default:
  FUNC_2(VAR_8, VAR_9);
 }
}
