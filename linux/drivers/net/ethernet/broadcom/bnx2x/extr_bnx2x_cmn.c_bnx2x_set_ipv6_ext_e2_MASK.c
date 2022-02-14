
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {scalar_t__ nexthdr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ipv6hdr* FUNC_0 (struct sk_buff*) ;
 struct ipv6hdr* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_2(struct sk_buff *VAR_4, u32 *VAR_5,
      u32 VAR_6)
{
 struct ipv6hdr *VAR_7;

 if (!(VAR_6 & (VAR_2 | VAR_3)))
  return;

 if (VAR_6 & VAR_2)
  VAR_7 = FUNC_0(VAR_4);
 else
  VAR_7 = FUNC_1(VAR_4);

 if (VAR_7->nexthdr == VAR_1)
  *VAR_5 |= VAR_0;
}
