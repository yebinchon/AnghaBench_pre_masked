
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bfa_ioc*) ;
 int FUNC_2 (struct bfa_ioc*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct bfa_ioc *VAR_6, enum ioc_event VAR_7)
{
 switch (VAR_7) {
 case 131:
  FUNC_0(VAR_6, VAR_3);
  break;

 case 128:

 case 130:
  VAR_6->cbfn->enable_cbfn(VAR_6->bfa, VAR_0);
  FUNC_0(VAR_6, VAR_2);
  if (VAR_7 != 128)
   FUNC_1(VAR_6);
  break;

 case 129:
  VAR_6->cbfn->enable_cbfn(VAR_6->bfa, VAR_0);
  FUNC_0(VAR_6, VAR_4);
  break;

 case 133:
  FUNC_0(VAR_6, VAR_1);
  break;

 case 134:
  FUNC_0(VAR_6, VAR_5);
  FUNC_2(VAR_6);
  break;

 case 132:
  break;

 default:
  FUNC_3(VAR_7);
 }
}
