
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioc {int ioc_timer; int bfa; TYPE_1__* cbfn; } ;
typedef enum ioc_event { ____Placeholder_ioc_event } ioc_event ;
struct TYPE_2__ {int (* enable_cbfn ) (int ,int ) ;} ;


 int VAR_0 ;






 int FUNC_0 (struct bfa_ioc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bfa_ioc*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct bfa_ioc *VAR_4, enum ioc_event VAR_5)
{
 switch (VAR_5) {
 case 131:
  FUNC_3(&VAR_4->ioc_timer);
  FUNC_0(VAR_4, VAR_3);
  break;

 case 129:
 case 130:
  FUNC_3(&VAR_4->ioc_timer);

 case 128:
  VAR_4->cbfn->enable_cbfn(VAR_4->bfa, VAR_0);
  FUNC_0(VAR_4, VAR_2);
  if (VAR_5 != 129)
   FUNC_1(VAR_4);
  break;

 case 133:
  FUNC_3(&VAR_4->ioc_timer);
  FUNC_0(VAR_4, VAR_1);
  break;

 case 132:
  break;

 default:
  FUNC_2(VAR_5);
 }
}
