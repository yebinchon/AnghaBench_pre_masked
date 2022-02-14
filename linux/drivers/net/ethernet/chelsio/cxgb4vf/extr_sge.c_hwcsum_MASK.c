
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sk_buff {scalar_t__ csum_offset; } ;
struct ipv6hdr {scalar_t__ nexthdr; } ;
struct iphdr {int version; scalar_t__ protocol; } ;
typedef enum chip_type { ____Placeholder_chip_type } chip_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct iphdr* FUNC_6 (struct sk_buff const*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct sk_buff const*) ;
 int FUNC_9 (struct sk_buff const*) ;
 int FUNC_10 (struct sk_buff const*) ;

__attribute__((used)) static u64 FUNC_11(enum chip_type VAR_9, const struct sk_buff *VAR_10)
{
 int VAR_11;
 const struct iphdr *VAR_12 = FUNC_6(VAR_10);

 if (VAR_12->version == 4) {
  if (VAR_12->protocol == VAR_2)
   VAR_11 = VAR_5;
  else if (VAR_12->protocol == VAR_3)
   VAR_11 = VAR_7;
  else {
nocsum:




   return VAR_4;
  }
 } else {



  const struct ipv6hdr *VAR_13 = (const struct ipv6hdr *)VAR_12;

  if (VAR_13->nexthdr == VAR_2)
   VAR_11 = VAR_6;
  else if (VAR_13->nexthdr == VAR_3)
   VAR_11 = VAR_8;
  else
   goto nocsum;
 }

 if (FUNC_7(VAR_11 >= VAR_5)) {
  u64 VAR_14 = FUNC_5(FUNC_8(VAR_10));
  int VAR_15 = FUNC_9(VAR_10) - VAR_1;

  if (VAR_9 <= VAR_0)
   VAR_14 |= FUNC_4(VAR_15);
  else
   VAR_14 |= FUNC_0(VAR_15);
  return FUNC_3(VAR_11) | VAR_14;
 } else {
  int VAR_16 = FUNC_10(VAR_10);

  return FUNC_3(VAR_11) |
   FUNC_2(VAR_16) |
   FUNC_1(VAR_16 + VAR_10->csum_offset);
 }
}
