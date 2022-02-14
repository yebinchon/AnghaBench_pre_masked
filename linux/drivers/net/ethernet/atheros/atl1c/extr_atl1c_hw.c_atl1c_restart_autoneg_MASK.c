
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct atl1c_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct atl1c_hw*) ;
 int FUNC_1 (struct atl1c_hw*,int ,int) ;

int FUNC_2(struct atl1c_hw *VAR_4)
{
 int VAR_5 = 0;
 u16 VAR_6 = VAR_2;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5)
  return VAR_5;
 VAR_6 |= VAR_0 | VAR_1;

 return FUNC_1(VAR_4, VAR_3, VAR_6);
}
