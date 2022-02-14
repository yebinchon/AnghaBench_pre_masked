
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct hclge_fd_rule_tuples {void** dst_ip; void** src_ip; void* dst_port; int ip_proto; void* ether_proto; } ;
struct TYPE_15__ {int u6_addr32; } ;
struct TYPE_16__ {TYPE_6__ in6_u; } ;
struct TYPE_13__ {int u6_addr32; } ;
struct TYPE_14__ {TYPE_4__ in6_u; } ;
struct TYPE_17__ {TYPE_7__ dst; TYPE_5__ src; } ;
struct TYPE_12__ {int dst; int src; } ;
struct TYPE_18__ {TYPE_8__ v6addrs; TYPE_3__ v4addrs; } ;
struct TYPE_11__ {scalar_t__ n_proto; int ip_proto; } ;
struct TYPE_10__ {scalar_t__ dst; } ;
struct flow_keys {TYPE_9__ addrs; TYPE_2__ basic; TYPE_1__ ports; } ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (void**,int ,int) ;

__attribute__((used)) static void FUNC_4(const struct flow_keys *VAR_1,
         struct hclge_fd_rule_tuples *VAR_2)
{
 VAR_2->ether_proto = FUNC_0(VAR_1->basic.n_proto);
 VAR_2->ip_proto = VAR_1->basic.ip_proto;
 VAR_2->dst_port = FUNC_0(VAR_1->ports.dst);

 if (VAR_1->basic.n_proto == FUNC_2(VAR_0)) {
  VAR_2->src_ip[3] = FUNC_1(VAR_1->addrs.v4addrs.src);
  VAR_2->dst_ip[3] = FUNC_1(VAR_1->addrs.v4addrs.dst);
 } else {
  FUNC_3(VAR_2->src_ip,
         VAR_1->addrs.v6addrs.src.in6_u.u6_addr32,
         sizeof(VAR_2->src_ip));
  FUNC_3(VAR_2->dst_ip,
         VAR_1->addrs.v6addrs.dst.in6_u.u6_addr32,
         sizeof(VAR_2->dst_ip));
 }
}
