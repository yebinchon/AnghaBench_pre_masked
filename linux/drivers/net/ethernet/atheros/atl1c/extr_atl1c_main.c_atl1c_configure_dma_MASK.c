
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl1c_hw {int dmar_block; } ;
struct atl1c_adapter {struct atl1c_hw hw; } ;


 int FUNC_0 (struct atl1c_hw*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_2(struct atl1c_adapter *VAR_9)
{
 struct atl1c_hw *VAR_10 = &VAR_9->hw;
 u32 VAR_11;

 VAR_11 = FUNC_1(VAR_2, VAR_3) |
  VAR_5 |
  FUNC_1(VAR_4, VAR_10->dmar_block) |
  FUNC_1(VAR_6, VAR_7) |
  FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_10, VAR_8, VAR_11);
}
