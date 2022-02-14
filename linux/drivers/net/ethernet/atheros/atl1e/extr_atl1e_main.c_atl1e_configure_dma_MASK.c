
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl1e_hw {scalar_t__ dmaw_dly_cnt; scalar_t__ dmar_dly_cnt; scalar_t__ dmaw_block; scalar_t__ dmar_block; } ;
struct atl1e_adapter {struct atl1e_hw hw; } ;


 int FUNC_0 (struct atl1e_hw*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static inline void FUNC_1(struct atl1e_adapter *VAR_12)
{
 struct atl1e_hw *VAR_13 = &VAR_12->hw;
 u32 VAR_14 = 0;

 VAR_14 = VAR_10;
 VAR_14 |= (((u32)VAR_13->dmar_block) & VAR_0)
  << VAR_1;
 VAR_14 |= (((u32)VAR_13->dmaw_block) & VAR_6)
  << VAR_7;
 VAR_14 |= VAR_5 | VAR_4;
 VAR_14 |= (((u32)VAR_13->dmar_dly_cnt) & VAR_2)
  << VAR_3;
 VAR_14 |= (((u32)VAR_13->dmaw_dly_cnt) & VAR_8)
  << VAR_9;

 FUNC_0(VAR_13, VAR_11, VAR_14);
}
