
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_ring_desc {int desc3; int desc2; int desc1; int desc0; } ;
struct xgbe_ring_data {struct xgbe_ring_desc* rdesc; } ;
struct xgbe_ring {int dummy; } ;
struct xgbe_prv_data {int netdev; } ;


 struct xgbe_ring_data* FUNC_0 (struct xgbe_ring*,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,unsigned int,int ,int ,int ,int ) ;

void FUNC_3(struct xgbe_prv_data *VAR_0, struct xgbe_ring *VAR_1,
         unsigned int VAR_2)
{
 struct xgbe_ring_data *VAR_3;
 struct xgbe_ring_desc *VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 VAR_4 = VAR_3->rdesc;
 FUNC_2(VAR_0->netdev,
     "RX_NORMAL_DESC[%d RX BY DEVICE] = %08x:%08x:%08x:%08x\n",
     VAR_2, FUNC_1(VAR_4->desc0), FUNC_1(VAR_4->desc1),
     FUNC_1(VAR_4->desc2), FUNC_1(VAR_4->desc3));
}
