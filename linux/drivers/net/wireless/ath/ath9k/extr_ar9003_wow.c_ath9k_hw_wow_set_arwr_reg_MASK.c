
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int is_pciexpress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath_hw*,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ath_hw *VAR_4)
{
 u32 VAR_5;

 if (!VAR_4->is_pciexpress)
  return;






 VAR_5 = FUNC_0(VAR_4, VAR_0);
 VAR_5 &= ~VAR_3;
 VAR_5 |= VAR_2;
 VAR_5 |= VAR_1;

 FUNC_1(VAR_4, VAR_0, VAR_5);
}
