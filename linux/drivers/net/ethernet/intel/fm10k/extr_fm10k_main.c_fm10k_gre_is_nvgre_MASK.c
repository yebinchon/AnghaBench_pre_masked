
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct fm10k_nvgre_hdr {int flags; int tni; } ;
struct ethhdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static struct ethhdr *FUNC_4(struct sk_buff *VAR_3)
{
 struct fm10k_nvgre_hdr *VAR_4;
 int VAR_5 = FUNC_1(VAR_3);


 if (FUNC_3(VAR_3) != FUNC_0(VAR_0))
  return ((void*)0);


 VAR_4 = (struct fm10k_nvgre_hdr *)(FUNC_2(VAR_3) + VAR_5);


 if (VAR_4->flags & VAR_1)
  return ((void*)0);


 if (VAR_4->flags & VAR_2)
  return (struct ethhdr *)(VAR_4 + 1);

 return (struct ethhdr *)(&VAR_4->tni);
}
