
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_arfs_tuple {scalar_t__ eth_proto; int dst_ipv6; int src_ipv6; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;

__attribute__((used)) static bool FUNC_2(struct qede_arfs_tuple *VAR_1,
        struct qede_arfs_tuple *VAR_2)
{
 if (VAR_1->eth_proto != FUNC_0(VAR_0) ||
     VAR_2->eth_proto != FUNC_0(VAR_0))
  return 0;

 if (FUNC_1(&VAR_1->src_ipv6, &VAR_2->src_ipv6, sizeof(struct in6_addr)))
  return 0;

 if (FUNC_1(&VAR_1->dst_ipv6, &VAR_2->dst_ipv6, sizeof(struct in6_addr)))
  return 0;

 return 1;
}
