
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_arfs_tuple {int dst_port; int src_port; int ip_proto; int dst_ipv4; int src_ipv4; int eth_proto; } ;
struct iphdr {int version; int ihl; int tot_len; int protocol; int daddr; int saddr; } ;
struct ethhdr {int h_proto; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct qede_arfs_tuple*) ;

__attribute__((used)) static void FUNC_2(struct qede_arfs_tuple *VAR_1,
         void *VAR_2)
{
 __be16 *VAR_3 = (__be16 *)(VAR_2 + VAR_0 + sizeof(struct iphdr));
 struct iphdr *VAR_4 = (struct iphdr *)(VAR_2 + VAR_0);
 struct ethhdr *VAR_5 = (struct ethhdr *)VAR_2;

 VAR_5->h_proto = VAR_1->eth_proto;
 VAR_4->saddr = VAR_1->src_ipv4;
 VAR_4->daddr = VAR_1->dst_ipv4;
 VAR_4->version = 0x4;
 VAR_4->ihl = 0x5;
 VAR_4->protocol = VAR_1->ip_proto;
 VAR_4->tot_len = FUNC_0(FUNC_1(VAR_1) - VAR_0);


 VAR_3[0] = VAR_1->src_port;
 VAR_3[1] = VAR_1->dst_port;
}
