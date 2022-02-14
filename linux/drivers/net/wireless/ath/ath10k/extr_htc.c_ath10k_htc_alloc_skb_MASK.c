
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct ath10k_htc_hdr {int dummy; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (unsigned long,int) ;
 int FUNC_1 (struct ath10k*,char*) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*,int) ;

struct sk_buff *FUNC_4(struct ath10k *VAR_0, int VAR_1)
{
 struct sk_buff *VAR_2;

 VAR_2 = FUNC_2(VAR_1 + sizeof(struct ath10k_htc_hdr));
 if (!VAR_2)
  return ((void*)0);

 FUNC_3(VAR_2, sizeof(struct ath10k_htc_hdr));


 if (!FUNC_0((unsigned long)VAR_2->data, 4))
  FUNC_1(VAR_0, "Unaligned HTC tx skb\n");

 return VAR_2;
}
