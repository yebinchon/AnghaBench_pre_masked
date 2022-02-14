
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_hw_if {int (* disable_int ) (struct xgbe_channel*,int) ;} ;
struct xgbe_prv_data {struct xgbe_hw_if hw_if; } ;
struct xgbe_channel {scalar_t__ rx_ring; scalar_t__ tx_ring; } ;
typedef enum xgbe_int { ____Placeholder_xgbe_int } xgbe_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xgbe_channel*,int) ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_3,
       struct xgbe_channel *VAR_4)
{
 struct xgbe_hw_if *VAR_5 = &VAR_3->hw_if;
 enum xgbe_int VAR_6;

 if (VAR_4->tx_ring && VAR_4->rx_ring)
  VAR_6 = VAR_2;
 else if (VAR_4->tx_ring)
  VAR_6 = VAR_1;
 else if (VAR_4->rx_ring)
  VAR_6 = VAR_0;
 else
  return;

 VAR_5->disable_int(VAR_4, VAR_6);
}
