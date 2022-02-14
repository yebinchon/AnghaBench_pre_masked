
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioc {int bfa; TYPE_1__* cbfn; } ;
typedef enum ioc_event { ____Placeholder_ioc_event } ioc_event ;
struct TYPE_2__ {int (* enable_cbfn ) (int ,int ) ;} ;


 int VAR_0 ;




 int FUNC_0 (struct bfa_ioc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bfa_ioc*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct bfa_ioc *VAR_3, enum ioc_event VAR_4)
{
 switch (VAR_4) {
 case 129:
  VAR_3->cbfn->enable_cbfn(VAR_3->bfa, VAR_0);
  break;

 case 130:
  FUNC_0(VAR_3, VAR_1);
  break;

 case 131:
  FUNC_0(VAR_3, VAR_2);
  FUNC_1(VAR_3);
  break;

 case 128:

  break;

 default:
  FUNC_2(VAR_4);
 }
}
