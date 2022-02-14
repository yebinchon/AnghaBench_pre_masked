
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at86rf230_state_change {struct at86rf230_local* lp; } ;
struct at86rf230_local {scalar_t__ is_tx_from_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct at86rf230_local*,struct at86rf230_state_change*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(void *VAR_4)
{
 struct at86rf230_state_change *VAR_5 = VAR_4;
 struct at86rf230_local *VAR_6 = VAR_5->lp;


 if (VAR_6->is_tx_from_off)
  FUNC_0(VAR_6, VAR_5, VAR_0,
          VAR_2);
 else
  FUNC_0(VAR_6, VAR_5, VAR_1,
          VAR_3);
}
