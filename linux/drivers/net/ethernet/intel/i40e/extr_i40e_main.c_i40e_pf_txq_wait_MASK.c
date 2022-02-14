
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_pf {int hw; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct i40e_pf *VAR_3, int VAR_4, bool VAR_5)
{
 int VAR_6;
 u32 VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_7 = FUNC_1(&VAR_3->hw, FUNC_0(VAR_4));
  if (VAR_5 == !!(VAR_7 & VAR_1))
   break;

  FUNC_2(10, 20);
 }
 if (VAR_6 >= VAR_2)
  return -VAR_0;

 return 0;
}
