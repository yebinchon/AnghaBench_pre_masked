
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int mdix; int autoneg; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

s32 FUNC_1(struct e1000_hw *VAR_2)
{
 if (!VAR_2->autoneg && (VAR_2->mdix == 0 || VAR_2->mdix == 3)) {
  FUNC_0("Invalid MDI setting detected\n");
  VAR_2->mdix = 1;
  return -VAR_0;
 }
 return VAR_1;
}
