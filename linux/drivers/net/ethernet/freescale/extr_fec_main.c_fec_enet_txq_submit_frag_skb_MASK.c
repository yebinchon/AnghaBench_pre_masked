
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ ip_summed; } ;
struct net_device {int dummy; } ;
struct fec_enet_private {int quirks; unsigned long tx_align; TYPE_1__* pdev; scalar_t__ bufdesc_ex; scalar_t__ hwts_tx_en; } ;
struct TYPE_7__ {struct bufdesc* cur; int qid; } ;
struct fec_enet_priv_tx_q {TYPE_3__ bd; void** tx_bounce; } ;
struct bufdesc_ex {void* cbd_esc; scalar_t__ cbd_bdu; } ;
struct bufdesc {void* cbd_datlen; void* cbd_bufaddr; void* cbd_sc; } ;
typedef int skb_frag_t ;
typedef unsigned int dma_addr_t ;
struct TYPE_6__ {int nr_frags; int tx_flags; int * frags; } ;
struct TYPE_5__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned int VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct bufdesc* FUNC_0 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int FUNC_1 (int ) ;
 int VAR_14 ;
 void* FUNC_2 (unsigned short) ;
 void* FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (int *,void*,int,int ) ;
 scalar_t__ FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (int *,int ,unsigned short,int ) ;
 unsigned short FUNC_7 (void*) ;
 int FUNC_8 (void*) ;
 unsigned int FUNC_9 (struct bufdesc*,TYPE_3__*) ;
 struct bufdesc* FUNC_10 (struct bufdesc*,TYPE_3__*) ;
 int FUNC_11 (void*,void*,int) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (struct net_device*,char*) ;
 struct fec_enet_private* FUNC_14 (struct net_device*) ;
 void* FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 TYPE_2__* FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (void*,int) ;
 scalar_t__ FUNC_19 (int) ;
 int FUNC_20 () ;

__attribute__((used)) static struct bufdesc *
FUNC_21(struct fec_enet_priv_tx_q *VAR_15,
        struct sk_buff *VAR_16,
        struct net_device *VAR_17)
{
 struct fec_enet_private *VAR_18 = FUNC_14(VAR_17);
 struct bufdesc *VAR_19 = VAR_15->bd.cur;
 struct bufdesc_ex *VAR_20;
 int VAR_21 = FUNC_17(VAR_16)->nr_frags;
 int VAR_22, VAR_23;
 unsigned short VAR_24;
 unsigned int VAR_25 = 0;
 skb_frag_t *VAR_26;
 unsigned int VAR_27;
 void *VAR_28;
 dma_addr_t VAR_29;
 int VAR_30;

 for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++) {
  VAR_26 = &FUNC_17(VAR_16)->frags[VAR_22];
  VAR_19 = FUNC_10(VAR_19, &VAR_15->bd);
  VAR_20 = (struct bufdesc_ex *)VAR_19;

  VAR_24 = FUNC_7(VAR_19->cbd_sc);
  VAR_24 &= ~VAR_6;
  VAR_24 |= (VAR_7 | VAR_5);
  VAR_23 = FUNC_16(&FUNC_17(VAR_16)->frags[VAR_22]);


  if (VAR_22 == VAR_21 - 1) {
   VAR_24 |= (VAR_2 | VAR_3);
   if (VAR_18->bufdesc_ex) {
    VAR_25 |= VAR_1;
    if (FUNC_19(FUNC_17(VAR_16)->tx_flags &
     VAR_14 && VAR_18->hwts_tx_en))
     VAR_25 |= VAR_8;
   }
  }

  if (VAR_18->bufdesc_ex) {
   if (VAR_18->quirks & VAR_12)
    VAR_25 |= FUNC_1(VAR_15->bd.qid);
   if (VAR_16->ip_summed == VAR_9)
    VAR_25 |= VAR_4 | VAR_0;
   VAR_20->cbd_bdu = 0;
   VAR_20->cbd_esc = FUNC_3(VAR_25);
  }

  VAR_28 = FUNC_15(VAR_26);

  VAR_27 = FUNC_9(VAR_19, &VAR_15->bd);
  if (((unsigned long) VAR_28) & VAR_18->tx_align ||
   VAR_18->quirks & VAR_13) {
   FUNC_11(VAR_15->tx_bounce[VAR_27], VAR_28, VAR_23);
   VAR_28 = VAR_15->tx_bounce[VAR_27];

   if (VAR_18->quirks & VAR_13)
    FUNC_18(VAR_28, VAR_23);
  }

  VAR_29 = FUNC_4(&VAR_18->pdev->dev, VAR_28, VAR_23,
          VAR_10);
  if (FUNC_5(&VAR_18->pdev->dev, VAR_29)) {
   if (FUNC_12())
    FUNC_13(VAR_17, "Tx DMA memory map failed\n");
   goto dma_mapping_error;
  }

  VAR_19->cbd_bufaddr = FUNC_3(VAR_29);
  VAR_19->cbd_datlen = FUNC_2(VAR_23);



  FUNC_20();
  VAR_19->cbd_sc = FUNC_2(VAR_24);
 }

 return VAR_19;
dma_mapping_error:
 VAR_19 = VAR_15->bd.cur;
 for (VAR_30 = 0; VAR_30 < VAR_22; VAR_30++) {
  VAR_19 = FUNC_10(VAR_19, &VAR_15->bd);
  FUNC_6(&VAR_18->pdev->dev, FUNC_8(VAR_19->cbd_bufaddr),
     FUNC_7(VAR_19->cbd_datlen), VAR_10);
 }
 return FUNC_0(-VAR_11);
}
