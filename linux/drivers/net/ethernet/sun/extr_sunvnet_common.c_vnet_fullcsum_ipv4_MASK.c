
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {void* check; } ;
struct tcphdr {void* check; } ;
struct sk_buff {scalar_t__ protocol; int csum_level; void* csum; scalar_t__ len; int ip_summed; } ;
struct iphdr {scalar_t__ protocol; int daddr; int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (int ,int ,scalar_t__,scalar_t__,void*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 void* FUNC_3 (struct sk_buff*,int,scalar_t__,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct tcphdr* FUNC_5 (struct sk_buff*) ;
 struct udphdr* FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_7(struct sk_buff *VAR_4)
{
 struct iphdr *VAR_5 = FUNC_2(VAR_4);
 int VAR_6 = FUNC_4(VAR_4);

 if (VAR_4->protocol != FUNC_1(VAR_1))
  return;
 if (VAR_5->protocol != VAR_2 &&
     VAR_5->protocol != VAR_3)
  return;
 VAR_4->ip_summed = VAR_0;
 VAR_4->csum_level = 1;
 VAR_4->csum = 0;
 if (VAR_5->protocol == VAR_2) {
  struct tcphdr *VAR_7 = FUNC_5(VAR_4);

  VAR_7->check = 0;
  VAR_4->csum = FUNC_3(VAR_4, VAR_6, VAR_4->len - VAR_6, 0);
  VAR_7->check = FUNC_0(VAR_5->saddr, VAR_5->daddr,
      VAR_4->len - VAR_6, VAR_2,
      VAR_4->csum);
 } else if (VAR_5->protocol == VAR_3) {
  struct udphdr *VAR_8 = FUNC_6(VAR_4);

  VAR_8->check = 0;
  VAR_4->csum = FUNC_3(VAR_4, VAR_6, VAR_4->len - VAR_6, 0);
  VAR_8->check = FUNC_0(VAR_5->saddr, VAR_5->daddr,
      VAR_4->len - VAR_6, VAR_3,
      VAR_4->csum);
 }
}
