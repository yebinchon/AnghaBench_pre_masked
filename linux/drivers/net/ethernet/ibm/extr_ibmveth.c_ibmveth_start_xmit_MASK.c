
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


struct TYPE_10__ {unsigned int flags_len; void* address; } ;
union ibmveth_buf_desc {TYPE_3__ fields; } ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ protocol; int csum_offset; unsigned int len; int data; } ;
struct TYPE_8__ {unsigned int tx_bytes; int tx_dropped; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct ibmveth_adapter {int tx_map_failed; TYPE_2__* vdev; int tx_send_failed; int tx_large_packets; scalar_t__ fw_large_send_support; void* bounce_buffer_dma; int bounce_buffer; scalar_t__ is_active_trunk; } ;
typedef int skb_frag_t ;
typedef int netdev_tx_t ;
typedef void* dma_addr_t ;
typedef int descs ;
struct TYPE_14__ {scalar_t__ protocol; int check; } ;
struct TYPE_13__ {scalar_t__ nexthdr; } ;
struct TYPE_12__ {int nr_frags; scalar_t__ gso_size; int * frags; } ;
struct TYPE_11__ {int check; } ;
struct TYPE_9__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 void* FUNC_3 (int *,int ,unsigned int,int ) ;
 scalar_t__ FUNC_4 (int *,void*) ;
 int FUNC_5 (int *,void*,int,int ) ;
 int FUNC_6 (int *,void*,int,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct ibmveth_adapter*,union ibmveth_buf_desc*,unsigned long) ;
 TYPE_7__* FUNC_10 (struct sk_buff*) ;
 TYPE_6__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (union ibmveth_buf_desc*,int ,int) ;
 int FUNC_13 (struct net_device*,char*) ;
 struct ibmveth_adapter* FUNC_14 (struct net_device*) ;
 scalar_t__ FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,int ,unsigned int) ;
 void* FUNC_17 (int *,int const*,int ,unsigned int,int ) ;
 unsigned int FUNC_18 (int const*) ;
 scalar_t__ FUNC_19 (struct sk_buff*) ;
 unsigned int FUNC_20 (struct sk_buff*) ;
 scalar_t__ FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (struct sk_buff*) ;
 scalar_t__ FUNC_24 (struct sk_buff*) ;
 TYPE_5__* FUNC_25 (struct sk_buff*) ;
 unsigned char* FUNC_26 (struct sk_buff*) ;
 TYPE_4__* FUNC_27 (struct sk_buff*) ;
 unsigned int VAR_12 ;

__attribute__((used)) static netdev_tx_t FUNC_28(struct sk_buff *VAR_13,
          struct net_device *VAR_14)
{
 struct ibmveth_adapter *VAR_15 = FUNC_14(VAR_14);
 unsigned int VAR_16;
 union ibmveth_buf_desc VAR_17[6];
 int VAR_18, VAR_19;
 int VAR_20 = 0;
 dma_addr_t VAR_21;
 unsigned long VAR_22 = 0;




 if (VAR_15->is_active_trunk &&
     FUNC_19(VAR_13) && FUNC_0(VAR_13)) {
  VAR_14->stats.tx_dropped++;
  goto out;
 }





 if (FUNC_25(VAR_13)->nr_frags > 5 && FUNC_0(VAR_13)) {
  VAR_14->stats.tx_dropped++;
  goto out;
 }


 if (VAR_13->ip_summed == VAR_0 &&
     ((VAR_13->protocol == FUNC_8(VAR_2) &&
       FUNC_10(VAR_13)->protocol != VAR_10) ||
      (VAR_13->protocol == FUNC_8(VAR_3) &&
       FUNC_11(VAR_13)->nexthdr != VAR_10)) &&
     FUNC_15(VAR_13)) {

  FUNC_13(VAR_14, "tx: failed to checksum packet\n");
  VAR_14->stats.tx_dropped++;
  goto out;
 }

 VAR_16 = VAR_9;

 if (VAR_13->ip_summed == VAR_0) {
  unsigned char *VAR_23 = FUNC_26(VAR_13) +
      VAR_13->csum_offset;

  VAR_16 |= (VAR_8 | VAR_5);


  VAR_23[0] = 0;
  VAR_23[1] = 0;

  if (FUNC_21(VAR_13) && VAR_15->fw_large_send_support)
   VAR_16 |= VAR_7;
 }

retry_bounce:
 FUNC_12(VAR_17, 0, sizeof(VAR_17));






 if (VAR_20 || (!FUNC_23(VAR_13) &&
    (VAR_13->len < VAR_12))) {
  FUNC_16(VAR_13, VAR_15->bounce_buffer,
       VAR_13->len);

  VAR_17[0].fields.flags_len = VAR_16 | VAR_13->len;
  VAR_17[0].fields.address = VAR_15->bounce_buffer_dma;

  if (FUNC_9(VAR_15, VAR_17, 0)) {
   VAR_15->tx_send_failed++;
   VAR_14->stats.tx_dropped++;
  } else {
   VAR_14->stats.tx_packets++;
   VAR_14->stats.tx_bytes += VAR_13->len;
  }

  goto out;
 }


 VAR_21 = FUNC_3(&VAR_15->vdev->dev, VAR_13->data,
      FUNC_20(VAR_13), VAR_1);
 if (FUNC_4(&VAR_15->vdev->dev, VAR_21))
  goto map_failed;

 VAR_17[0].fields.flags_len = VAR_16 | FUNC_20(VAR_13);
 VAR_17[0].fields.address = VAR_21;


 for (VAR_19 = 0; VAR_19 < FUNC_25(VAR_13)->nr_frags; VAR_19++) {
  const skb_frag_t *VAR_24 = &FUNC_25(VAR_13)->frags[VAR_19];

  VAR_21 = FUNC_17(&VAR_15->vdev->dev, VAR_24, 0,
         FUNC_18(VAR_24), VAR_1);

  if (FUNC_4(&VAR_15->vdev->dev, VAR_21))
   goto map_failed_frags;

  VAR_17[VAR_19+1].fields.flags_len = VAR_16 | FUNC_18(VAR_24);
  VAR_17[VAR_19+1].fields.address = VAR_21;
 }

 if (VAR_13->ip_summed == VAR_0 && FUNC_21(VAR_13)) {
  if (VAR_15->fw_large_send_support) {
   VAR_22 = (unsigned long)FUNC_25(VAR_13)->gso_size;
   VAR_15->tx_large_packets++;
  } else if (!FUNC_22(VAR_13)) {




   FUNC_10(VAR_13)->check = 0xffff;
   FUNC_27(VAR_13)->check =
    FUNC_1(FUNC_25(VAR_13)->gso_size);
   VAR_15->tx_large_packets++;
  }
 }

 if (FUNC_9(VAR_15, VAR_17, VAR_22)) {
  VAR_15->tx_send_failed++;
  VAR_14->stats.tx_dropped++;
 } else {
  VAR_14->stats.tx_packets++;
  VAR_14->stats.tx_bytes += VAR_13->len;
 }

 FUNC_6(&VAR_15->vdev->dev,
    VAR_17[0].fields.address,
    VAR_17[0].fields.flags_len & VAR_6,
    VAR_1);

 for (VAR_19 = 1; VAR_19 < FUNC_25(VAR_13)->nr_frags + 1; VAR_19++)
  FUNC_5(&VAR_15->vdev->dev, VAR_17[VAR_19].fields.address,
          VAR_17[VAR_19].fields.flags_len & VAR_6,
          VAR_1);

out:
 FUNC_2(VAR_13);
 return VAR_11;

map_failed_frags:
 VAR_18 = VAR_19+1;
 for (VAR_19 = 1; VAR_19 < VAR_18; VAR_19++)
  FUNC_5(&VAR_15->vdev->dev, VAR_17[VAR_19].fields.address,
          VAR_17[VAR_19].fields.flags_len & VAR_6,
          VAR_1);

 FUNC_6(&VAR_15->vdev->dev,
    VAR_17[0].fields.address,
    VAR_17[0].fields.flags_len & VAR_6,
    VAR_1);
map_failed:
 if (!FUNC_7(VAR_4))
  FUNC_13(VAR_14, "tx: unable to map xmit buffer\n");
 VAR_15->tx_map_failed++;
 if (FUNC_24(VAR_13)) {
  VAR_14->stats.tx_dropped++;
  goto out;
 }
 VAR_20 = 1;
 goto retry_bounce;
}
