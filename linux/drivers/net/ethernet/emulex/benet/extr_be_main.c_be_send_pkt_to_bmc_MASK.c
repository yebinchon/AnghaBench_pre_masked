
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct udphdr {int dest; } ;
struct sk_buff {scalar_t__ protocol; scalar_t__ data; } ;
struct ipv6hdr {scalar_t__ nexthdr; } ;
struct icmp6hdr {int icmp6_type; } ;
struct ethhdr {int h_dest; } ;
struct be_adapter {int dummy; } ;





 int VAR_0 ;
 scalar_t__ VAR_1 ;




 struct sk_buff* FUNC_0 (struct be_adapter*,struct sk_buff*,int *) ;
 int FUNC_1 (struct be_adapter*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct icmp6hdr* FUNC_3 (struct sk_buff*) ;
 struct ipv6hdr* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct be_adapter*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct be_adapter*,struct ethhdr*) ;
 int FUNC_7 (struct be_adapter*) ;
 int FUNC_8 (struct be_adapter*) ;
 int FUNC_9 (struct be_adapter*) ;
 int FUNC_10 (struct be_adapter*) ;
 int FUNC_11 (struct be_adapter*) ;
 scalar_t__ FUNC_12 (struct be_adapter*,struct ethhdr*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct be_adapter*) ;
 scalar_t__ FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (int ) ;
 struct udphdr* FUNC_17 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_18(struct be_adapter *VAR_2,
          struct sk_buff **VAR_3)
{
 struct ethhdr *VAR_4 = (struct ethhdr *)(*VAR_3)->data;
 bool VAR_5 = 0;

 if (!FUNC_1(VAR_2))
  goto done;

 if (!FUNC_13(VAR_4->h_dest))
  goto done;

 if (FUNC_12(VAR_2, VAR_4) ||
     FUNC_6(VAR_2, VAR_4) ||
     FUNC_5(VAR_2, (*VAR_3))) {
  VAR_5 = 1;
  goto done;
 }

 if ((*VAR_3)->protocol == FUNC_2(VAR_0)) {
  struct ipv6hdr *VAR_6 = FUNC_4((*VAR_3));
  u8 VAR_7 = VAR_6->nexthdr;

  if (VAR_7 == VAR_1) {
   struct icmp6hdr *VAR_8 = FUNC_3((*VAR_3));

   switch (VAR_8->icmp6_type) {
   case 130:
    VAR_5 = FUNC_10(VAR_2);
    goto done;
   case 131:
    VAR_5 = FUNC_9(VAR_2);
    goto done;
   default:
    break;
   }
  }
 }

 if (FUNC_15((*VAR_3))) {
  struct udphdr *VAR_9 = FUNC_17((*VAR_3));

  switch (FUNC_16(VAR_9->dest)) {
  case 133:
   VAR_5 = FUNC_7(VAR_2);
   goto done;
  case 132:
   VAR_5 = FUNC_8(VAR_2);
   goto done;
  case 129:
  case 128:
   VAR_5 = FUNC_14(VAR_2);
   goto done;
  case 134:
   VAR_5 = FUNC_11(VAR_2);
   goto done;
  default:
   break;
  }
 }
done:



 if (VAR_5)
  *VAR_3 = FUNC_0(VAR_2, *VAR_3, ((void*)0));

 return VAR_5;
}
