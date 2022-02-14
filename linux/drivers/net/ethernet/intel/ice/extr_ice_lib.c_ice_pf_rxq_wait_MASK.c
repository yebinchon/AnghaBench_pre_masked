
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_pf {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct ice_pf *VAR_3, int VAR_4, bool VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_5 == !!(FUNC_1(&VAR_3->hw, FUNC_0(VAR_4)) &
         VAR_2))
   return 0;

  FUNC_2(20, 40);
 }

 return -VAR_0;
}
