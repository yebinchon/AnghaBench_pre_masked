
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct fm10k_ring {int reg_idx; } ;
struct fm10k_hw {int dummy; } ;
struct fm10k_intfc {int netdev; struct fm10k_hw hw; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct fm10k_hw*,int ) ;
 int FUNC_2 (struct fm10k_intfc*,int ,int ,char*,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct fm10k_intfc *VAR_2,
     struct fm10k_ring *VAR_3)
{
 struct fm10k_hw *VAR_4 = &VAR_2->hw;
 int VAR_5 = 10;
 u32 VAR_6;
 u8 VAR_7 = VAR_3->reg_idx;


 if (FUNC_1(VAR_4, FUNC_0(VAR_7)) & VAR_0)
  return;


 do {
  FUNC_3(1000, 2000);
  VAR_6 = FUNC_1(VAR_4, FUNC_0(VAR_7));
 } while (!(VAR_6 & VAR_0) && --VAR_5);
 if (!VAR_5)
  FUNC_2(VAR_2, VAR_1, VAR_2->netdev,
     "Could not enable Tx Queue %d\n", VAR_7);
}
