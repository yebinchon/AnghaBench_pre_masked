
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_pf {int state; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct i40e_vsi*) ;
 int FUNC_3 (struct i40e_vsi*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct i40e_vsi *VAR_1)
{
 struct i40e_pf *VAR_2 = VAR_1->back;

 FUNC_0(FUNC_4());
 while (FUNC_5(VAR_0, VAR_2->state))
  FUNC_6(1000, 2000);
 FUNC_2(VAR_1);

 FUNC_3(VAR_1);
 FUNC_1(VAR_0, VAR_2->state);
}
