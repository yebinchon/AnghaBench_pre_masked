
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ice_hw {int dummy; } ;
typedef enum ice_block { ____Placeholder_ice_block } ice_block ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ice_hw*,int) ;
 int FUNC_1 (struct ice_hw*,int) ;

__attribute__((used)) static void FUNC_2(struct ice_hw *VAR_1)
{
 u16 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(VAR_1, (enum ice_block)VAR_2);
  FUNC_1(VAR_1, (enum ice_block)VAR_2);
 }
}
