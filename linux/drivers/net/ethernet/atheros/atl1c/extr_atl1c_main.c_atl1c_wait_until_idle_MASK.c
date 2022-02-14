
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl1c_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct atl1c_hw*,int ,int*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(struct atl1c_hw *VAR_2, u32 VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_0(VAR_2, VAR_1, &VAR_5);
  if ((VAR_5 & VAR_3) == 0)
   return 0;
  FUNC_1(1);
 }
 return VAR_5;
}
