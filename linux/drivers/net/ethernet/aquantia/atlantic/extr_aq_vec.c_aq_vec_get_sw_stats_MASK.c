
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct aq_vec_s {int dummy; } ;
struct aq_ring_stats_tx_s {scalar_t__ errors; scalar_t__ lro_packets; scalar_t__ jumbo_packets; scalar_t__ queue_restarts; scalar_t__ packets; } ;
struct aq_ring_stats_rx_s {scalar_t__ errors; scalar_t__ lro_packets; scalar_t__ jumbo_packets; scalar_t__ queue_restarts; scalar_t__ packets; } ;


 int FUNC_0 (struct aq_vec_s*,struct aq_ring_stats_tx_s*,struct aq_ring_stats_tx_s*) ;
 int FUNC_1 (struct aq_ring_stats_tx_s*,unsigned int,int) ;

int FUNC_2(struct aq_vec_s *VAR_0, u64 *VAR_1, unsigned int *VAR_2)
{
 unsigned int VAR_3 = 0U;
 struct aq_ring_stats_rx_s VAR_4;
 struct aq_ring_stats_tx_s VAR_5;

 FUNC_1(&VAR_4, 0U, sizeof(struct aq_ring_stats_rx_s));
 FUNC_1(&VAR_5, 0U, sizeof(struct aq_ring_stats_tx_s));
 FUNC_0(VAR_0, &VAR_4, &VAR_5);



 VAR_1[VAR_3] += VAR_4.packets;
 VAR_1[++VAR_3] += VAR_5.packets;
 VAR_1[++VAR_3] += VAR_5.queue_restarts;
 VAR_1[++VAR_3] += VAR_4.jumbo_packets;
 VAR_1[++VAR_3] += VAR_4.lro_packets;
 VAR_1[++VAR_3] += VAR_4.errors;

 if (VAR_2)
  *VAR_2 = ++VAR_3;

 return 0;
}
