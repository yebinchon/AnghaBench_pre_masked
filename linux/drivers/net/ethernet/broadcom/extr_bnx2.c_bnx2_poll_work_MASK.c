
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2_tx_ring_info {scalar_t__ hw_tx_cons; } ;
struct bnx2_rx_ring_info {scalar_t__ rx_cons; } ;
struct bnx2_napi {struct bnx2_rx_ring_info rx_ring; struct bnx2_tx_ring_info tx_ring; } ;
struct bnx2 {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2_napi*) ;
 scalar_t__ FUNC_1 (struct bnx2_napi*) ;
 scalar_t__ FUNC_2 (struct bnx2*,struct bnx2_napi*,int) ;
 int FUNC_3 (struct bnx2*,struct bnx2_napi*,int ) ;

__attribute__((used)) static int FUNC_4(struct bnx2 *VAR_0, struct bnx2_napi *VAR_1,
     int VAR_2, int VAR_3)
{
 struct bnx2_tx_ring_info *VAR_4 = &VAR_1->tx_ring;
 struct bnx2_rx_ring_info *VAR_5 = &VAR_1->rx_ring;

 if (FUNC_1(VAR_1) != VAR_4->hw_tx_cons)
  FUNC_3(VAR_0, VAR_1, 0);

 if (FUNC_0(VAR_1) != VAR_5->rx_cons)
  VAR_2 += FUNC_2(VAR_0, VAR_1, VAR_3 - VAR_2);

 return VAR_2;
}
