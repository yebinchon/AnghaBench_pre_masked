
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xgbe_ring_desc {int desc0; int desc3; int desc2; int desc1; } ;
struct TYPE_4__ {int hdr_len; int len; } ;
struct xgbe_ring_data {TYPE_2__ rx; struct xgbe_ring_desc* rdesc; } ;
struct xgbe_packet_data {int vlan_ctag; int errors; int attributes; int rss_hash_type; int rss_hash; } ;
struct xgbe_ring {int cur; int rdesc_count; struct xgbe_packet_data packet_data; } ;
struct TYPE_3__ {int* rxq_bytes; int * rxq_packets; int rx_vxlan_csum_errors; int rx_csum_errors; int rx_vxlan_packets; int rx_split_header_packets; } ;
struct xgbe_prv_data {TYPE_1__ ext_stats; struct net_device* netdev; } ;
struct xgbe_channel {size_t queue_index; int name; struct xgbe_ring* rx_ring; struct xgbe_prv_data* pdata; } ;
struct net_device {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,...) ;
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
 unsigned int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct xgbe_prv_data*,int ,struct net_device*,char*,int,...) ;
 scalar_t__ FUNC_8 (struct xgbe_prv_data*) ;
 int VAR_31 ;
 int FUNC_9 (struct xgbe_prv_data*,struct xgbe_ring*,int) ;
 int FUNC_10 (struct xgbe_packet_data*,struct xgbe_ring_desc*) ;

__attribute__((used)) static int FUNC_11(struct xgbe_channel *VAR_32)
{
 struct xgbe_prv_data *VAR_33 = VAR_32->pdata;
 struct xgbe_ring *VAR_34 = VAR_32->rx_ring;
 struct xgbe_ring_data *VAR_35;
 struct xgbe_ring_desc *VAR_36;
 struct xgbe_packet_data *VAR_37 = &VAR_34->packet_data;
 struct net_device *VAR_38 = VAR_33->netdev;
 unsigned int VAR_39, VAR_40, VAR_41;

 FUNC_0("-->xgbe_dev_read: cur = %d\n", VAR_34->cur);

 VAR_35 = FUNC_1(VAR_34, VAR_34->cur);
 VAR_36 = VAR_35->rdesc;


 if (FUNC_3(VAR_36->desc3, VAR_25, VAR_17))
  return 1;


 FUNC_5();

 if (FUNC_8(VAR_33))
  FUNC_9(VAR_33, VAR_34, VAR_34->cur);

 if (FUNC_3(VAR_36->desc3, VAR_25, VAR_4)) {

  FUNC_10(VAR_37, VAR_36);

  FUNC_4(VAR_37->attributes, VAR_26,
          VAR_1, 1);
  FUNC_4(VAR_37->attributes, VAR_26,
          VAR_2, 0);
  return 0;
 }


 FUNC_4(VAR_37->attributes, VAR_26, VAR_1, 0);


 if (FUNC_3(VAR_36->desc3, VAR_25, VAR_0))
  FUNC_4(VAR_37->attributes, VAR_26,
          VAR_2, 1);


 if (FUNC_3(VAR_36->desc3, VAR_25, VAR_7)) {
  FUNC_4(VAR_37->attributes, VAR_26,
          VAR_8, 1);
  VAR_35->rx.hdr_len = FUNC_3(VAR_36->desc2,
            VAR_24, VAR_10);
  if (VAR_35->rx.hdr_len)
   VAR_33->ext_stats.rx_split_header_packets++;
 } else {
  FUNC_4(VAR_37->attributes, VAR_26,
          VAR_8, 0);
 }


 if (FUNC_3(VAR_36->desc3, VAR_25, VAR_22)) {
  FUNC_4(VAR_37->attributes, VAR_26,
          VAR_21, 1);

  VAR_37->rss_hash = FUNC_6(VAR_36->desc1);

  VAR_41 = FUNC_3(VAR_36->desc3, VAR_25, VAR_11);
  switch (VAR_41) {
  case 133:
  case 132:
  case 130:
  case 129:
   VAR_37->rss_hash_type = VAR_19;
   break;
  default:
   VAR_37->rss_hash_type = VAR_18;
  }
 }


 if (!FUNC_3(VAR_36->desc3, VAR_25, VAR_13))
  return 0;


 FUNC_4(VAR_37->attributes, VAR_26,
         VAR_12, 1);


 VAR_35->rx.len = FUNC_3(VAR_36->desc3, VAR_25, VAR_20);


 if (VAR_38->features & VAR_15) {
  FUNC_4(VAR_37->attributes, VAR_26,
          VAR_3, 1);
  FUNC_4(VAR_37->attributes, VAR_26,
          VAR_29, 1);
 }


 if (FUNC_3(VAR_36->desc2, VAR_24, VAR_28)) {
  FUNC_4(VAR_37->attributes, VAR_26,
          VAR_28, 1);
  VAR_33->ext_stats.rx_vxlan_packets++;

  VAR_41 = FUNC_3(VAR_36->desc3, VAR_25, VAR_11);
  switch (VAR_41) {
  case 131:
  case 128:
   FUNC_4(VAR_37->attributes, VAR_26,
           VAR_29, 0);
   break;
  }
 }


 VAR_39 = FUNC_3(VAR_36->desc3, VAR_25, VAR_5);
 VAR_40 = FUNC_3(VAR_36->desc3, VAR_25, VAR_6);
 FUNC_7(VAR_33, VAR_31, VAR_38, "err=%u, etlt=%#x\n", VAR_39, VAR_40);

 if (!VAR_39 || !VAR_40) {

  if ((VAR_40 == 0x09) &&
      (VAR_38->features & VAR_14)) {
   FUNC_4(VAR_37->attributes, VAR_26,
           VAR_30, 1);
   VAR_37->vlan_ctag = FUNC_3(VAR_36->desc0,
             VAR_23,
             VAR_16);
   FUNC_7(VAR_33, VAR_31, VAR_38, "vlan-ctag=%#06x\n",
      VAR_37->vlan_ctag);
  }
 } else {
  unsigned int VAR_42 = FUNC_2(VAR_37->attributes,
        VAR_26, VAR_28);

  if ((VAR_40 == 0x05) || (VAR_40 == 0x06)) {
   FUNC_4(VAR_37->attributes, VAR_26,
           VAR_3, 0);
   FUNC_4(VAR_37->attributes, VAR_26,
           VAR_29, 0);
   VAR_33->ext_stats.rx_csum_errors++;
  } else if (VAR_42 && ((VAR_40 == 0x09) || (VAR_40 == 0x0a))) {
   FUNC_4(VAR_37->attributes, VAR_26,
           VAR_3, 0);
   FUNC_4(VAR_37->attributes, VAR_26,
           VAR_29, 0);
   VAR_33->ext_stats.rx_vxlan_csum_errors++;
  } else {
   FUNC_4(VAR_37->errors, VAR_27,
           VAR_9, 1);
  }
 }

 VAR_33->ext_stats.rxq_packets[VAR_32->queue_index]++;
 VAR_33->ext_stats.rxq_bytes[VAR_32->queue_index] += VAR_35->rx.len;

 FUNC_0("<--xgbe_dev_read: %s - descriptor=%u (cur=%d)\n", VAR_32->name,
       VAR_34->cur & (VAR_34->rdesc_count - 1), VAR_34->cur);

 return 0;
}
