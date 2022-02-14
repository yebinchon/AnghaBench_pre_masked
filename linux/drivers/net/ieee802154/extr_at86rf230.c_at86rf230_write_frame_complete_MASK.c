
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct at86rf230_state_change {TYPE_1__ trx; struct at86rf230_local* lp; } ;
struct at86rf230_local {int slp_tr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct at86rf230_local*,int ,int ,struct at86rf230_state_change*,int *) ;
 int FUNC_1 (struct at86rf230_local*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2)
{
 struct at86rf230_state_change *VAR_3 = VAR_2;
 struct at86rf230_local *VAR_4 = VAR_3->lp;

 VAR_3->trx.len = 2;

 if (FUNC_2(VAR_4->slp_tr))
  FUNC_1(VAR_4);
 else
  FUNC_0(VAR_4, VAR_0, VAR_1, VAR_3,
       ((void*)0));
}
