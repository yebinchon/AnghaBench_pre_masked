
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct igc_hw {int dummy; } ;
struct igc_adapter {TYPE_1__* mac_table; struct igc_hw hw; } ;
typedef int __le32 ;
typedef int __le16 ;
struct TYPE_2__ {int state; size_t queue; int * addr; } ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int ,size_t) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct igc_adapter *VAR_3, u32 VAR_4)
{
 u8 *VAR_5 = VAR_3->mac_table[VAR_4].addr;
 struct igc_hw *VAR_6 = &VAR_3->hw;
 u32 VAR_7, VAR_8;






 VAR_7 = FUNC_4((__le32 *)(VAR_5));
 VAR_8 = FUNC_3((__le16 *)(VAR_5 + 4));


 if (VAR_3->mac_table[VAR_4].state & VAR_0) {
  if (FUNC_2(VAR_5))
   VAR_8 |= VAR_1;

  VAR_8 |= VAR_2 <<
   VAR_3->mac_table[VAR_4].queue;
 }

 FUNC_5(FUNC_1(VAR_4), VAR_7);
 FUNC_6();
 FUNC_5(FUNC_0(VAR_4), VAR_8);
 FUNC_6();
}
