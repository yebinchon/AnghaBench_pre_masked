
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbevf_adapter {int num_rx_queues; int* rss_key; int* rss_indir_tbl; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ixgbevf_adapter *VAR_8)
{
 struct ixgbe_hw *VAR_9 = &VAR_8->hw;
 u32 VAR_10 = 0, VAR_11 = 0;
 u16 VAR_12 = VAR_8->num_rx_queues;
 u8 VAR_13, VAR_14;


 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++)
  FUNC_2(VAR_9, FUNC_1(VAR_13), *(VAR_8->rss_key + VAR_13));

 for (VAR_13 = 0, VAR_14 = 0; VAR_13 < VAR_1; VAR_13++, VAR_14++) {
  if (VAR_14 == VAR_12)
   VAR_14 = 0;

  VAR_8->rss_indir_tbl[VAR_13] = VAR_14;

  VAR_11 |= VAR_14 << (VAR_13 & 0x3) * 8;
  if ((VAR_13 & 3) == 3) {
   FUNC_2(VAR_9, FUNC_0(VAR_13 >> 2), VAR_11);
   VAR_11 = 0;
  }
 }


 VAR_10 |= VAR_4 |
  VAR_5 |
  VAR_6 |
  VAR_7;

 VAR_10 |= VAR_3;

 FUNC_2(VAR_9, VAR_2, VAR_10);
}
