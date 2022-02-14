
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_pf {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;

u32 FUNC_1(struct i40e_pf *VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_5 = FUNC_0(&VAR_4->hw, VAR_0);
 VAR_6 = (VAR_5 & VAR_3) +
      ((VAR_5 & VAR_1) >>
        VAR_2);
 return VAR_6;
}
