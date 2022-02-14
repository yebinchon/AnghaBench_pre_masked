
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* len; void* ioba; int cmd; int first; } ;
union ibmvnic_crq {TYPE_1__ request_statistics; } ;
typedef int u64 ;
struct net_device {int dummy; } ;
struct ibmvnic_statistics {int dummy; } ;
struct ibmvnic_adapter {int stats_token; int req_tx_queues; int req_rx_queues; TYPE_3__* rx_stats_buffers; TYPE_2__* tx_stats_buffers; int stats_done; } ;
struct ethtool_stats {int dummy; } ;
typedef int crq ;
struct TYPE_9__ {int offset; } ;
struct TYPE_8__ {int interrupts; int bytes; int packets; } ;
struct TYPE_7__ {int dropped_packets; int bytes; int packets; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_1 (struct ibmvnic_adapter*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct ibmvnic_adapter*,union ibmvnic_crq*) ;
 TYPE_4__* VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (union ibmvnic_crq*,int ,int) ;
 struct ibmvnic_adapter* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_3,
          struct ethtool_stats *VAR_4, u64 *VAR_5)
{
 struct ibmvnic_adapter *VAR_6 = FUNC_7(VAR_3);
 union ibmvnic_crq VAR_7;
 int VAR_8, VAR_9;
 int VAR_10;

 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.request_statistics.first = VAR_0;
 VAR_7.request_statistics.cmd = VAR_1;
 VAR_7.request_statistics.ioba = FUNC_3(VAR_6->stats_token);
 VAR_7.request_statistics.len =
     FUNC_3(sizeof(struct ibmvnic_statistics));


 FUNC_5(&VAR_6->stats_done);
 VAR_10 = FUNC_4(VAR_6, &VAR_7);
 if (VAR_10)
  return;
 FUNC_8(&VAR_6->stats_done);

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++)
  VAR_5[VAR_8] = FUNC_2(FUNC_1(VAR_6,
      VAR_2[VAR_8].offset));

 for (VAR_9 = 0; VAR_9 < VAR_6->req_tx_queues; VAR_9++) {
  VAR_5[VAR_8] = VAR_6->tx_stats_buffers[VAR_9].packets;
  VAR_8++;
  VAR_5[VAR_8] = VAR_6->tx_stats_buffers[VAR_9].bytes;
  VAR_8++;
  VAR_5[VAR_8] = VAR_6->tx_stats_buffers[VAR_9].dropped_packets;
  VAR_8++;
 }

 for (VAR_9 = 0; VAR_9 < VAR_6->req_rx_queues; VAR_9++) {
  VAR_5[VAR_8] = VAR_6->rx_stats_buffers[VAR_9].packets;
  VAR_8++;
  VAR_5[VAR_8] = VAR_6->rx_stats_buffers[VAR_9].bytes;
  VAR_8++;
  VAR_5[VAR_8] = VAR_6->rx_stats_buffers[VAR_9].interrupts;
  VAR_8++;
 }
}
