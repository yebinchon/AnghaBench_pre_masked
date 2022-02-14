
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioc_s {int bfa; TYPE_1__* cbfn; } ;
typedef enum ioc_event { ____Placeholder_ioc_event } ioc_event ;
struct TYPE_2__ {int (* disable_cbfn ) (int ) ;int (* enable_cbfn ) (int ,int ) ;} ;


 int VAR_0 ;




 int FUNC_0 (struct bfa_ioc_s*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct bfa_ioc_s*,int) ;
 int FUNC_2 (struct bfa_ioc_s*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct bfa_ioc_s *VAR_2, enum ioc_event VAR_3)
{
 FUNC_2(VAR_2, VAR_3);

 switch (VAR_3) {
 case 129:
  VAR_2->cbfn->enable_cbfn(VAR_2->bfa, VAR_0);
  break;

 case 130:
  VAR_2->cbfn->disable_cbfn(VAR_2->bfa);
  break;

 case 131:
  FUNC_0(VAR_2, VAR_1);
  break;

 case 128:

  break;

 default:
  FUNC_1(VAR_2, VAR_3);
 }
}
