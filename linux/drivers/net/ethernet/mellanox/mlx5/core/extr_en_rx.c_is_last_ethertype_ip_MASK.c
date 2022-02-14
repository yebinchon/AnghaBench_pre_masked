
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int dummy; } ;
struct ethhdr {scalar_t__ h_proto; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,scalar_t__,int*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static inline bool FUNC_3(struct sk_buff *VAR_2, int *VAR_3,
     __be16 *VAR_4)
{
 *VAR_4 = ((struct ethhdr *)VAR_2->data)->h_proto;
 *VAR_4 = FUNC_0(VAR_2, *VAR_4, VAR_3);

 if (*VAR_4 == FUNC_1(VAR_0))
  return FUNC_2(VAR_2, *VAR_3 + sizeof(struct iphdr));

 if (*VAR_4 == FUNC_1(VAR_1))
  return FUNC_2(VAR_2, *VAR_3 + sizeof(struct ipv6hdr));

 return 0;
}
