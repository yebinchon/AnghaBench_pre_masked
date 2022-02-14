
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct TYPE_9__ {int dst; int src; } ;
struct TYPE_8__ {scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_10__ {TYPE_4__ v6addrs; TYPE_3__ v4addrs; } ;
struct TYPE_7__ {scalar_t__ n_proto; } ;
struct TYPE_6__ {scalar_t__ src; scalar_t__ dst; } ;
struct flow_keys {TYPE_5__ addrs; TYPE_2__ basic; TYPE_1__ ports; } ;
struct arfs_tuple {scalar_t__ src_port; scalar_t__ dst_port; scalar_t__ etype; scalar_t__ src_ipv4; scalar_t__ dst_ipv4; int dst_ipv6; int src_ipv6; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static bool FUNC_2(const struct arfs_tuple *VAR_2, const struct flow_keys *VAR_3)
{
 if (VAR_2->src_port != VAR_3->ports.src || VAR_2->dst_port != VAR_3->ports.dst)
  return 0;
 if (VAR_2->etype != VAR_3->basic.n_proto)
  return 0;
 if (VAR_2->etype == FUNC_0(VAR_0))
  return VAR_2->src_ipv4 == VAR_3->addrs.v4addrs.src &&
         VAR_2->dst_ipv4 == VAR_3->addrs.v4addrs.dst;
 if (VAR_2->etype == FUNC_0(VAR_1))
  return !FUNC_1(&VAR_2->src_ipv6, &VAR_3->addrs.v6addrs.src,
          sizeof(struct in6_addr)) &&
         !FUNC_1(&VAR_2->dst_ipv6, &VAR_3->addrs.v6addrs.dst,
          sizeof(struct in6_addr));
 return 0;
}
