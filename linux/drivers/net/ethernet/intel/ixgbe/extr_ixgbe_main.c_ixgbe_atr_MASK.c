
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int vlan_id; int flow_type; } ;
struct TYPE_6__ {int src; int dst; } ;
union ixgbe_atr_hash_dword {int ip; TYPE_4__ formatted; TYPE_1__ port; int dword; } ;
struct tcphdr {int dest; int source; int syn; scalar_t__ fin; } ;
struct sk_buff {unsigned char* data; scalar_t__ encapsulation; } ;
struct ixgbe_tx_buffer {int protocol; int tx_flags; struct sk_buff* skb; } ;
struct ixgbe_ring {scalar_t__ atr_sample_rate; scalar_t__ atr_count; int queue_index; struct ixgbe_q_vector* q_vector; } ;
struct ixgbe_q_vector {struct ixgbe_adapter* adapter; } ;
struct ixgbe_adapter {scalar_t__ vxlan_port; scalar_t__ geneve_port; int hw; } ;
struct TYPE_8__ {int* s6_addr32; } ;
struct TYPE_7__ {int* s6_addr32; } ;
struct ipv6hdr {TYPE_3__ daddr; TYPE_2__ saddr; } ;
struct iphdr {scalar_t__ protocol; int version; int saddr; int daddr; } ;
typedef int __be16 ;
struct TYPE_10__ {scalar_t__ dest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,unsigned int*,int,int *,int *) ;
 int FUNC_2 (int *,union ixgbe_atr_hash_dword,union ixgbe_atr_hash_dword,int ) ;
 void* FUNC_3 (struct sk_buff*) ;
 unsigned char* FUNC_4 (struct sk_buff*) ;
 unsigned char* FUNC_5 (struct sk_buff*) ;
 TYPE_5__* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct ixgbe_ring *VAR_12,
        struct ixgbe_tx_buffer *VAR_13)
{
 struct ixgbe_q_vector *VAR_14 = VAR_12->q_vector;
 union ixgbe_atr_hash_dword VAR_15 = { .dword = 0 };
 union ixgbe_atr_hash_dword VAR_16 = { .dword = 0 };
 union {
  unsigned char *network;
  struct iphdr *ipv4;
  struct ipv6hdr *ipv6;
 } VAR_17;
 struct tcphdr *VAR_18;
 unsigned int VAR_19;
 struct sk_buff *VAR_20;
 __be16 VAR_21;
 int VAR_22;


 if (!VAR_14)
  return;


 if (!VAR_12->atr_sample_rate)
  return;

 VAR_12->atr_count++;


 if ((VAR_13->protocol != FUNC_0(VAR_1)) &&
     (VAR_13->protocol != FUNC_0(VAR_2)))
  return;


 VAR_20 = VAR_13->skb;
 VAR_17.network = FUNC_4(VAR_20);
 if (FUNC_7(VAR_17.network <= VAR_20->data))
  return;
 if (VAR_20->encapsulation &&
     VAR_13->protocol == FUNC_0(VAR_1) &&
     VAR_17.ipv4->protocol == VAR_4) {
  struct ixgbe_adapter *VAR_23 = VAR_14->adapter;

  if (FUNC_7(FUNC_5(VAR_20) < VAR_17.network +
        VAR_11))
   return;


  if (VAR_23->vxlan_port &&
      FUNC_6(VAR_20)->dest == VAR_23->vxlan_port)
   VAR_17.network = FUNC_3(VAR_20);

  if (VAR_23->geneve_port &&
      FUNC_6(VAR_20)->dest == VAR_23->geneve_port)
   VAR_17.network = FUNC_3(VAR_20);
 }




 if (FUNC_7(FUNC_5(VAR_20) < VAR_17.network + 40))
  return;


 switch (VAR_17.ipv4->version) {
 case 128:

  VAR_19 = (VAR_17.network[0] & 0x0F) << 2;
  VAR_22 = VAR_17.ipv4->protocol;
  break;
 case 6:
  VAR_19 = VAR_17.network - VAR_20->data;
  VAR_22 = FUNC_1(VAR_20, &VAR_19, VAR_3, ((void*)0), ((void*)0));
  VAR_19 -= VAR_17.network - VAR_20->data;
  break;
 default:
  return;
 }

 if (VAR_22 != VAR_3)
  return;

 if (FUNC_7(FUNC_5(VAR_20) < VAR_17.network +
       VAR_19 + sizeof(struct tcphdr)))
  return;

 VAR_18 = (struct tcphdr *)(VAR_17.network + VAR_19);


 if (VAR_18->fin)
  return;


 if (!VAR_18->syn && (VAR_12->atr_count < VAR_12->atr_sample_rate))
  return;


 VAR_12->atr_count = 0;

 VAR_21 = FUNC_0(VAR_13->tx_flags >> VAR_10);
 VAR_15.formatted.vlan_id = VAR_21;





 if (VAR_13->tx_flags & (VAR_9 | VAR_8))
  VAR_16.port.src ^= VAR_18->dest ^ FUNC_0(VAR_0);
 else
  VAR_16.port.src ^= VAR_18->dest ^ VAR_13->protocol;
 VAR_16.port.dst ^= VAR_18->source;

 switch (VAR_17.ipv4->version) {
 case 128:
  VAR_15.formatted.flow_type = VAR_5;
  VAR_16.ip ^= VAR_17.ipv4->saddr ^ VAR_17.ipv4->daddr;
  break;
 case 6:
  VAR_15.formatted.flow_type = VAR_6;
  VAR_16.ip ^= VAR_17.ipv6->saddr.s6_addr32[0] ^
        VAR_17.ipv6->saddr.s6_addr32[1] ^
        VAR_17.ipv6->saddr.s6_addr32[2] ^
        VAR_17.ipv6->saddr.s6_addr32[3] ^
        VAR_17.ipv6->daddr.s6_addr32[0] ^
        VAR_17.ipv6->daddr.s6_addr32[1] ^
        VAR_17.ipv6->daddr.s6_addr32[2] ^
        VAR_17.ipv6->daddr.s6_addr32[3];
  break;
 default:
  break;
 }

 if (VAR_17.network != FUNC_4(VAR_20))
  VAR_15.formatted.flow_type |= VAR_7;


 FUNC_2(&VAR_14->adapter->hw,
           VAR_15, VAR_16, VAR_12->queue_index);
}
