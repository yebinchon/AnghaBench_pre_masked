
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {int stats_lock; int stats; struct e1000_hw hw; } ;


 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int ,int ,int ) ;
 int FUNC_1 (struct e1000_hw*,int *,int ,int const*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_4(struct e1000_adapter *VAR_0,
        u8 VAR_1, u8 VAR_2,
        u32 VAR_3, const u8 *VAR_4)
{
 struct e1000_hw *VAR_5 = &VAR_0->hw;
 u8 VAR_6 = *(VAR_4 + VAR_3 - 1);

 if (FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3, VAR_6)) {
  unsigned long VAR_7;

  FUNC_2(&VAR_0->stats_lock, VAR_7);
  FUNC_1(VAR_5, &VAR_0->stats, VAR_3, VAR_4);
  FUNC_3(&VAR_0->stats_lock, VAR_7);

  return 1;
 }

 return 0;
}
