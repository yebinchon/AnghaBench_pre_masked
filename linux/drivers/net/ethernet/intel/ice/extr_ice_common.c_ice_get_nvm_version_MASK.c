
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct ice_nvm_info {int oem_ver; int ver; } ;
struct ice_hw {struct ice_nvm_info nvm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_0(struct ice_hw *VAR_9, u8 *VAR_10, u16 *VAR_11,
      u8 *VAR_12, u8 *VAR_13, u8 *VAR_14)
{
 struct ice_nvm_info *VAR_15 = &VAR_9->nvm;

 *VAR_10 = (u8)((VAR_15->oem_ver & VAR_6) >> VAR_8);
 *VAR_12 = (u8)(VAR_15->oem_ver & VAR_7);
 *VAR_11 = (u16)((VAR_15->oem_ver & VAR_4) >>
      VAR_5);
 *VAR_13 = (VAR_15->ver & VAR_0) >> VAR_1;
 *VAR_14 = (VAR_15->ver & VAR_2) >> VAR_3;
}
