
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ byte_count; } ;
union gmac_txdesc_1 {int bits32; TYPE_3__ bits; } ;
struct TYPE_9__ {int desc_count; int status_tx_ok; int buffer_size; } ;
union gmac_txdesc_0 {TYPE_4__ bits; } ;
struct net_device {int dummy; } ;
struct gmac_txq {unsigned int cptr; int * skb; struct gmac_txdesc* ring; } ;
struct TYPE_7__ {unsigned int bits32; } ;
struct TYPE_6__ {int buf_adr; } ;
struct gmac_txdesc {union gmac_txdesc_1 word1; TYPE_2__ word3; TYPE_1__ word2; union gmac_txdesc_0 word0; } ;
struct TYPE_10__ {unsigned int tx_errors; unsigned int tx_packets; unsigned long tx_bytes; } ;
struct gemini_ethernet_port {int txq_order; unsigned int tx_hw_csummed; int ir_stats_syncp; TYPE_5__ stats; int tx_stats_syncp; int * tx_frag_stats; struct gemini_ethernet* geth; } ;
struct gemini_ethernet {int dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned short VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct gemini_ethernet_port* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_5, struct gmac_txq *VAR_6,
      unsigned int VAR_7)
{
 struct gemini_ethernet_port *VAR_8 = FUNC_2(VAR_5);
 unsigned int VAR_9 = (1 << VAR_8->txq_order) - 1;
 struct gemini_ethernet *VAR_10 = VAR_8->geth;
 unsigned int VAR_11 = VAR_6->cptr;
 union gmac_txdesc_0 VAR_12;
 union gmac_txdesc_1 VAR_13;
 unsigned int VAR_14 = 0;
 unsigned long VAR_15 = 0;
 struct gmac_txdesc *VAR_16;
 unsigned short VAR_17;
 unsigned int VAR_18 = 0;
 unsigned int VAR_19 = 0;
 unsigned int VAR_20;
 dma_addr_t VAR_21;

 if (VAR_11 == VAR_7)
  return;

 while (VAR_11 != VAR_7) {
  VAR_16 = VAR_6->ring + VAR_11;
  VAR_12 = VAR_16->word0;
  VAR_13 = VAR_16->word1;
  VAR_21 = VAR_16->word2.buf_adr;
  VAR_20 = VAR_16->word3.bits32;

  FUNC_1(VAR_10->dev, VAR_21,
     VAR_12, VAR_0);

  if (VAR_20 & VAR_1)
   FUNC_0(VAR_6->skb[VAR_11]);

  VAR_11++;
  VAR_11 &= VAR_9;

  if (!(VAR_20 & VAR_2))
   continue;

  if (!VAR_12) {
   VAR_18++;
   continue;
  }

  VAR_19++;
  VAR_15 += VAR_16->word1.bits.byte_count;

  if (VAR_13 & VAR_3)
   VAR_14++;

  VAR_17 = VAR_12 - 1;
  if (VAR_17) {
   if (VAR_17 >= VAR_4)
    VAR_17 = VAR_4 - 1;

   FUNC_3(&VAR_8->tx_stats_syncp);
   VAR_8->tx_frag_stats[VAR_17]++;
   FUNC_4(&VAR_8->tx_stats_syncp);
  }
 }

 FUNC_3(&VAR_8->ir_stats_syncp);
 VAR_8->stats.tx_errors += VAR_18;
 VAR_8->stats.tx_packets += VAR_19;
 VAR_8->stats.tx_bytes += VAR_15;
 VAR_8->tx_hw_csummed += VAR_14;
 FUNC_4(&VAR_8->ir_stats_syncp);

 VAR_6->cptr = VAR_11;
}
