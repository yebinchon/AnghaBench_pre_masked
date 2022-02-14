
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cur_mss; scalar_t__ cur_vlan_ctag; int xmit_more; } ;
struct xlgmac_pkt_info {scalar_t__ mss; scalar_t__ vlan_ctag; int tx_packets; int tcp_payload_len; int tcp_header_len; int length; int desc_count; int tx_bytes; int attributes; } ;
struct xlgmac_ring {int cur; int coalesce_count; int dma_desc_count; TYPE_3__ tx; struct xlgmac_pkt_info pkt_info; } ;
struct TYPE_4__ {int tx_tso_packets; int tx_vlan_packets; } ;
struct xlgmac_pdata {int tx_frames; int netdev; TYPE_1__ stats; } ;
struct xlgmac_dma_desc {void* desc3; void* desc2; void* desc1; void* desc0; } ;
struct TYPE_5__ {int packets; int bytes; } ;
struct xlgmac_desc_data {int skb_dma_len; struct xlgmac_dma_desc* dma_desc; TYPE_2__ tx; int skb_dma; } ;
struct xlgmac_channel {int name; int queue_index; struct xlgmac_ring* tx_ring; struct xlgmac_pdata* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 struct xlgmac_desc_data* FUNC_0 (struct xlgmac_ring*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,int ,int,int) ;
 void* FUNC_3 (void*,int ,int ,int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (struct xlgmac_pdata*,int ,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_10 (struct xlgmac_pdata*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 () ;
 int VAR_47 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct xlgmac_pdata*,struct xlgmac_ring*,int,int,int) ;
 int FUNC_15 (struct xlgmac_channel*,struct xlgmac_ring*) ;

__attribute__((used)) static void FUNC_16(struct xlgmac_channel *VAR_48)
{
 struct xlgmac_pdata *VAR_49 = VAR_48->pdata;
 struct xlgmac_ring *VAR_50 = VAR_48->tx_ring;
 unsigned int VAR_51, VAR_52;
 struct xlgmac_desc_data *VAR_53;
 struct xlgmac_dma_desc *VAR_54;
 struct xlgmac_pkt_info *VAR_55;
 unsigned int VAR_56, VAR_57, VAR_58;
 int VAR_59 = VAR_50->cur;
 int VAR_60 = VAR_50->cur;
 unsigned int VAR_61;
 int VAR_62;

 VAR_55 = &VAR_50->pkt_info;
 VAR_56 = FUNC_1(VAR_55->attributes,
       VAR_40,
    VAR_39);
 VAR_57 = FUNC_1(VAR_55->attributes,
      VAR_44,
    VAR_43);
 VAR_58 = FUNC_1(VAR_55->attributes,
       VAR_46,
    VAR_45);

 if (VAR_57 && (VAR_55->mss != VAR_50->tx.cur_mss))
  VAR_51 = 1;
 else
  VAR_51 = 0;

 if (VAR_58 && (VAR_55->vlan_ctag != VAR_50->tx.cur_vlan_ctag))
  VAR_52 = 1;
 else
  VAR_52 = 0;
 VAR_50->coalesce_count += VAR_55->tx_packets;
 if (!VAR_49->tx_frames)
  VAR_61 = 0;
 else if (VAR_55->tx_packets > VAR_49->tx_frames)
  VAR_61 = 1;
 else if ((VAR_50->coalesce_count % VAR_49->tx_frames) <
   VAR_55->tx_packets)
  VAR_61 = 1;
 else
  VAR_61 = 0;

 VAR_53 = FUNC_0(VAR_50, VAR_60);
 VAR_54 = VAR_53->dma_desc;


 if (VAR_51 || VAR_52) {
  if (VAR_51) {
   FUNC_9(VAR_49, VAR_47, VAR_49->netdev,
      "TSO context descriptor, mss=%u\n",
      VAR_55->mss);


   VAR_54->desc2 = FUNC_3(
      VAR_54->desc2,
      VAR_1,
      VAR_0,
      VAR_55->mss);


   VAR_54->desc3 = FUNC_3(
      VAR_54->desc3,
      VAR_3,
      VAR_2,
      1);


   VAR_54->desc3 = FUNC_3(
      VAR_54->desc3,
      VAR_5,
      VAR_4,
      1);

   VAR_50->tx.cur_mss = VAR_55->mss;
  }

  if (VAR_52) {
   FUNC_9(VAR_49, VAR_47, VAR_49->netdev,
      "VLAN context descriptor, ctag=%u\n",
      VAR_55->vlan_ctag);


   VAR_54->desc3 = FUNC_3(
      VAR_54->desc3,
      VAR_3,
      VAR_2,
      1);


   VAR_54->desc3 = FUNC_3(
      VAR_54->desc3,
      VAR_9,
      VAR_8,
      VAR_55->vlan_ctag);


   VAR_54->desc3 = FUNC_3(
      VAR_54->desc3,
      VAR_7,
      VAR_6,
      1);

   VAR_50->tx.cur_vlan_ctag = VAR_55->vlan_ctag;
  }

  VAR_60++;
  VAR_53 = FUNC_0(VAR_50, VAR_60);
  VAR_54 = VAR_53->dma_desc;
 }


 VAR_54->desc0 = FUNC_4(FUNC_6(VAR_53->skb_dma));
 VAR_54->desc1 = FUNC_4(FUNC_13(VAR_53->skb_dma));


 VAR_54->desc2 = FUNC_3(
    VAR_54->desc2,
    VAR_11,
    VAR_10,
    VAR_53->skb_dma_len);


 if (VAR_58) {
  VAR_54->desc2 = FUNC_3(
     VAR_54->desc2,
     VAR_18,
     VAR_17,
     VAR_16);
  VAR_49->stats.tx_vlan_packets++;
 }


 if (FUNC_1(VAR_55->attributes,
    VAR_42,
    VAR_41))
  VAR_54->desc2 = FUNC_3(
     VAR_54->desc2,
     VAR_15,
     VAR_14,
     1);


 VAR_54->desc3 = FUNC_3(
    VAR_54->desc3,
    VAR_26,
    VAR_25,
    1);


 VAR_54->desc3 = FUNC_3(
    VAR_54->desc3,
    VAR_24,
    VAR_23,
    0);


 if (VAR_60 != VAR_59)
  VAR_54->desc3 = FUNC_3(
     VAR_54->desc3,
     VAR_32,
     VAR_31,
     1);

 if (VAR_57) {

  VAR_54->desc3 = FUNC_3(
     VAR_54->desc3,
     VAR_38,
     VAR_37, 1);
  VAR_54->desc3 = FUNC_3(
     VAR_54->desc3,
     VAR_36,
     VAR_35,
     VAR_55->tcp_payload_len);
  VAR_54->desc3 = FUNC_3(
     VAR_54->desc3,
     VAR_34,
     VAR_33,
     VAR_55->tcp_header_len / 4);

  VAR_49->stats.tx_tso_packets++;
 } else {

  VAR_54->desc3 = FUNC_3(
     VAR_54->desc3,
     VAR_22,
     VAR_21, 0);


  if (VAR_56)
   VAR_54->desc3 = FUNC_3(
      VAR_54->desc3,
      VAR_20,
      VAR_19,
      0x3);


  VAR_54->desc3 = FUNC_3(
     VAR_54->desc3,
     VAR_28,
     VAR_27,
     VAR_55->length);
 }

 for (VAR_62 = VAR_60 - VAR_59 + 1; VAR_62 < VAR_55->desc_count; VAR_62++) {
  VAR_60++;
  VAR_53 = FUNC_0(VAR_50, VAR_60);
  VAR_54 = VAR_53->dma_desc;


  VAR_54->desc0 =
   FUNC_4(FUNC_6(VAR_53->skb_dma));
  VAR_54->desc1 =
   FUNC_4(FUNC_13(VAR_53->skb_dma));


  VAR_54->desc2 = FUNC_3(
     VAR_54->desc2,
     VAR_11,
     VAR_10,
     VAR_53->skb_dma_len);


  VAR_54->desc3 = FUNC_3(
     VAR_54->desc3,
     VAR_32,
     VAR_31, 1);


  VAR_54->desc3 = FUNC_3(
     VAR_54->desc3,
     VAR_24,
     VAR_23, 0);


  if (VAR_56)
   VAR_54->desc3 = FUNC_3(
      VAR_54->desc3,
      VAR_20,
      VAR_19,
      0x3);
 }


 VAR_54->desc3 = FUNC_3(
    VAR_54->desc3,
    VAR_30,
    VAR_29, 1);


 if (VAR_61)
  VAR_54->desc2 = FUNC_3(
     VAR_54->desc2,
     VAR_13,
     VAR_12, 1);


 VAR_53->tx.packets = VAR_55->tx_packets;
 VAR_53->tx.bytes = VAR_55->tx_bytes;





 FUNC_5();


 VAR_53 = FUNC_0(VAR_50, VAR_59);
 VAR_54 = VAR_53->dma_desc;
 VAR_54->desc3 = FUNC_3(
    VAR_54->desc3,
    VAR_32,
    VAR_31, 1);

 if (FUNC_10(VAR_49))
  FUNC_14(VAR_49, VAR_50, VAR_59,
        VAR_55->desc_count, 1);


 FUNC_12();

 VAR_50->cur = VAR_60 + 1;
 if (!FUNC_8() ||
     FUNC_11(FUNC_7(VAR_49->netdev,
         VAR_48->queue_index)))
  FUNC_15(VAR_48, VAR_50);
 else
  VAR_50->tx.xmit_more = 1;

 FUNC_2("%s: descriptors %u to %u written\n",
    VAR_48->name, VAR_59 & (VAR_50->dma_desc_count - 1),
    (VAR_50->cur - 1) & (VAR_50->dma_desc_count - 1));
}
