
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct mwifiex_private {int dummy; } ;
struct TYPE_2__ {int ar_op; } ;
struct mwifiex_arp_eth_header {int * ar_tip; int * ar_sip; TYPE_1__ hdr; } ;
struct ipv6hdr {int daddr; int saddr; } ;
struct in6_addr {int dummy; } ;
struct icmp6hdr {int icmp6_type; } ;
struct ethhdr {int h_proto; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(struct mwifiex_private *VAR_3,
          struct sk_buff *VAR_4)
{
 const struct mwifiex_arp_eth_header *VAR_5;
 struct ethhdr *VAR_6;
 struct ipv6hdr *VAR_7;
 struct icmp6hdr *VAR_8;

 VAR_6 = (struct ethhdr *)VAR_4->data;
 switch (FUNC_2(VAR_6->h_proto)) {
 case 129:
  VAR_5 = (void *)(VAR_4->data + sizeof(struct ethhdr));
  if (VAR_5->hdr.ar_op == FUNC_0(VAR_0) ||
      VAR_5->hdr.ar_op == FUNC_0(VAR_1)) {
   if (!FUNC_1(VAR_5->ar_sip, VAR_5->ar_tip, 4))
    return 1;
  }
  break;
 case 128:
  VAR_7 = (void *)(VAR_4->data + sizeof(struct ethhdr));
  VAR_8 = (void *)(VAR_4->data + sizeof(struct ethhdr) +
      sizeof(struct ipv6hdr));
  if (VAR_2 == VAR_8->icmp6_type) {
   if (!FUNC_1(&VAR_7->saddr, &VAR_7->daddr,
        sizeof(struct in6_addr)))
    return 1;
  }
  break;
 default:
  break;
 }

 return 0;
}
