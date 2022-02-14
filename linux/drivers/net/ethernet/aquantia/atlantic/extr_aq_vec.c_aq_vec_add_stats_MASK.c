
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aq_vec_s {unsigned int tx_rings; struct aq_ring_s** ring; } ;
struct aq_ring_stats_tx_s {scalar_t__ queue_restarts; scalar_t__ errors; scalar_t__ bytes; scalar_t__ packets; } ;
struct aq_ring_stats_rx_s {scalar_t__ pg_reuses; scalar_t__ pg_flips; scalar_t__ pg_losts; scalar_t__ lro_packets; scalar_t__ jumbo_packets; scalar_t__ errors; scalar_t__ bytes; scalar_t__ packets; } ;
struct TYPE_2__ {struct aq_ring_stats_rx_s rx; struct aq_ring_stats_tx_s tx; } ;
struct aq_ring_s {TYPE_1__ stats; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

void FUNC_0(struct aq_vec_s *VAR_2,
        struct aq_ring_stats_rx_s *VAR_3,
        struct aq_ring_stats_tx_s *VAR_4)
{
 struct aq_ring_s *VAR_5 = ((void*)0);
 unsigned int VAR_6 = 0U;

 for (VAR_6 = 0U, VAR_5 = VAR_2->ring[0];
  VAR_2->tx_rings > VAR_6; ++VAR_6, VAR_5 = VAR_2->ring[VAR_6]) {
  struct aq_ring_stats_tx_s *VAR_7 = &VAR_5[VAR_1].stats.tx;
  struct aq_ring_stats_rx_s *VAR_8 = &VAR_5[VAR_0].stats.rx;

  VAR_3->packets += VAR_8->packets;
  VAR_3->bytes += VAR_8->bytes;
  VAR_3->errors += VAR_8->errors;
  VAR_3->jumbo_packets += VAR_8->jumbo_packets;
  VAR_3->lro_packets += VAR_8->lro_packets;
  VAR_3->pg_losts += VAR_8->pg_losts;
  VAR_3->pg_flips += VAR_8->pg_flips;
  VAR_3->pg_reuses += VAR_8->pg_reuses;

  VAR_4->packets += VAR_7->packets;
  VAR_4->bytes += VAR_7->bytes;
  VAR_4->errors += VAR_7->errors;
  VAR_4->queue_restarts += VAR_7->queue_restarts;
 }
}
