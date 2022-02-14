
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_pf {int hw; int l4_flex_pit_list; int l3_flex_pit_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct i40e_pf*,int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct i40e_pf *VAR_4)
{
 FUNC_2(VAR_4, &VAR_4->l3_flex_pit_list,
      VAR_0);

 FUNC_2(VAR_4, &VAR_4->l4_flex_pit_list,
      VAR_1);


 FUNC_3(&VAR_4->hw,
     FUNC_0(VAR_2),
     FUNC_1(VAR_0,
         3, 1));

 FUNC_3(&VAR_4->hw,
     FUNC_0(VAR_3),
     FUNC_1(VAR_1,
         3, 1));
}
