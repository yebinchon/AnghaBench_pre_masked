
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct port_info {int port_id; } ;
struct adapter {int ptp_lock; int * ptp_tx_skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 struct skb_shared_hwtstamps* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct skb_shared_hwtstamps*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct adapter*,int ) ;

void FUNC_8(struct adapter *VAR_2, struct port_info *VAR_3)
{
 struct skb_shared_hwtstamps *VAR_4 = ((void*)0);
 u64 VAR_5;

 VAR_4 = FUNC_3(VAR_2->ptp_tx_skb);

 VAR_5 = FUNC_7(VAR_2,
       FUNC_0(VAR_3->port_id, VAR_1));

 VAR_5 |= (u64)FUNC_7(VAR_2,
      FUNC_0(VAR_3->port_id,
           VAR_0)) << 32;
 VAR_4->hwtstamp = FUNC_2(VAR_5);
 FUNC_4(VAR_2->ptp_tx_skb, VAR_4);
 FUNC_1(VAR_2->ptp_tx_skb);
 FUNC_5(&VAR_2->ptp_lock);
 VAR_2->ptp_tx_skb = ((void*)0);
 FUNC_6(&VAR_2->ptp_lock);
}
