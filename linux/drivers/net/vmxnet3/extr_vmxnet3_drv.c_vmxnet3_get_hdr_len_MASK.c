
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tcp; scalar_t__ v6; scalar_t__ v4; } ;
union Vmxnet3_GenericDesc {TYPE_1__ rcd; } ;
typedef int u32 ;
struct vmxnet3_adapter {int dummy; } ;
struct vlan_ethhdr {scalar_t__ h_vlan_encapsulated_proto; } ;
struct tcphdr {int doff; } ;
struct sk_buff {scalar_t__ protocol; } ;
struct ipv6hdr {scalar_t__ nexthdr; } ;
struct iphdr {scalar_t__ protocol; int ihl; } ;
struct ethhdr {scalar_t__ h_proto; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 struct ethhdr* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static u32
FUNC_6(struct vmxnet3_adapter *VAR_5, struct sk_buff *VAR_6,
      union Vmxnet3_GenericDesc *VAR_7)
{
 u32 VAR_8, VAR_9;
 union {
  void *ptr;
  struct ethhdr *eth;
  struct vlan_ethhdr *veth;
  struct iphdr *ipv4;
  struct ipv6hdr *ipv6;
  struct tcphdr *tcp;
 } VAR_10;
 FUNC_0(VAR_7->rcd.tcp == 0);

 VAR_9 = FUNC_4(VAR_6);
 if (FUNC_5(sizeof(struct iphdr) + sizeof(struct tcphdr) > VAR_9))
  return 0;

 if (VAR_6->protocol == FUNC_1(VAR_1) ||
     VAR_6->protocol == FUNC_1(VAR_0))
  VAR_8 = sizeof(struct vlan_ethhdr);
 else
  VAR_8 = sizeof(struct ethhdr);

 VAR_10.eth = FUNC_2(VAR_6);
 if (VAR_7->rcd.v4) {
  FUNC_0(VAR_10.eth->h_proto != FUNC_3(VAR_2) &&
         VAR_10.veth->h_vlan_encapsulated_proto != FUNC_3(VAR_2));
  VAR_10.ptr += VAR_8;
  FUNC_0(VAR_10.ipv4->protocol != VAR_4);
  VAR_8 = VAR_10.ipv4->ihl << 2;
  VAR_10.ptr += VAR_10.ipv4->ihl << 2;
 } else if (VAR_7->rcd.v6) {
  FUNC_0(VAR_10.eth->h_proto != FUNC_3(VAR_3) &&
         VAR_10.veth->h_vlan_encapsulated_proto != FUNC_3(VAR_3));
  VAR_10.ptr += VAR_8;



  if (VAR_10.ipv6->nexthdr != VAR_4)
   return sizeof(struct ipv6hdr) + sizeof(struct tcphdr);
  VAR_8 = sizeof(struct ipv6hdr);
  VAR_10.ptr += sizeof(struct ipv6hdr);
 } else {

  return 0;
 }

 if (VAR_8 + sizeof(struct tcphdr) > VAR_9)
  return 0;

 return (VAR_8 + (VAR_10.tcp->doff << 2));
}
