
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ ip_summed; void* data; } ;
struct net_device {int dummy; } ;
struct fec_enet_private {unsigned long tx_align; int quirks; scalar_t__ hwts_tx_en; scalar_t__ bufdesc_ex; TYPE_1__* pdev; } ;
struct TYPE_7__ {int reg_desc_active; struct bufdesc* cur; int qid; } ;
struct fec_enet_priv_tx_q {TYPE_3__ bd; struct sk_buff** tx_skbuff; void** tx_bounce; } ;
struct bufdesc_ex {void* cbd_esc; scalar_t__ cbd_bdu; } ;
struct bufdesc {void* cbd_sc; void* cbd_datlen; void* cbd_bufaddr; } ;
typedef unsigned int dma_addr_t ;
struct TYPE_6__ {int nr_frags; int tx_flags; } ;
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
 int VAR_12 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct bufdesc*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_2 (unsigned short) ;
 void* FUNC_3 (unsigned int) ;
 int FUNC_4 (struct sk_buff*) ;
 unsigned int FUNC_5 (int *,void*,unsigned short,int ) ;
 scalar_t__ FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (int *,unsigned int,unsigned short,int ) ;
 unsigned short FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,struct net_device*) ;
 unsigned int FUNC_10 (struct bufdesc*,TYPE_3__*) ;
 int FUNC_11 (struct fec_enet_priv_tx_q*) ;
 struct bufdesc* FUNC_12 (struct bufdesc*,TYPE_3__*) ;
 struct bufdesc* FUNC_13 (struct fec_enet_priv_tx_q*,struct sk_buff*,struct net_device*) ;
 int FUNC_14 (void*,void*,unsigned short) ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (struct net_device*,char*) ;
 struct fec_enet_private* FUNC_17 (struct net_device*) ;
 unsigned short FUNC_18 (struct sk_buff*) ;
 TYPE_2__* FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (void*,unsigned short) ;
 scalar_t__ FUNC_22 (int) ;
 int FUNC_23 () ;
 int FUNC_24 (int ,int ) ;

__attribute__((used)) static int FUNC_25(struct fec_enet_priv_tx_q *VAR_17,
       struct sk_buff *VAR_18, struct net_device *VAR_19)
{
 struct fec_enet_private *VAR_20 = FUNC_17(VAR_19);
 int VAR_21 = FUNC_19(VAR_18)->nr_frags;
 struct bufdesc *VAR_22, *VAR_23;
 void *VAR_24;
 dma_addr_t VAR_25;
 unsigned short VAR_26;
 unsigned short VAR_27;
 unsigned int VAR_28 = 0;
 unsigned int VAR_29;
 int VAR_30;

 VAR_30 = FUNC_11(VAR_17);
 if (VAR_30 < VAR_13 + 1) {
  FUNC_4(VAR_18);
  if (FUNC_15())
   FUNC_16(VAR_19, "NOT enough BD for SG!\n");
  return VAR_14;
 }


 if (FUNC_9(VAR_18, VAR_19)) {
  FUNC_4(VAR_18);
  return VAR_14;
 }


 VAR_22 = VAR_17->bd.cur;
 VAR_23 = VAR_22;
 VAR_26 = FUNC_8(VAR_22->cbd_sc);
 VAR_26 &= ~VAR_6;


 VAR_24 = VAR_18->data;
 VAR_27 = FUNC_18(VAR_18);

 VAR_29 = FUNC_10(VAR_22, &VAR_17->bd);
 if (((unsigned long) VAR_24) & VAR_20->tx_align ||
  VAR_20->quirks & VAR_12) {
  FUNC_14(VAR_17->tx_bounce[VAR_29], VAR_18->data, VAR_27);
  VAR_24 = VAR_17->tx_bounce[VAR_29];

  if (VAR_20->quirks & VAR_12)
   FUNC_21(VAR_24, VAR_27);
 }


 VAR_25 = FUNC_5(&VAR_20->pdev->dev, VAR_24, VAR_27, VAR_10);
 if (FUNC_6(&VAR_20->pdev->dev, VAR_25)) {
  FUNC_4(VAR_18);
  if (FUNC_15())
   FUNC_16(VAR_19, "Tx DMA memory map failed\n");
  return VAR_14;
 }

 if (VAR_21) {
  VAR_23 = FUNC_13(VAR_17, VAR_18, VAR_19);
  if (FUNC_1(VAR_23)) {
   FUNC_7(&VAR_20->pdev->dev, VAR_25,
      VAR_27, VAR_10);
   FUNC_4(VAR_18);
   return VAR_14;
  }
 } else {
  VAR_26 |= (VAR_2 | VAR_3);
  if (VAR_20->bufdesc_ex) {
   VAR_28 = VAR_1;
   if (FUNC_22(FUNC_19(VAR_18)->tx_flags &
    VAR_15 && VAR_20->hwts_tx_en))
    VAR_28 |= VAR_8;
  }
 }
 VAR_22->cbd_bufaddr = FUNC_3(VAR_25);
 VAR_22->cbd_datlen = FUNC_2(VAR_27);

 if (VAR_20->bufdesc_ex) {

  struct bufdesc_ex *VAR_31 = (struct bufdesc_ex *)VAR_22;

  if (FUNC_22(FUNC_19(VAR_18)->tx_flags & VAR_15 &&
   VAR_20->hwts_tx_en))
   FUNC_19(VAR_18)->tx_flags |= VAR_16;

  if (VAR_20->quirks & VAR_11)
   VAR_28 |= FUNC_0(VAR_17->bd.qid);

  if (VAR_18->ip_summed == VAR_9)
   VAR_28 |= VAR_4 | VAR_0;

  VAR_31->cbd_bdu = 0;
  VAR_31->cbd_esc = FUNC_3(VAR_28);
 }

 VAR_29 = FUNC_10(VAR_23, &VAR_17->bd);

 VAR_17->tx_skbuff[VAR_29] = VAR_18;




 FUNC_23();




 VAR_26 |= (VAR_5 | VAR_7);
 VAR_22->cbd_sc = FUNC_2(VAR_26);


 VAR_22 = FUNC_12(VAR_23, &VAR_17->bd);

 FUNC_20(VAR_18);




 FUNC_23();
 VAR_17->bd.cur = VAR_22;


 FUNC_24(0, VAR_17->bd.reg_desc_active);

 return 0;
}
