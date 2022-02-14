
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsi_hw {int ps_state; } ;
typedef enum ps_state { ____Placeholder_ps_state } ps_state ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct rsi_hw *VAR_1,
           enum ps_state VAR_2)
{
 FUNC_0(VAR_0, "PS state changed %s => %s\n",
  FUNC_1(VAR_1->ps_state),
  FUNC_1(VAR_2));

 VAR_1->ps_state = VAR_2;
}
