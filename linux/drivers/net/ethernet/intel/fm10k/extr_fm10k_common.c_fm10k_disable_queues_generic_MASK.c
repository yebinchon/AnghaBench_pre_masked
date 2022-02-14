
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int tx_ready; } ;
struct fm10k_hw {int hw_addr; TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (struct fm10k_hw*,int ) ;
 int FUNC_4 (struct fm10k_hw*) ;
 int FUNC_5 (struct fm10k_hw*,int ,int) ;
 int FUNC_6 (int) ;

s32 FUNC_7(struct fm10k_hw *VAR_4, u16 VAR_5)
{
 u32 VAR_6;
 u16 VAR_7, VAR_8;


 VAR_4->mac.tx_ready = 0;

 if (FUNC_0(VAR_4->hw_addr))
  return 0;


 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_6 = FUNC_3(VAR_4, FUNC_2(VAR_7));
  FUNC_5(VAR_4, FUNC_2(VAR_7),
    VAR_6 & ~VAR_3);
  VAR_6 = FUNC_3(VAR_4, FUNC_1(VAR_7));
  FUNC_5(VAR_4, FUNC_1(VAR_7),
    VAR_6 & ~VAR_2);
 }

 FUNC_4(VAR_4);
 FUNC_6(1);


 for (VAR_7 = 0, VAR_8 = VAR_1; VAR_8;) {

  if (VAR_7 == VAR_5)
   return 0;


  VAR_6 = FUNC_3(VAR_4, FUNC_2(VAR_7));
  if (!~VAR_6 || !(VAR_6 & VAR_3)) {
   VAR_6 = FUNC_3(VAR_4, FUNC_1(VAR_7));
   if (!~VAR_6 || !(VAR_6 & VAR_2)) {
    VAR_7++;
    continue;
   }
  }


  VAR_8--;
  if (VAR_8)
   FUNC_6(1);
 }

 return VAR_0;
}
