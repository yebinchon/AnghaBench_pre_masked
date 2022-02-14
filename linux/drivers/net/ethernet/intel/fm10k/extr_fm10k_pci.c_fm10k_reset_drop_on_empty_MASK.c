
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fm10k_hw {int dummy; } ;
struct fm10k_intfc {int rx_overrun_vf; int rx_overrun_pf; struct fm10k_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (struct fm10k_hw*,int ) ;
 int FUNC_4 (struct fm10k_hw*,int ,int const) ;

__attribute__((used)) static void FUNC_5(struct fm10k_intfc *VAR_3, u32 VAR_4)
{
 struct fm10k_hw *VAR_5 = &VAR_3->hw;
 const u32 VAR_6 = VAR_2;
 u32 VAR_7;
 int VAR_8;

 if (!(VAR_4 & VAR_0))
  return;

 VAR_7 = FUNC_3(VAR_5, FUNC_1(7));
 if (VAR_7)
  FUNC_4(VAR_5, FUNC_1(7), VAR_7);
 for (VAR_8 = 255;;) {
  if (VAR_7 & FUNC_0(31)) {
   if (VAR_8 < VAR_1) {
    VAR_3->rx_overrun_pf++;
    FUNC_4(VAR_5, FUNC_2(VAR_8), VAR_6);
   } else {
    VAR_3->rx_overrun_vf++;
   }
  }

  VAR_7 *= 2;
  if (!VAR_7)
   VAR_8 &= ~(32 - 1);

  if (!VAR_8)
   break;

  if (VAR_8-- % 32)
   continue;

  VAR_7 = FUNC_3(VAR_5, FUNC_1(VAR_8 / 32));
  if (VAR_7)
   FUNC_4(VAR_5, FUNC_1(VAR_8 / 32), VAR_7);
 }
}
