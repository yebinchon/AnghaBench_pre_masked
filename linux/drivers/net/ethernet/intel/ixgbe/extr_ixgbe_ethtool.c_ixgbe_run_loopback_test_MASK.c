
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ixgbe_ring {int count; } ;
struct ixgbe_adapter {int flags; struct ixgbe_ring test_rx_ring; struct ixgbe_ring test_tx_ring; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct ixgbe_ring*,struct ixgbe_ring*,unsigned int) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 int FUNC_3 (struct sk_buff*,struct ixgbe_adapter*,struct ixgbe_ring*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct ixgbe_adapter *VAR_3)
{
 struct ixgbe_ring *VAR_4 = &VAR_3->test_tx_ring;
 struct ixgbe_ring *VAR_5 = &VAR_3->test_rx_ring;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 = 0;
 unsigned int VAR_11 = 1024;
 netdev_tx_t VAR_12;
 struct sk_buff *VAR_13;
 u32 VAR_14 = VAR_3->flags;


 VAR_3->flags &= ~VAR_1;


 VAR_13 = FUNC_0(VAR_11, VAR_0);
 if (!VAR_13)
  return 11;


 FUNC_2(VAR_13, VAR_11);
 FUNC_7(VAR_13, VAR_11);







 if (VAR_5->count <= VAR_4->count)
  VAR_8 = ((VAR_4->count / 64) * 2) + 1;
 else
  VAR_8 = ((VAR_5->count / 64) * 2) + 1;

 for (VAR_7 = 0; VAR_7 <= VAR_8; VAR_7++) {

  VAR_9 = 0;


  for (VAR_6 = 0; VAR_6 < 64; VAR_6++) {
   FUNC_6(VAR_13);
   VAR_12 = FUNC_3(VAR_13,
          VAR_3,
          VAR_4);
   if (VAR_12 == VAR_2)
    VAR_9++;
  }

  if (VAR_9 != 64) {
   VAR_10 = 12;
   break;
  }


  FUNC_5(200);

  VAR_9 = FUNC_1(VAR_5, VAR_4, VAR_11);
  if (VAR_9 != 64) {
   VAR_10 = 13;
   break;
  }
 }


 FUNC_4(VAR_13);
 VAR_3->flags = VAR_14;

 return VAR_10;
}
