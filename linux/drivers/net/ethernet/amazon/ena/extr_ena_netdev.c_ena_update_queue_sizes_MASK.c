
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct ena_adapter {void* requested_rx_ring_size; void* requested_tx_ring_size; int netdev; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ena_adapter*) ;
 int FUNC_2 (struct ena_adapter*) ;
 int FUNC_3 (int ,int *) ;

int FUNC_4(struct ena_adapter *VAR_1,
      u32 VAR_2,
      u32 VAR_3)
{
 bool VAR_4;

 VAR_4 = FUNC_3(VAR_0, &VAR_1->flags);
 FUNC_0(VAR_1->netdev);
 VAR_1->requested_tx_ring_size = VAR_2;
 VAR_1->requested_rx_ring_size = VAR_3;
 FUNC_1(VAR_1);
 return VAR_4 ? FUNC_2(VAR_1) : 0;
}
