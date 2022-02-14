
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_pf {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct i40e_vsi *VAR_2)
{
 struct i40e_pf *VAR_3 = VAR_2->back;
 int VAR_4 = 50;

 while (FUNC_0(VAR_1, VAR_3->state)) {
  VAR_4--;
  if (!VAR_4)
   return -VAR_0;
  FUNC_1(1000, 2000);
 }

 return 0;
}
