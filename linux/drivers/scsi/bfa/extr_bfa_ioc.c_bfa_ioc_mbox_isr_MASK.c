
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int msg_class; } ;
struct bfi_mbmsg_s {TYPE_2__ mh; } ;
struct bfa_ioc_mbox_mod_s {TYPE_1__* mbhdlr; } ;
struct bfa_ioc_s {struct bfa_ioc_mbox_mod_s mbox_mod; } ;
struct TYPE_3__ {int cbarg; int (* cbfn ) (int ,struct bfi_mbmsg_s*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_ioc_s*,struct bfi_mbmsg_s*) ;
 int FUNC_1 (struct bfa_ioc_s*) ;
 int FUNC_2 (struct bfa_ioc_s*) ;
 scalar_t__ FUNC_3 (struct bfa_ioc_s*,struct bfi_mbmsg_s*) ;
 int FUNC_4 (int ,struct bfi_mbmsg_s*) ;

void
FUNC_5(struct bfa_ioc_s *VAR_2)
{
 struct bfa_ioc_mbox_mod_s *VAR_3 = &VAR_2->mbox_mod;
 struct bfi_mbmsg_s VAR_4;
 int VAR_5;

 if (FUNC_3(VAR_2, &VAR_4)) {



  VAR_5 = VAR_4.mh.msg_class;
  if (VAR_5 == VAR_0) {
   FUNC_0(VAR_2, &VAR_4);
   return;
  }

  if ((VAR_5 >= VAR_1) || (VAR_3->mbhdlr[VAR_5].cbfn == ((void*)0)))
   return;

  VAR_3->mbhdlr[VAR_5].cbfn(VAR_3->mbhdlr[VAR_5].cbarg, &VAR_4);
 }

 FUNC_1(VAR_2);




 FUNC_2(VAR_2);
}
