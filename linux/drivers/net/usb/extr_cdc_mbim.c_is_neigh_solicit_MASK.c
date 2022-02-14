
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ icmp6_code; scalar_t__ icmp6_type; } ;
struct nd_msg {TYPE_1__ icmph; } ;
struct ipv6hdr {scalar_t__ nexthdr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(u8 *VAR_2, size_t VAR_3)
{
 struct ipv6hdr *VAR_4 = (void *)VAR_2;
 struct nd_msg *VAR_5 = (void *)(VAR_4 + 1);

 return (VAR_3 >= sizeof(struct ipv6hdr) + sizeof(struct nd_msg) &&
  VAR_4->nexthdr == VAR_0 &&
  VAR_5->icmph.icmp6_code == 0 &&
  VAR_5->icmph.icmp6_type == VAR_1);
}
