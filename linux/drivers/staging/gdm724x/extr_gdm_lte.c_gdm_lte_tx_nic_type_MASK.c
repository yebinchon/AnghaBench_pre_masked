
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vlan_ethhdr {int h_vlan_encapsulated_proto; } ;
struct udphdr {int dest; } ;
struct sk_buff {void* data; } ;
struct nic {int nic_id; } ;
struct net_device {int dummy; } ;
struct ipv6hdr {int nexthdr; } ;
struct iphdr {int protocol; } ;
struct icmp6hdr {int icmp6_type; } ;
struct ethhdr {int h_proto; } ;
typedef int s32 ;


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
 struct nic* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static s32 FUNC_2(struct net_device *VAR_12, struct sk_buff *VAR_13)
{
 struct nic *VAR_14 = FUNC_0(VAR_12);
 struct ethhdr *VAR_15;
 struct vlan_ethhdr *VAR_16;
 struct iphdr *VAR_17;
 struct ipv6hdr *VAR_18;
 int VAR_19;
 void *VAR_20;
 u32 VAR_21;


 VAR_21 = 0x00000010 | VAR_14->nic_id;


 VAR_15 = (struct ethhdr *)VAR_13->data;
 if (FUNC_1(VAR_15->h_proto) == VAR_1) {
  VAR_16 = (struct vlan_ethhdr *)VAR_13->data;
  VAR_19 = FUNC_1(VAR_16->h_vlan_encapsulated_proto);
  VAR_20 = VAR_13->data + VAR_11;
  VAR_21 |= VAR_9;
 } else {
  VAR_19 = FUNC_1(VAR_15->h_proto);
  VAR_20 = VAR_13->data + VAR_0;
 }


 switch (VAR_19) {
 case 130:
  VAR_21 |= VAR_5;
  break;
 case 129:
  VAR_21 |= VAR_7;
  VAR_17 = VAR_20;


  if (VAR_17->protocol == VAR_3) {
   struct udphdr *VAR_22 =
     VAR_20 + sizeof(struct iphdr);
   if (FUNC_1(VAR_22->dest) == 67 || FUNC_1(VAR_22->dest) == 68)
    VAR_21 |= VAR_6;
  }
  break;
 case 128:
  VAR_21 |= VAR_8;
  VAR_18 = VAR_20;

  if (VAR_18->nexthdr == VAR_2) {
   struct icmp6hdr *VAR_23 =
     VAR_20 + sizeof(struct ipv6hdr);
   if (VAR_23->icmp6_type == VAR_4)
    VAR_21 |= VAR_10;
  } else if (VAR_18->nexthdr == VAR_3) {
   struct udphdr *VAR_24 =
     VAR_20 + sizeof(struct ipv6hdr);
   if (FUNC_1(VAR_24->dest) == 546 || FUNC_1(VAR_24->dest) == 547)
    VAR_21 |= VAR_6;
  }
  break;
 default:
  break;
 }

 return VAR_21;
}
