
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ rx_errors; scalar_t__ tx_errors; scalar_t__ tx_packets; scalar_t__ rx_packets; } ;
struct dpaa_percpu_priv {TYPE_1__ stats; scalar_t__ tx_frag_skbuffs; scalar_t__ tx_confirm; scalar_t__ in_interrupt; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct dpaa_percpu_priv *VAR_1, int VAR_2,
         int VAR_3, u64 *VAR_4, u64 *VAR_5)
{
 int VAR_6 = VAR_2 + 1;
 int VAR_7 = 0, VAR_8;


 VAR_5[VAR_7 * VAR_6 + VAR_3] = VAR_1->in_interrupt;
 VAR_5[VAR_7++ * VAR_6 + VAR_2] += VAR_1->in_interrupt;

 VAR_5[VAR_7 * VAR_6 + VAR_3] = VAR_1->stats.rx_packets;
 VAR_5[VAR_7++ * VAR_6 + VAR_2] += VAR_1->stats.rx_packets;

 VAR_5[VAR_7 * VAR_6 + VAR_3] = VAR_1->stats.tx_packets;
 VAR_5[VAR_7++ * VAR_6 + VAR_2] += VAR_1->stats.tx_packets;

 VAR_5[VAR_7 * VAR_6 + VAR_3] = VAR_1->tx_confirm;
 VAR_5[VAR_7++ * VAR_6 + VAR_2] += VAR_1->tx_confirm;

 VAR_5[VAR_7 * VAR_6 + VAR_3] = VAR_1->tx_frag_skbuffs;
 VAR_5[VAR_7++ * VAR_6 + VAR_2] += VAR_1->tx_frag_skbuffs;

 VAR_5[VAR_7 * VAR_6 + VAR_3] = VAR_1->stats.tx_errors;
 VAR_5[VAR_7++ * VAR_6 + VAR_2] += VAR_1->stats.tx_errors;

 VAR_5[VAR_7 * VAR_6 + VAR_3] = VAR_1->stats.rx_errors;
 VAR_5[VAR_7++ * VAR_6 + VAR_2] += VAR_1->stats.rx_errors;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_5[VAR_7 * VAR_6 + VAR_3] = VAR_4[VAR_8];
  VAR_5[VAR_7++ * VAR_6 + VAR_2] += VAR_4[VAR_8];
 }
}
