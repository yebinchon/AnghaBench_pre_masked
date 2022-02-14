
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_sfp_s {int (* state_query_cbfn ) (int ,int ) ;scalar_t__ state_query_lock; scalar_t__ portspeed; int status; int state_query_cbarg; int * media; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bfa_sfp_s*) ;
 int FUNC_1 (struct bfa_sfp_s*,scalar_t__) ;
 int FUNC_2 (struct bfa_sfp_s*,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct bfa_sfp_s *VAR_1)
{
 FUNC_2(VAR_1, VAR_1->portspeed);
 if (VAR_1->media) {
  FUNC_0(VAR_1);
  if (VAR_1->state_query_cbfn)
   VAR_1->state_query_cbfn(VAR_1->state_query_cbarg,
     VAR_1->status);
  VAR_1->media = ((void*)0);
 }

 if (VAR_1->portspeed) {
  VAR_1->status = FUNC_1(VAR_1, VAR_1->portspeed);
  if (VAR_1->state_query_cbfn)
   VAR_1->state_query_cbfn(VAR_1->state_query_cbarg,
     VAR_1->status);
  VAR_1->portspeed = VAR_0;
 }

 VAR_1->state_query_lock = 0;
 VAR_1->state_query_cbfn = ((void*)0);
}
