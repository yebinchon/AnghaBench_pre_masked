
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

int FUNC_1(struct atl1c_hw *VAR_4)
{
 u32 VAR_5;

 FUNC_0(VAR_4, VAR_2, &VAR_5);
 if (VAR_5 & VAR_3)
  return 1;

 FUNC_0(VAR_4, VAR_1, &VAR_5);
 if (VAR_5 & VAR_0)
  return 1;
 return 0;
}
