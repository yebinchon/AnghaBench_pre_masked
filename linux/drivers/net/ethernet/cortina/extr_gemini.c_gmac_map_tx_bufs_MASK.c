
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct skb_shared_info {int nr_frags; int * frags; } ;
struct sk_buff {scalar_t__ protocol; unsigned int len; scalar_t__ ip_summed; void* data; } ;
struct net_device {unsigned short mtu; } ;
struct gmac_txq {struct gmac_txdesc* ring; struct sk_buff** skb; } ;
struct TYPE_11__ {int buffer_size; } ;
struct TYPE_12__ {unsigned int bits32; TYPE_4__ bits; } ;
struct TYPE_10__ {int buf_adr; } ;
struct TYPE_9__ {unsigned int bits32; } ;
struct TYPE_8__ {unsigned int bits32; } ;
struct gmac_txdesc {TYPE_5__ word0; TYPE_3__ word2; TYPE_2__ word3; TYPE_1__ word1; } ;
struct gemini_ethernet_port {int txq_order; struct gemini_ethernet* geth; } ;
struct gemini_ethernet {int dev; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_14__ {scalar_t__ protocol; } ;
struct TYPE_13__ {scalar_t__ nexthdr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned short VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int ,void*,unsigned int,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_7__* FUNC_4 (struct sk_buff*) ;
 TYPE_6__* FUNC_5 (struct sk_buff*) ;
 struct gemini_ethernet_port* FUNC_6 (struct net_device*) ;
 void* FUNC_7 (int *) ;
 unsigned int FUNC_8 (int *) ;
 unsigned int FUNC_9 (struct sk_buff*) ;
 struct skb_shared_info* FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_16, struct sk_buff *VAR_17,
       struct gmac_txq *VAR_18, unsigned short *VAR_19)
{
 struct gemini_ethernet_port *VAR_20 = FUNC_6(VAR_16);
 struct skb_shared_info *VAR_21 = FUNC_10(VAR_17);
 unsigned short VAR_22 = (1 << VAR_20->txq_order) - 1;
 short VAR_23, VAR_24 = VAR_21->nr_frags - 1;
 struct gemini_ethernet *VAR_25 = VAR_20->geth;
 unsigned int VAR_26, VAR_27, VAR_28;
 unsigned short VAR_29 = *VAR_19;
 struct gmac_txdesc *VAR_30;
 skb_frag_t *VAR_31;
 dma_addr_t VAR_32;
 unsigned short VAR_33;
 void *VAR_34;

 VAR_33 = VAR_4;
 VAR_33 += VAR_16->mtu;
 if (VAR_17->protocol == FUNC_3(VAR_5))
  VAR_33 += VAR_15;

 VAR_26 = VAR_17->len;
 VAR_27 = VAR_9;

 if (VAR_26 > VAR_33) {
  VAR_26 |= VAR_12;
  VAR_27 |= VAR_33;
 }

 if (VAR_17->ip_summed != VAR_0) {
  int VAR_35 = 0;

  if (VAR_17->protocol == FUNC_3(VAR_6)) {
   VAR_26 |= VAR_11;
   VAR_35 = FUNC_4(VAR_17)->protocol == VAR_7;
  } else {
   VAR_26 |= VAR_10;
   VAR_35 = FUNC_5(VAR_17)->nexthdr == VAR_7;
  }

  VAR_26 |= VAR_35 ? VAR_13 : VAR_14;
 }

 VAR_23 = -1;
 while (VAR_23 <= VAR_24) {
  if (VAR_23 == -1) {
   VAR_34 = VAR_17->data;
   VAR_28 = FUNC_9(VAR_17);
  } else {
   VAR_31 = VAR_21->frags + VAR_23;
   VAR_34 = FUNC_7(VAR_31);
   VAR_28 = FUNC_8(VAR_31);
  }

  if (VAR_23 == VAR_24) {
   VAR_27 |= VAR_3;
   VAR_18->skb[VAR_29] = VAR_17;
  }

  VAR_32 = FUNC_0(VAR_25->dev, VAR_34, VAR_28,
      VAR_1);
  if (FUNC_1(VAR_25->dev, VAR_32))
   goto map_error;

  VAR_30 = VAR_18->ring + VAR_29;
  VAR_30->word0.bits32 = VAR_28;
  VAR_30->word1.bits32 = VAR_26;
  VAR_30->word2.buf_adr = VAR_32;
  VAR_30->word3.bits32 = VAR_27;

  VAR_27 &= VAR_8;
  VAR_29++;
  VAR_29 &= VAR_22;
  VAR_23++;
 }

 *VAR_19 = VAR_29;
 return 0;

map_error:
 while (VAR_29 != *VAR_19) {
  VAR_29--;
  VAR_29 &= VAR_22;

  FUNC_2(VAR_25->dev, VAR_18->ring[VAR_29].word2.buf_adr,
          VAR_18->ring[VAR_29].word0.bits.buffer_size,
          VAR_1);
 }
 return -VAR_2;
}
