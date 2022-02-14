
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at86rf230_state_change {struct at86rf230_local* lp; } ;
struct at86rf230_local {scalar_t__ is_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct at86rf230_local*,struct at86rf230_state_change*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_2)
{
 struct at86rf230_state_change *VAR_3 = VAR_2;
 struct at86rf230_local *VAR_4 = VAR_3->lp;

 VAR_4->is_tx = 0;
 FUNC_0(VAR_4, VAR_3, VAR_0,
         VAR_1);
}
