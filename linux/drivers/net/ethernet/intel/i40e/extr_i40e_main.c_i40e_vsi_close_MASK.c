
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {scalar_t__ current_netdev_flags; int state; struct i40e_pf* back; } ;
struct i40e_pf {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i40e_vsi*) ;
 int FUNC_1 (struct i40e_vsi*) ;
 int FUNC_2 (struct i40e_vsi*) ;
 int FUNC_3 (struct i40e_vsi*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct i40e_vsi *VAR_4)
{
 struct i40e_pf *VAR_5 = VAR_4->back;
 if (!FUNC_5(VAR_3, VAR_4->state))
  FUNC_0(VAR_4);
 FUNC_1(VAR_4);
 FUNC_3(VAR_4);
 FUNC_2(VAR_4);
 VAR_4->current_netdev_flags = 0;
 FUNC_4(VAR_1, VAR_5->state);
 if (FUNC_6(VAR_2, VAR_5->state))
  FUNC_4(VAR_0, VAR_5->state);
}
