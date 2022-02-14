
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ data; } ;
struct ipv6hdr {scalar_t__ nexthdr; } ;
struct ipv6_opt_hdr {int hdrlen; } ;
struct ethhdr {scalar_t__ h_proto; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct sk_buff *VAR_4)
{
 struct ethhdr *VAR_5 = (struct ethhdr *)VAR_4->data;
 u16 VAR_6 = VAR_0;

 if (VAR_5->h_proto == FUNC_0(VAR_1)) {
  struct ipv6hdr *VAR_7 = (struct ipv6hdr *)(VAR_4->data + VAR_6);

  VAR_6 += sizeof(struct ipv6hdr);
  if (VAR_7->nexthdr != VAR_2 &&
      VAR_7->nexthdr != VAR_3) {
   struct ipv6_opt_hdr *VAR_8 =
    (struct ipv6_opt_hdr *)(VAR_4->data + VAR_6);


   if (VAR_8->hdrlen == 0xff)
    return 1;
  }
 }
 return 0;
}
