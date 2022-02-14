
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct TYPE_3__ {unsigned short rx_bytes; int rx_dropped; int rx_packets; } ;
struct net_device {TYPE_1__ stats; int name; } ;
struct fst_port_info {int index; int rxpos; scalar_t__ mode; } ;
struct fst_card_info {scalar_t__ family; unsigned short dma_len_rx; int dma_rxpos; int rx_dma_handle_card; struct fst_port_info* dma_port_rx; struct sk_buff* dma_skb_rx; scalar_t__ mem; int card_no; scalar_t__ dmarx_in_progress; } ;
struct TYPE_4__ {int bits; int mcnt; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned short VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned char FUNC_1 (struct fst_card_info*,int ) ;
 unsigned short FUNC_2 (struct fst_card_info*,int ) ;
 int FUNC_3 (struct fst_card_info*,int ,unsigned char) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 int FUNC_4 (int,char*,...) ;
 struct sk_buff* FUNC_5 (unsigned short) ;
 int FUNC_6 (struct sk_buff*,struct net_device*) ;
 int FUNC_7 (struct fst_card_info*,struct fst_port_info*,unsigned char,int,unsigned short) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (struct fst_card_info*,struct fst_port_info*,unsigned char,int,unsigned short) ;
 int FUNC_10 (struct fst_card_info*,int ,scalar_t__,unsigned short) ;
 int FUNC_11 (struct sk_buff*,struct net_device*) ;
 int FUNC_12 (int ,scalar_t__,unsigned short) ;
 int FUNC_13 (struct sk_buff*) ;
 struct net_device* FUNC_14 (struct fst_port_info*) ;
 int FUNC_15 (char*,int ,int) ;
 int *** VAR_12 ;
 TYPE_2__** VAR_13 ;
 int FUNC_16 (struct sk_buff*,unsigned short) ;

__attribute__((used)) static void
FUNC_17(struct fst_card_info *VAR_14, struct fst_port_info *VAR_15)
{
 unsigned char VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 unsigned short VAR_20;
 struct sk_buff *VAR_21;
 struct net_device *VAR_22 = FUNC_14(VAR_15);


 VAR_17 = VAR_15->index;
 VAR_18 = VAR_15->rxpos;
 VAR_16 = FUNC_1(VAR_14, VAR_13[VAR_17][VAR_18].bits);
 if (VAR_16 & VAR_3) {
  FUNC_4(VAR_2 | VAR_1, "intr_rx: No buffer port %d pos %d\n",
      VAR_17, VAR_18);
  return;
 }
 if (VAR_14->dmarx_in_progress) {
  return;
 }


 VAR_20 = FUNC_2(VAR_14, VAR_13[VAR_17][VAR_18].mcnt);

 VAR_20 -= 2;
 if (VAR_20 == 0) {




  FUNC_15("Frame received with 0 length. Card %d Port %d\n",
         VAR_14->card_no, VAR_15->index);

  FUNC_3(VAR_14, VAR_13[VAR_17][VAR_18].bits, VAR_3);

  VAR_18 = (VAR_18+1) % VAR_9;
  VAR_15->rxpos = VAR_18;
  return;
 }





 FUNC_4(VAR_2, "intr_rx: %d,%d: flags %x len %d\n", VAR_17, VAR_18, VAR_16, VAR_20);
 if (VAR_16 != (VAR_11 | VAR_10) || VAR_20 > VAR_7 - 2) {
  FUNC_7(VAR_14, VAR_15, VAR_16, VAR_18, VAR_20);
  FUNC_9(VAR_14, VAR_15, VAR_16, VAR_18, VAR_20);
  return;
 }


 if ((VAR_21 = FUNC_5(VAR_20)) == ((void*)0)) {
  FUNC_4(VAR_2, "intr_rx: can't allocate buffer\n");

  VAR_22->stats.rx_dropped++;


  FUNC_3(VAR_14, VAR_13[VAR_17][VAR_18].bits, VAR_3);

  VAR_18 = (VAR_18+1) % VAR_9;
  VAR_15->rxpos = VAR_18;
  return;
 }







 if ((VAR_20 < VAR_5) || (VAR_14->family == VAR_4)) {
  FUNC_12(FUNC_16(VAR_21, VAR_20),
         VAR_14->mem + FUNC_0(VAR_12[VAR_17][VAR_18][0]),
         VAR_20);


  FUNC_3(VAR_14, VAR_13[VAR_17][VAR_18].bits, VAR_3);


  VAR_22->stats.rx_packets++;
  VAR_22->stats.rx_bytes += VAR_20;


  FUNC_4(VAR_2, "Pushing frame up the stack\n");
  if (VAR_15->mode == VAR_6)
   VAR_21->protocol = FUNC_6(VAR_21, VAR_22);
  else
   VAR_21->protocol = FUNC_11(VAR_21, VAR_22);
  VAR_19 = FUNC_13(VAR_21);
  FUNC_8(VAR_19, FUNC_14(VAR_15)->name);
  if (VAR_19 == VAR_8)
   VAR_22->stats.rx_dropped++;
 } else {
  VAR_14->dma_skb_rx = VAR_21;
  VAR_14->dma_port_rx = VAR_15;
  VAR_14->dma_len_rx = VAR_20;
  VAR_14->dma_rxpos = VAR_18;
  FUNC_10(VAR_14, VAR_14->rx_dma_handle_card,
      FUNC_0(VAR_12[VAR_17][VAR_18][0]), VAR_20);
 }
 if (VAR_18 != VAR_15->rxpos) {
  FUNC_4(VAR_0, "About to increment rxpos by more than 1\n");
  FUNC_4(VAR_0, "rxp = %d rxpos = %d\n", VAR_18, VAR_15->rxpos);
 }
 VAR_18 = (VAR_18+1) % VAR_9;
 VAR_15->rxpos = VAR_18;
}
