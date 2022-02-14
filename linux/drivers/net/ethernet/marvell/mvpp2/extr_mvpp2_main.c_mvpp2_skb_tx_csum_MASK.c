
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {scalar_t__ ip_summed; } ;
struct mvpp2_port {int dummy; } ;
struct ipv6hdr {int nexthdr; } ;
struct iphdr {int ihl; int protocol; } ;
typedef scalar_t__ __be16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 struct ipv6hdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,scalar_t__,int,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static u32 FUNC_7(struct mvpp2_port *VAR_5, struct sk_buff *VAR_6)
{
 if (VAR_6->ip_summed == VAR_0) {
  int VAR_7 = 0;
  u8 VAR_8;
  __be16 VAR_9 = FUNC_6(VAR_6);

  if (VAR_9 == FUNC_0(VAR_1)) {
   struct iphdr *VAR_10 = FUNC_1(VAR_6);


   VAR_7 = VAR_10->ihl;
   VAR_8 = VAR_10->protocol;
  } else if (VAR_9 == FUNC_0(VAR_2)) {
   struct ipv6hdr *VAR_11 = FUNC_2(VAR_6);


   if (FUNC_4(VAR_6) > 0)
    VAR_7 = (FUNC_4(VAR_6) >> 2);
   VAR_8 = VAR_11->nexthdr;
  } else {
   return VAR_4;
  }

  return FUNC_3(FUNC_5(VAR_6),
        VAR_9, VAR_7, VAR_8);
 }

 return VAR_4 | VAR_3;
}
