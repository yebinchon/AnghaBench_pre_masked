
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_flash_s {int status; int cbarg; int (* cbfn ) (int ,int ) ;scalar_t__ op_busy; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct bfa_flash_s *VAR_0)
{
 VAR_0->op_busy = 0;
 if (VAR_0->cbfn)
  VAR_0->cbfn(VAR_0->cbarg, VAR_0->status);
}
