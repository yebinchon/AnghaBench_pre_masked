
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_mbox_cmd_s {int dummy; } ;
struct bfa_ioc_mbox_mod_s {int cmd_q; } ;
struct bfa_ioc_s {struct bfa_ioc_mbox_mod_s mbox_mod; } ;


 int FUNC_0 (int *,struct bfa_mbox_cmd_s**) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct bfa_ioc_s *VAR_0)
{
 struct bfa_ioc_mbox_mod_s *VAR_1 = &VAR_0->mbox_mod;
 struct bfa_mbox_cmd_s *VAR_2;

 while (!FUNC_1(&VAR_1->cmd_q))
  FUNC_0(&VAR_1->cmd_q, &VAR_2);
}
