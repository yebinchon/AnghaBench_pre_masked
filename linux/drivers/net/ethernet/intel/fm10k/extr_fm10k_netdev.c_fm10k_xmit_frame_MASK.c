
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_hdr {scalar_t__ h_vlan_TCI; scalar_t__ h_vlan_encapsulated_proto; } ;
struct sk_buff {unsigned int queue_mapping; scalar_t__ protocol; int len; scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct fm10k_intfc {int * tx_ring; int num_tx_queues; } ;
typedef int netdev_tx_t ;
typedef scalar_t__ __be16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,scalar_t__,int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,scalar_t__,int) ;
 struct fm10k_intfc* FUNC_8 (struct net_device*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct sk_buff*) ;
 struct sk_buff* FUNC_14 (struct sk_buff*,int ) ;
 int FUNC_15 (struct sk_buff*) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_17(struct sk_buff *VAR_8, struct net_device *VAR_9)
{
 struct fm10k_intfc *VAR_10 = FUNC_8(VAR_9);
 int VAR_11 = FUNC_0(VAR_10->num_tx_queues);
 unsigned int VAR_12 = VAR_8->queue_mapping;
 int VAR_13;

 if (!VAR_11)
  return VAR_4;

 if ((VAR_8->protocol == FUNC_6(VAR_1)) &&
     !FUNC_15(VAR_8)) {



  struct vlan_hdr *VAR_14;
  __be16 VAR_15;


  VAR_8 = FUNC_14(VAR_8, VAR_3);
  if (!VAR_8)
   return VAR_5;


  if (FUNC_16(!FUNC_10(VAR_8, VAR_6)))
   return VAR_5;


  VAR_13 = FUNC_11(VAR_8, 0);
  if (VAR_13) {
   FUNC_4(VAR_8);
   return VAR_5;
  }


  VAR_14 = (struct vlan_hdr *)(VAR_8->data + VAR_0);


  FUNC_3(VAR_8,
           FUNC_6(VAR_1),
           FUNC_9(VAR_14->h_vlan_TCI));
  VAR_15 = VAR_14->h_vlan_encapsulated_proto;
  VAR_8->protocol = (FUNC_9(VAR_15) >= 1536) ? VAR_15 :
        FUNC_6(VAR_2);


  FUNC_7(VAR_8->data + VAR_7, VAR_8->data, 12);
  FUNC_1(VAR_8, VAR_7);
  FUNC_13(VAR_8);
 }




 if (FUNC_16(VAR_8->len < 17)) {
  int VAR_16 = 17 - VAR_8->len;

  if (FUNC_12(VAR_8, VAR_16))
   return VAR_5;
  FUNC_2(VAR_8, VAR_16);
 }

 if (VAR_12 >= VAR_11)
  VAR_12 %= VAR_11;

 VAR_13 = FUNC_5(VAR_8, VAR_10->tx_ring[VAR_12]);

 return VAR_13;
}
