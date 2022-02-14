
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xgbe_ring_desc {int desc3; int desc2; void* desc1; void* desc0; } ;
struct TYPE_4__ {unsigned int packets; unsigned int bytes; } ;
struct xgbe_ring_data {int skb_dma_len; struct xgbe_ring_desc* rdesc; TYPE_1__ tx; int skb_dma; } ;
struct TYPE_6__ {scalar_t__ cur_mss; scalar_t__ cur_vlan_ctag; int xmit_more; } ;
struct xgbe_packet_data {unsigned int tx_packets; unsigned int tx_bytes; scalar_t__ mss; scalar_t__ vlan_ctag; int tcp_payload_len; int tcp_header_len; int length; int rdesc_count; int attributes; } ;
struct xgbe_ring {int cur; unsigned int coalesce_count; int rdesc_count; TYPE_3__ tx; struct xgbe_packet_data packet_data; } ;
struct TYPE_5__ {unsigned int tx_tso_packets; unsigned int tx_vxlan_packets; unsigned int* txq_packets; unsigned int* txq_bytes; } ;
struct xgbe_prv_data {unsigned int tx_frames; int netdev; TYPE_2__ ext_stats; } ;
struct xgbe_channel {size_t queue_index; int name; struct xgbe_ring* tx_ring; struct xgbe_prv_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
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
 struct xgbe_ring_data* FUNC_1 (struct xgbe_ring*,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,size_t) ;
 int FUNC_8 () ;
 int FUNC_9 (struct xgbe_prv_data*,int ,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_10 (struct xgbe_prv_data*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 () ;
 int VAR_31 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct xgbe_prv_data*,struct xgbe_ring*,int,int,int) ;
 int FUNC_15 (struct xgbe_channel*,struct xgbe_ring*) ;

__attribute__((used)) static void FUNC_16(struct xgbe_channel *VAR_32)
{
 struct xgbe_prv_data *VAR_33 = VAR_32->pdata;
 struct xgbe_ring *VAR_34 = VAR_32->tx_ring;
 struct xgbe_ring_data *VAR_35;
 struct xgbe_ring_desc *VAR_36;
 struct xgbe_packet_data *VAR_37 = &VAR_34->packet_data;
 unsigned int VAR_38, VAR_39;
 unsigned int VAR_40, VAR_41, VAR_42, VAR_43;
 unsigned int VAR_44, VAR_45;
 unsigned int VAR_46;
 int VAR_47 = VAR_34->cur;
 int VAR_48 = VAR_34->cur;
 int VAR_49;

 FUNC_0("-->xgbe_dev_xmit\n");

 VAR_38 = VAR_37->tx_packets;
 VAR_39 = VAR_37->tx_bytes;

 VAR_40 = FUNC_2(VAR_37->attributes, VAR_24,
         VAR_2);
 VAR_41 = FUNC_2(VAR_37->attributes, VAR_24,
        VAR_16);
 VAR_42 = FUNC_2(VAR_37->attributes, VAR_24,
         VAR_25);
 VAR_43 = FUNC_2(VAR_37->attributes, VAR_24,
          VAR_30);

 if (VAR_41 && (VAR_37->mss != VAR_34->tx.cur_mss))
  VAR_44 = 1;
 else
  VAR_44 = 0;

 if (VAR_42 && (VAR_37->vlan_ctag != VAR_34->tx.cur_vlan_ctag))
  VAR_45 = 1;
 else
  VAR_45 = 0;
 VAR_34->coalesce_count += VAR_38;
 if (!VAR_33->tx_frames)
  VAR_46 = 0;
 else if (VAR_38 > VAR_33->tx_frames)
  VAR_46 = 1;
 else if ((VAR_34->coalesce_count % VAR_33->tx_frames) < VAR_38)
  VAR_46 = 1;
 else
  VAR_46 = 0;

 VAR_35 = FUNC_1(VAR_34, VAR_48);
 VAR_36 = VAR_35->rdesc;


 if (VAR_44 || VAR_45) {
  if (VAR_44) {
   FUNC_9(VAR_33, VAR_31, VAR_33->netdev,
      "TSO context descriptor, mss=%u\n",
      VAR_37->mss);


   FUNC_3(VAR_36->desc2, VAR_18,
       VAR_9, VAR_37->mss);


   FUNC_3(VAR_36->desc3, VAR_19,
       VAR_3, 1);


   FUNC_3(VAR_36->desc3, VAR_19,
       VAR_12, 1);

   VAR_34->tx.cur_mss = VAR_37->mss;
  }

  if (VAR_45) {
   FUNC_9(VAR_33, VAR_31, VAR_33->netdev,
      "VLAN context descriptor, ctag=%u\n",
      VAR_37->vlan_ctag);


   FUNC_3(VAR_36->desc3, VAR_19,
       VAR_3, 1);


   FUNC_3(VAR_36->desc3, VAR_19,
       VAR_28, VAR_37->vlan_ctag);


   FUNC_3(VAR_36->desc3, VAR_19,
       VAR_26, 1);

   VAR_34->tx.cur_vlan_ctag = VAR_37->vlan_ctag;
  }

  VAR_48++;
  VAR_35 = FUNC_1(VAR_34, VAR_48);
  VAR_36 = VAR_35->rdesc;
 }


 VAR_36->desc0 = FUNC_4(FUNC_6(VAR_35->skb_dma));
 VAR_36->desc1 = FUNC_4(FUNC_13(VAR_35->skb_dma));


 FUNC_3(VAR_36->desc2, VAR_20, VAR_6,
     VAR_35->skb_dma_len);


 if (VAR_42)
  FUNC_3(VAR_36->desc2, VAR_20, VAR_29,
      VAR_21);


 if (FUNC_2(VAR_37->attributes, VAR_24, VAR_11))
  FUNC_3(VAR_36->desc2, VAR_20, VAR_17, 1);


 FUNC_3(VAR_36->desc3, VAR_22, VAR_4, 1);


 FUNC_3(VAR_36->desc3, VAR_22, VAR_3, 0);


 if (VAR_48 != VAR_47)
  FUNC_3(VAR_36->desc3, VAR_22, VAR_10, 1);

 if (VAR_41) {

  FUNC_3(VAR_36->desc3, VAR_22, VAR_15, 1);
  FUNC_3(VAR_36->desc3, VAR_22, VAR_14,
      VAR_37->tcp_payload_len);
  FUNC_3(VAR_36->desc3, VAR_22, VAR_13,
      VAR_37->tcp_header_len / 4);

  VAR_33->ext_stats.tx_tso_packets += VAR_38;
 } else {

  FUNC_3(VAR_36->desc3, VAR_22, VAR_1, 0);


  if (VAR_40)
   FUNC_3(VAR_36->desc3, VAR_22,
       VAR_0, 0x3);


  FUNC_3(VAR_36->desc3, VAR_22, VAR_5,
      VAR_37->length);
 }

 if (VAR_43) {
  FUNC_3(VAR_36->desc3, VAR_22, VAR_27,
      VAR_23);

  VAR_33->ext_stats.tx_vxlan_packets += VAR_37->tx_packets;
 }

 for (VAR_49 = VAR_48 - VAR_47 + 1; VAR_49 < VAR_37->rdesc_count; VAR_49++) {
  VAR_48++;
  VAR_35 = FUNC_1(VAR_34, VAR_48);
  VAR_36 = VAR_35->rdesc;


  VAR_36->desc0 = FUNC_4(FUNC_6(VAR_35->skb_dma));
  VAR_36->desc1 = FUNC_4(FUNC_13(VAR_35->skb_dma));


  FUNC_3(VAR_36->desc2, VAR_20, VAR_6,
      VAR_35->skb_dma_len);


  FUNC_3(VAR_36->desc3, VAR_22, VAR_10, 1);


  FUNC_3(VAR_36->desc3, VAR_22, VAR_3, 0);


  if (VAR_40)
   FUNC_3(VAR_36->desc3, VAR_22,
       VAR_0, 0x3);
 }


 FUNC_3(VAR_36->desc3, VAR_22, VAR_8, 1);


 if (VAR_46)
  FUNC_3(VAR_36->desc2, VAR_20, VAR_7, 1);


 VAR_35->tx.packets = VAR_38;
 VAR_35->tx.bytes = VAR_39;

 VAR_33->ext_stats.txq_packets[VAR_32->queue_index] += VAR_38;
 VAR_33->ext_stats.txq_bytes[VAR_32->queue_index] += VAR_39;





 FUNC_5();


 VAR_35 = FUNC_1(VAR_34, VAR_47);
 VAR_36 = VAR_35->rdesc;
 FUNC_3(VAR_36->desc3, VAR_22, VAR_10, 1);

 if (FUNC_10(VAR_33))
  FUNC_14(VAR_33, VAR_34, VAR_47,
      VAR_37->rdesc_count, 1);


 FUNC_12();

 VAR_34->cur = VAR_48 + 1;
 if (!FUNC_8() ||
     FUNC_11(FUNC_7(VAR_33->netdev,
         VAR_32->queue_index)))
  FUNC_15(VAR_32, VAR_34);
 else
  VAR_34->tx.xmit_more = 1;

 FUNC_0("  %s: descriptors %u to %u written\n",
       VAR_32->name, VAR_47 & (VAR_34->rdesc_count - 1),
       (VAR_34->cur - 1) & (VAR_34->rdesc_count - 1));

 FUNC_0("<--xgbe_dev_xmit\n");
}
