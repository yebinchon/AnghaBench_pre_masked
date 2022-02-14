
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; scalar_t__ first; int vlan_tci; scalar_t__ off_frame_data; int len; scalar_t__ rc; int correlator; } ;
union sub_crq {TYPE_1__ rx_comp; } ;
typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; int ip_summed; int protocol; } ;
struct TYPE_5__ {int rx_bytes; int rx_packets; } ;
struct net_device {TYPE_2__ stats; } ;
struct napi_struct {struct net_device* dev; } ;
struct ibmvnic_rx_buff {scalar_t__ data; struct sk_buff* skb; } ;
struct ibmvnic_adapter {int napi; scalar_t__ reset_reason; scalar_t__ state; int * rx_scrq; int * rx_pool; TYPE_3__* rx_stats_buffers; scalar_t__ rx_vlan_header_insertion; int resetting; } ;
struct TYPE_6__ {int bytes; int packets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct ibmvnic_adapter*,int ) ;
 int FUNC_6 (struct ibmvnic_adapter*,int ) ;
 int FUNC_7 (struct sk_buff*,struct net_device*) ;
 int FUNC_8 (int ) ;
 union sub_crq* FUNC_9 (struct ibmvnic_adapter*,int ) ;
 int FUNC_10 (struct napi_struct*,int) ;
 int FUNC_11 (struct napi_struct*,struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct napi_struct*) ;
 int FUNC_13 (struct net_device*,char*,scalar_t__) ;
 struct ibmvnic_adapter* FUNC_14 (struct net_device*) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (struct ibmvnic_adapter*,int ) ;
 int FUNC_17 (struct ibmvnic_adapter*,struct ibmvnic_rx_buff*) ;
 int FUNC_18 (struct ibmvnic_adapter*,int *) ;
 int FUNC_19 (struct sk_buff*,scalar_t__,scalar_t__) ;
 int FUNC_20 (struct sk_buff*,scalar_t__) ;
 int FUNC_21 (struct sk_buff*,int) ;
 scalar_t__ FUNC_22 (int ,int *) ;
 scalar_t__ FUNC_23 (int) ;

__attribute__((used)) static int FUNC_24(struct napi_struct *VAR_7, int VAR_8)
{
 struct net_device *VAR_9 = VAR_7->dev;
 struct ibmvnic_adapter *VAR_10 = FUNC_14(VAR_9);
 int VAR_11 = (int)(VAR_7 - VAR_10->napi);
 int VAR_12 = 0;

restart_poll:
 while (VAR_12 < VAR_8) {
  struct sk_buff *VAR_13;
  struct ibmvnic_rx_buff *VAR_14;
  union sub_crq *VAR_15;
  u32 VAR_16;
  u16 VAR_17;
  u8 VAR_18 = 0;

  if (FUNC_23(FUNC_22(0, &VAR_10->resetting) &&
        VAR_10->reset_reason != VAR_6)) {
   FUNC_6(VAR_10, VAR_10->rx_scrq[VAR_11]);
   FUNC_10(VAR_7, VAR_12);
   return VAR_12;
  }

  if (!FUNC_16(VAR_10, VAR_10->rx_scrq[VAR_11]))
   break;
  VAR_15 = FUNC_9(VAR_10, VAR_10->rx_scrq[VAR_11]);
  VAR_14 =
      (struct ibmvnic_rx_buff *)FUNC_3(VAR_15->
         rx_comp.correlator);

  if (VAR_15->rx_comp.rc) {
   FUNC_13(VAR_9, "rx buffer returned with rc %x\n",
       FUNC_1(VAR_15->rx_comp.rc));

   VAR_15->rx_comp.first = 0;
   FUNC_4(VAR_14->skb);
   FUNC_17(VAR_10, VAR_14);
   continue;
  } else if (!VAR_14->skb) {

   VAR_15->rx_comp.first = 0;
   FUNC_17(VAR_10, VAR_14);
   continue;
  }

  VAR_16 = FUNC_2(VAR_15->rx_comp.len);
  VAR_17 = FUNC_1(VAR_15->rx_comp.off_frame_data);
  VAR_18 = VAR_15->rx_comp.flags;
  VAR_13 = VAR_14->skb;
  FUNC_19(VAR_13, VAR_14->data + VAR_17,
     VAR_16);




  if (VAR_10->rx_vlan_header_insertion &&
      (VAR_18 & VAR_4))
   FUNC_0(VAR_13, FUNC_8(VAR_1),
            FUNC_15(VAR_15->rx_comp.vlan_tci));


  VAR_15->rx_comp.first = 0;
  FUNC_17(VAR_10, VAR_14);

  FUNC_20(VAR_13, VAR_16);
  VAR_13->protocol = FUNC_7(VAR_13, VAR_9);
  FUNC_21(VAR_13, VAR_11);

  if (VAR_18 & VAR_2 &&
      VAR_18 & VAR_3) {
   VAR_13->ip_summed = VAR_0;
  }

  VAR_16 = VAR_13->len;
  FUNC_11(VAR_7, VAR_13);
  VAR_9->stats.rx_packets++;
  VAR_9->stats.rx_bytes += VAR_16;
  VAR_10->rx_stats_buffers[VAR_11].packets++;
  VAR_10->rx_stats_buffers[VAR_11].bytes += VAR_16;
  VAR_12++;
 }

 if (VAR_10->state != VAR_5)
  FUNC_18(VAR_10, &VAR_10->rx_pool[VAR_11]);

 if (VAR_12 < VAR_8) {
  FUNC_6(VAR_10, VAR_10->rx_scrq[VAR_11]);
  FUNC_10(VAR_7, VAR_12);
  if (FUNC_16(VAR_10, VAR_10->rx_scrq[VAR_11]) &&
      FUNC_12(VAR_7)) {
   FUNC_5(VAR_10, VAR_10->rx_scrq[VAR_11]);
   goto restart_poll;
  }
 }
 return VAR_12;
}
