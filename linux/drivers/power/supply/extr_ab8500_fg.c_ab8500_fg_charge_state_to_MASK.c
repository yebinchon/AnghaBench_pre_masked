
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ab8500_fg {size_t charge_state; int dev; } ;
typedef enum ab8500_fg_charge_state { ____Placeholder_ab8500_fg_charge_state } ab8500_fg_charge_state ;


 int * VAR_0 ;
 int FUNC_0 (int ,char*,size_t,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct ab8500_fg *VAR_1,
 enum ab8500_fg_charge_state VAR_2)
{
 FUNC_0(VAR_1->dev, "Charge state from %d [%s] to %d [%s]\n",
  VAR_1->charge_state,
  VAR_0[VAR_1->charge_state],
  VAR_2,
  VAR_0[VAR_2]);

 VAR_1->charge_state = VAR_2;
}
