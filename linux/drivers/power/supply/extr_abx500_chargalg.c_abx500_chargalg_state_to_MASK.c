
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct abx500_chargalg {int charge_state; int dev; } ;
typedef enum abx500_chargalg_states { ____Placeholder_abx500_chargalg_states } abx500_chargalg_states ;


 int FUNC_0 (int ,char*,char*,int,int ,int,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_1(struct abx500_chargalg *VAR_1,
 enum abx500_chargalg_states VAR_2)
{
 FUNC_0(VAR_1->dev,
  "State changed: %s (From state: [%d] %s =to=> [%d] %s )\n",
  VAR_1->charge_state == VAR_2 ? "NO" : "YES",
  VAR_1->charge_state,
  VAR_0[VAR_1->charge_state],
  VAR_2,
  VAR_0[VAR_2]);

 VAR_1->charge_state = VAR_2;
}
