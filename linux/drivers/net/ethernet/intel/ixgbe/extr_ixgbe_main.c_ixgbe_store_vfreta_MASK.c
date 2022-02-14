
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {scalar_t__* rss_indir_tbl; int num_rx_pools; struct ixgbe_hw hw; } ;


 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,size_t) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (struct ixgbe_adapter*) ;

__attribute__((used)) static void FUNC_4(struct ixgbe_adapter *VAR_0)
{
 u32 VAR_1, VAR_2 = FUNC_3(VAR_0);
 struct ixgbe_hw *VAR_3 = &VAR_0->hw;
 u32 VAR_4 = 0;


 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++) {
  u16 VAR_5 = VAR_0->num_rx_pools;

  VAR_4 |= (u32)VAR_0->rss_indir_tbl[VAR_1] << (VAR_1 & 0x3) * 8;
  if ((VAR_1 & 3) != 3)
   continue;

  while (VAR_5--)
   FUNC_1(VAR_3,
     FUNC_0(VAR_1 >> 2, FUNC_2(VAR_5)),
     VAR_4);
  VAR_4 = 0;
 }
}
