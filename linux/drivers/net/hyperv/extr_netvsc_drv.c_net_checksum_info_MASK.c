
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {scalar_t__ protocol; } ;
struct ipv6hdr {scalar_t__ nexthdr; } ;
struct iphdr {scalar_t__ protocol; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 struct ipv6hdr* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static u32 FUNC_3(struct sk_buff *VAR_8)
{
 if (VAR_8->protocol == FUNC_0(VAR_0)) {
  struct iphdr *VAR_9 = FUNC_1(VAR_8);

  if (VAR_9->protocol == VAR_1)
   return VAR_3;
  else if (VAR_9->protocol == VAR_2)
   return VAR_4;
 } else {
  struct ipv6hdr *VAR_10 = FUNC_2(VAR_8);

  if (VAR_10->nexthdr == VAR_1)
   return VAR_5;
  else if (VAR_10->nexthdr == VAR_2)
   return VAR_6;
 }

 return VAR_7;
}
