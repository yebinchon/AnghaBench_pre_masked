
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_sfp_s {int (* cbfn ) (int ,int ) ;scalar_t__ lock; int status; int cbarg; } ;


 int FUNC_0 (struct bfa_sfp_s*,scalar_t__) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct bfa_sfp_s *VAR_0)
{
 FUNC_0(VAR_0, VAR_0->lock);
 if (VAR_0->cbfn)
  VAR_0->cbfn(VAR_0->cbarg, VAR_0->status);
 VAR_0->lock = 0;
 VAR_0->cbfn = ((void*)0);
}
