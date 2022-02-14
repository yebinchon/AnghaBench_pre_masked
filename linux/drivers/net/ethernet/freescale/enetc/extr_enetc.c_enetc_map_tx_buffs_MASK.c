
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int e_flags; scalar_t__ tpid; void* vid; } ;
union enetc_tx_bd {int flags; void* buf_len; void* addr; TYPE_1__ ext; void* frm_len; scalar_t__ lstatus; } ;
typedef int u8 ;
struct sk_buff {int len; int data; } ;
struct enetc_tx_swbd {int len; int is_dma_page; int do_tstamp; int check_wb; struct sk_buff* skb; void* dma; } ;
struct enetc_bdr {int next_to_use; int bd_count; struct enetc_tx_swbd* tx_swbd; int dev; int tpir; } ;
typedef int skb_frag_t ;
typedef void* dma_addr_t ;
struct TYPE_4__ {int tx_flags; unsigned int nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 union enetc_tx_bd* FUNC_0 (struct enetc_bdr,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (int ,char*) ;
 void* FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (int ,void*) ;
 int FUNC_6 (struct enetc_bdr*,int*) ;
 int FUNC_7 (union enetc_tx_bd*) ;
 int FUNC_8 (struct enetc_bdr*,struct enetc_tx_swbd*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,union enetc_tx_bd*) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (union enetc_tx_bd*) ;
 void* FUNC_12 (int ,int *,int ,int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct sk_buff*) ;
 TYPE_2__* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(struct enetc_bdr *VAR_10, struct sk_buff *VAR_11,
         int VAR_12)
{
 struct enetc_tx_swbd *VAR_13;
 skb_frag_t *VAR_14;
 int VAR_15 = FUNC_14(VAR_11);
 union enetc_tx_bd VAR_16;
 union enetc_tx_bd *VAR_17;
 bool VAR_18, VAR_19;
 int VAR_20, VAR_21 = 0;
 unsigned int VAR_22;
 dma_addr_t VAR_23;
 u8 VAR_24 = 0;

 VAR_20 = VAR_10->next_to_use;
 VAR_17 = FUNC_0(*VAR_10, VAR_20);
 FUNC_11(VAR_17);

 VAR_23 = FUNC_4(VAR_10->dev, VAR_11->data, VAR_15, VAR_0);
 if (FUNC_18(FUNC_5(VAR_10->dev, VAR_23)))
  goto dma_err;

 VAR_16.addr = FUNC_2(VAR_23);
 VAR_16.buf_len = FUNC_1(VAR_15);
 VAR_16.lstatus = 0;

 VAR_13 = &VAR_10->tx_swbd[VAR_20];
 VAR_13->dma = VAR_23;
 VAR_13->len = VAR_15;
 VAR_13->is_dma_page = 0;
 VAR_21++;

 VAR_18 = FUNC_17(VAR_11);
 VAR_19 = (VAR_12 & VAR_1) &&
      (FUNC_15(VAR_11)->tx_flags & VAR_8);
 VAR_13->do_tstamp = VAR_19;
 VAR_13->check_wb = VAR_13->do_tstamp;

 if (VAR_18 || VAR_19)
  VAR_24 |= VAR_5;

 if (FUNC_9(VAR_11, &VAR_16))
  VAR_24 |= VAR_4 | VAR_7;


 VAR_16.frm_len = FUNC_1(VAR_11->len);
 VAR_16.flags = VAR_24;

 if (VAR_24 & VAR_5) {
  u8 VAR_25 = 0;
  *VAR_17 = VAR_16;
  FUNC_7(&VAR_16);


  VAR_24 = 0;
  VAR_13++;
  VAR_17++;
  VAR_20++;
  if (FUNC_18(VAR_20 == VAR_10->bd_count)) {
   VAR_20 = 0;
   VAR_13 = VAR_10->tx_swbd;
   VAR_17 = FUNC_0(*VAR_10, 0);
  }
  FUNC_11(VAR_17);

  if (VAR_18) {
   VAR_16.ext.vid = FUNC_1(FUNC_16(VAR_11));
   VAR_16.ext.tpid = 0;
   VAR_25 |= VAR_3;
  }

  if (VAR_19) {
   FUNC_15(VAR_11)->tx_flags |= VAR_9;
   VAR_25 |= VAR_2;
  }

  VAR_16.ext.e_flags = VAR_25;
  VAR_21++;
 }

 VAR_14 = &FUNC_15(VAR_11)->frags[0];
 for (VAR_22 = 0; VAR_22 < FUNC_15(VAR_11)->nr_frags; VAR_22++, VAR_14++) {
  VAR_15 = FUNC_13(VAR_14);
  VAR_23 = FUNC_12(VAR_10->dev, VAR_14, 0, VAR_15,
           VAR_0);
  if (FUNC_5(VAR_10->dev, VAR_23))
   goto dma_err;

  *VAR_17 = VAR_16;
  FUNC_7(&VAR_16);

  VAR_24 = 0;
  VAR_13++;
  VAR_17++;
  VAR_20++;
  if (FUNC_18(VAR_20 == VAR_10->bd_count)) {
   VAR_20 = 0;
   VAR_13 = VAR_10->tx_swbd;
   VAR_17 = FUNC_0(*VAR_10, 0);
  }
  FUNC_11(VAR_17);

  VAR_16.addr = FUNC_2(VAR_23);
  VAR_16.buf_len = FUNC_1(VAR_15);

  VAR_13->dma = VAR_23;
  VAR_13->len = VAR_15;
  VAR_13->is_dma_page = 1;
  VAR_21++;
 }


 VAR_24 |= VAR_6;
 VAR_16.flags = VAR_24;
 *VAR_17 = VAR_16;

 VAR_10->tx_swbd[VAR_20].skb = VAR_11;

 FUNC_6(VAR_10, &VAR_20);
 VAR_10->next_to_use = VAR_20;


 FUNC_10(VAR_10->tpir, VAR_20);

 return VAR_21;

dma_err:
 FUNC_3(VAR_10->dev, "DMA map error");

 do {
  VAR_13 = &VAR_10->tx_swbd[VAR_20];
  FUNC_8(VAR_10, VAR_13);
  if (VAR_20 == 0)
   VAR_20 = VAR_10->bd_count;
  VAR_20--;
 } while (VAR_21--);

 return 0;
}
