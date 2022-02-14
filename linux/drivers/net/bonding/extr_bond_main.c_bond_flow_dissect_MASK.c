
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ protocol; } ;
struct ipv6hdr {int nexthdr; } ;
struct iphdr {int ihl; int protocol; } ;
struct TYPE_4__ {int ports; } ;
struct flow_keys {TYPE_2__ ports; } ;
struct TYPE_3__ {scalar_t__ xmit_policy; } ;
struct bonding {TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct iphdr const*) ;
 int FUNC_3 (struct flow_keys*,struct iphdr const*) ;
 int FUNC_4 (struct flow_keys*,struct ipv6hdr const*) ;
 struct ipv6hdr* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,struct flow_keys*,int ) ;
 int FUNC_8 (struct sk_buff*,int,int) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static bool FUNC_11(struct bonding *VAR_4, struct sk_buff *VAR_5,
         struct flow_keys *VAR_6)
{
 const struct ipv6hdr *VAR_7;
 const struct iphdr *VAR_8;
 int VAR_9, VAR_10 = -1;

 if (VAR_4->params.xmit_policy > VAR_0)
  return FUNC_7(VAR_5, VAR_6, 0);

 VAR_6->ports.ports = 0;
 VAR_9 = FUNC_9(VAR_5);
 if (VAR_5->protocol == FUNC_0(VAR_2)) {
  if (FUNC_10(!FUNC_6(VAR_5, VAR_9 + sizeof(*VAR_8))))
   return 0;
  VAR_8 = FUNC_1(VAR_5);
  FUNC_3(VAR_6, VAR_8);
  VAR_9 += VAR_8->ihl << 2;
  if (!FUNC_2(VAR_8))
   VAR_10 = VAR_8->protocol;
 } else if (VAR_5->protocol == FUNC_0(VAR_3)) {
  if (FUNC_10(!FUNC_6(VAR_5, VAR_9 + sizeof(*VAR_7))))
   return 0;
  VAR_7 = FUNC_5(VAR_5);
  FUNC_4(VAR_6, VAR_7);
  VAR_9 += sizeof(*VAR_7);
  VAR_10 = VAR_7->nexthdr;
 } else {
  return 0;
 }
 if (VAR_4->params.xmit_policy == VAR_1 && VAR_10 >= 0)
  VAR_6->ports.ports = FUNC_8(VAR_5, VAR_9, VAR_10);

 return 1;
}
