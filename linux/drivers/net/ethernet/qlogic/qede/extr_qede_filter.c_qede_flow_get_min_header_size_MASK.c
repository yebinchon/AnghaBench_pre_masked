
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int dummy; } ;
struct tcphdr {int dummy; } ;
struct qede_arfs_tuple {scalar_t__ eth_proto; scalar_t__ ip_proto; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct qede_arfs_tuple *VAR_3)
{
 int VAR_4 = VAR_0;

 if (VAR_3->eth_proto == FUNC_0(VAR_1))
  VAR_4 += sizeof(struct iphdr);
 else
  VAR_4 += sizeof(struct ipv6hdr);

 if (VAR_3->ip_proto == VAR_2)
  VAR_4 += sizeof(struct tcphdr);
 else
  VAR_4 += sizeof(struct udphdr);

 return VAR_4;
}
