
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_arfs_tuple {scalar_t__ eth_proto; scalar_t__ src_ipv4; scalar_t__ dst_ipv4; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct qede_arfs_tuple *VAR_1,
        struct qede_arfs_tuple *VAR_2)
{
 if (VAR_1->eth_proto != FUNC_0(VAR_0) ||
     VAR_2->eth_proto != FUNC_0(VAR_0))
  return 0;

 return (VAR_1->src_ipv4 == VAR_2->src_ipv4) &&
        (VAR_1->dst_ipv4 == VAR_2->dst_ipv4);
}
