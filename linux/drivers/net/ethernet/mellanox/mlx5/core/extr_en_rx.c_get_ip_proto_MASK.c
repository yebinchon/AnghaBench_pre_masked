
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {void* data; } ;
struct ipv6hdr {int nexthdr; } ;
struct iphdr {int protocol; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static u8 FUNC_1(struct sk_buff *VAR_1, int VAR_2, __be16 VAR_3)
{
 void *VAR_4 = VAR_1->data + VAR_2;

 return (VAR_3 == FUNC_0(VAR_0)) ? ((struct iphdr *)VAR_4)->protocol :
         ((struct ipv6hdr *)VAR_4)->nexthdr;
}
