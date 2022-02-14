
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_pf {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct i40e_vsi *VAR_1)
{
 struct i40e_pf *VAR_2 = VAR_1->back;

 FUNC_0(VAR_0, VAR_2->state);
}
