
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_dport_s {int * cbarg; int (* cbfn ) (int *,int ) ;} ;
typedef int bfa_status_t ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct bfa_dport_s *VAR_0, bfa_status_t VAR_1)
{
 if (VAR_0->cbfn != ((void*)0)) {
  VAR_0->cbfn(VAR_0->cbarg, VAR_1);
  VAR_0->cbfn = ((void*)0);
  VAR_0->cbarg = ((void*)0);
 }
}
