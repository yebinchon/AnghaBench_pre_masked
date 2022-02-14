
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct tx_ring_info {int tx_channel; } ;
struct rx_ring_info {int rx_channel; } ;
struct niu_parent {int* ldg_map; } ;
struct niu {int num_rx_rings; int num_tx_rings; struct tx_ring_info* tx_rings; struct rx_ring_info* rx_rings; struct niu_parent* parent; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (struct niu*,struct rx_ring_info*,int) ;
 int FUNC_4 (struct niu*,struct tx_ring_info*,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct niu *VAR_1, int VAR_2, u64 VAR_3)
{
 struct niu_parent *VAR_4 = VAR_1->parent;
 u32 VAR_5, VAR_6;
 int VAR_7;

 VAR_6 = (VAR_3 >> 32);
 VAR_5 = (VAR_3 & 0xffffffff);

 for (VAR_7 = 0; VAR_7 < VAR_1->num_rx_rings; VAR_7++) {
  struct rx_ring_info *VAR_8 = &VAR_1->rx_rings[VAR_7];
  int VAR_9 = FUNC_0(VAR_8->rx_channel);

  if (VAR_4->ldg_map[VAR_9] != VAR_2)
   continue;

  FUNC_5(FUNC_2(VAR_9), VAR_0);
  if (VAR_5 & (1 << VAR_8->rx_channel))
   FUNC_3(VAR_1, VAR_8, VAR_9);
 }

 for (VAR_7 = 0; VAR_7 < VAR_1->num_tx_rings; VAR_7++) {
  struct tx_ring_info *VAR_10 = &VAR_1->tx_rings[VAR_7];
  int VAR_11 = FUNC_1(VAR_10->tx_channel);

  if (VAR_4->ldg_map[VAR_11] != VAR_2)
   continue;

  FUNC_5(FUNC_2(VAR_11), VAR_0);
  if (VAR_6 & (1 << VAR_10->tx_channel))
   FUNC_4(VAR_1, VAR_10, VAR_11);
 }
}
