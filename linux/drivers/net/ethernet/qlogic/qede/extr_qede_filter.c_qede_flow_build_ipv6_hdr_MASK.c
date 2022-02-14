
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int dummy; } ;
struct tcphdr {int dummy; } ;
struct qede_arfs_tuple {scalar_t__ ip_proto; int dst_port; int src_port; int dst_ipv6; int src_ipv6; int eth_proto; } ;
struct ipv6hdr {int version; void* payload_len; int nexthdr; int daddr; int saddr; } ;
struct in6_addr {int dummy; } ;
struct ethhdr {int h_proto; } ;
typedef int __be16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(struct qede_arfs_tuple *VAR_4,
         void *VAR_5)
{
 __be16 *VAR_6 = (__be16 *)(VAR_5 + VAR_0 + sizeof(struct ipv6hdr));
 struct ipv6hdr *VAR_7 = (struct ipv6hdr *)(VAR_5 + VAR_0);
 struct ethhdr *VAR_8 = (struct ethhdr *)VAR_5;

 VAR_8->h_proto = VAR_4->eth_proto;
 FUNC_1(&VAR_7->saddr, &VAR_4->src_ipv6, sizeof(struct in6_addr));
 FUNC_1(&VAR_7->daddr, &VAR_4->dst_ipv6, sizeof(struct in6_addr));
 VAR_7->version = 0x6;

 if (VAR_4->ip_proto == VAR_1) {
  VAR_7->nexthdr = VAR_2;
  VAR_7->payload_len = FUNC_0(sizeof(struct tcphdr));
 } else {
  VAR_7->nexthdr = VAR_3;
  VAR_7->payload_len = FUNC_0(sizeof(struct udphdr));
 }


 VAR_6[0] = VAR_4->src_port;
 VAR_6[1] = VAR_4->dst_port;
}
