
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl1c_hw {int dummy; } ;


 int FUNC_0 (struct atl1c_hw*,int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;

bool FUNC_2(struct atl1c_hw *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  FUNC_0(VAR_4, VAR_3, &VAR_5);
  if (!(VAR_5 & (VAR_0 | VAR_1)))
   break;
  FUNC_1(10);
 }

 return VAR_6 != VAR_2;
}
