
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned short protocol; int ip_summed; } ;
struct iphdr {unsigned short tot_len; scalar_t__ protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned short FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static inline void FUNC_4(struct sk_buff *VAR_5)
{
 unsigned short VAR_6;
 struct iphdr *VAR_7;

 VAR_6 = VAR_5->protocol;
 FUNC_2(VAR_5);
 VAR_7 = (struct iphdr *) FUNC_1(VAR_5);
 if (VAR_6 == FUNC_0(VAR_1)) {
  VAR_6 = VAR_7->tot_len;
  FUNC_3(VAR_5, VAR_4);
  VAR_7 = (struct iphdr *) FUNC_1(VAR_5);
 }
 if (VAR_6 == FUNC_0(VAR_2)) {
  if (VAR_7->protocol == VAR_3)
   VAR_5->ip_summed = VAR_0;
 }
}
