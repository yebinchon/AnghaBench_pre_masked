
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct xfrm_state {int data; } ;
struct sk_buff {unsigned int len; void* protocol; } ;
struct ipv6hdr {void* payload_len; } ;
struct iphdr {void* tot_len; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 void* FUNC_1 (scalar_t__) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct iphdr*) ;
 struct ipv6hdr* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (struct sk_buff*,unsigned int) ;
 int FUNC_7 (struct sk_buff*,unsigned int,unsigned int*,int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_1, struct xfrm_state *VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_2->data);
 struct ipv6hdr *VAR_4 = FUNC_4(VAR_1);
 struct iphdr *VAR_5 = FUNC_2(VAR_1);
 unsigned int VAR_6;
 u8 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_7(VAR_1, VAR_1->len - VAR_3 - 2, &VAR_7, 1);
 if (FUNC_8(VAR_8))
  return VAR_8;

 VAR_6 = VAR_3 + VAR_7 + 2;

 FUNC_6(VAR_1, VAR_1->len - VAR_6);
 if (VAR_1->protocol == FUNC_1(VAR_0)) {
  VAR_5->tot_len = FUNC_1(FUNC_5(VAR_5->tot_len) - VAR_6);
  FUNC_3(VAR_5);
 } else {
  VAR_4->payload_len = FUNC_1(FUNC_5(VAR_4->payload_len) -
          VAR_6);
 }
 return 0;
}
