
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ixgbe_adv_rx_desc {int dummy; } ixgbe_adv_rx_desc ;
struct sk_buff {int dummy; } ;
struct ixgbe_ring {int last_rx_timestamp; int q_vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct sk_buff*) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (union ixgbe_adv_rx_desc*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline void FUNC_4(struct ixgbe_ring *VAR_3,
      union ixgbe_adv_rx_desc *VAR_4,
      struct sk_buff *VAR_5)
{
 if (FUNC_3(FUNC_2(VAR_4, VAR_1))) {
  FUNC_0(VAR_3->q_vector, VAR_5);
  return;
 }

 if (FUNC_3(!FUNC_2(VAR_4, VAR_0)))
  return;

 FUNC_1(VAR_3->q_vector, VAR_5);




 VAR_3->last_rx_timestamp = VAR_2;
}
