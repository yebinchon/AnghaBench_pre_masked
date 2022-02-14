
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (unsigned long,int) ;
 scalar_t__ VAR_0 ;
 struct sk_buff* FUNC_1 (struct ath10k*,scalar_t__) ;
 int FUNC_2 (struct ath10k*,char*) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;

struct sk_buff *FUNC_7(struct ath10k *VAR_1, u32 VAR_2)
{
 struct sk_buff *VAR_3;
 u32 VAR_4 = FUNC_4(VAR_2, 4);

 VAR_3 = FUNC_1(VAR_1, VAR_0 + VAR_4);
 if (!VAR_3)
  return ((void*)0);

 FUNC_6(VAR_3, VAR_0);
 if (!FUNC_0((unsigned long)VAR_3->data, 4))
  FUNC_2(VAR_1, "Unaligned WMI skb\n");

 FUNC_5(VAR_3, VAR_4);
 FUNC_3(VAR_3->data, 0, VAR_4);

 return VAR_3;
}
