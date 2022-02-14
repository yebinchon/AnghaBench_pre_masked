
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvnic_tx_queue_stats {int dummy; } ;
struct ibmvnic_rx_queue_stats {int dummy; } ;
struct ibmvnic_adapter {void* rx_stats_buffers; void* tx_stats_buffers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct ibmvnic_adapter *VAR_3)
{
 VAR_3->tx_stats_buffers =
    FUNC_0(VAR_2,
     sizeof(struct ibmvnic_tx_queue_stats),
     VAR_1);
 if (!VAR_3->tx_stats_buffers)
  return -VAR_0;

 VAR_3->rx_stats_buffers =
    FUNC_0(VAR_2,
     sizeof(struct ibmvnic_rx_queue_stats),
     VAR_1);
 if (!VAR_3->rx_stats_buffers)
  return -VAR_0;

 return 0;
}
