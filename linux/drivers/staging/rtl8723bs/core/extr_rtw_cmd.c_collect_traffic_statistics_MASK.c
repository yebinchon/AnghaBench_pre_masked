
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_6__ {int tx_bytes; int rx_bytes; int cur_tx_bytes; int last_tx_bytes; int cur_rx_bytes; int last_rx_bytes; void* cur_rx_tp; void* cur_tx_tp; int rx_drop; int rx_pkts; int tx_drop; int tx_pkts; } ;
struct dvobj_priv {TYPE_3__ traffic_stat; } ;
struct TYPE_5__ {int rx_bytes; int rx_drop; int rx_pkts; } ;
struct TYPE_4__ {int tx_bytes; int tx_drop; int tx_pkts; } ;
struct adapter {TYPE_2__ recvpriv; TYPE_1__ xmitpriv; } ;


 struct dvobj_priv* FUNC_0 (struct adapter*) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_0)
{
 struct dvobj_priv *VAR_1 = FUNC_0(VAR_0);


 VAR_1->traffic_stat.tx_bytes = VAR_0->xmitpriv.tx_bytes;
 VAR_1->traffic_stat.tx_pkts = VAR_0->xmitpriv.tx_pkts;
 VAR_1->traffic_stat.tx_drop = VAR_0->xmitpriv.tx_drop;


 VAR_1->traffic_stat.rx_bytes = VAR_0->recvpriv.rx_bytes;
 VAR_1->traffic_stat.rx_pkts = VAR_0->recvpriv.rx_pkts;
 VAR_1->traffic_stat.rx_drop = VAR_0->recvpriv.rx_drop;


 VAR_1->traffic_stat.cur_tx_bytes = VAR_1->traffic_stat.tx_bytes - VAR_1->traffic_stat.last_tx_bytes;
 VAR_1->traffic_stat.cur_rx_bytes = VAR_1->traffic_stat.rx_bytes - VAR_1->traffic_stat.last_rx_bytes;
 VAR_1->traffic_stat.last_tx_bytes = VAR_1->traffic_stat.tx_bytes;
 VAR_1->traffic_stat.last_rx_bytes = VAR_1->traffic_stat.rx_bytes;

 VAR_1->traffic_stat.cur_tx_tp = (u32)(VAR_1->traffic_stat.cur_tx_bytes * 8/2/1024/1024);
 VAR_1->traffic_stat.cur_rx_tp = (u32)(VAR_1->traffic_stat.cur_rx_bytes * 8/2/1024/1024);
}
