
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {int dummy; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (void*,int) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_4(void *VAR_0, int VAR_1, int VAR_2,
          int VAR_3)
{
 struct sk_buff *VAR_4;

 if (!VAR_3) {
  VAR_3 = FUNC_0(VAR_1 + VAR_2) +
    FUNC_0(sizeof(struct skb_shared_info));
 }
 VAR_4 = FUNC_1(VAR_0, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 FUNC_3(VAR_4, VAR_1);
 FUNC_2(VAR_4, VAR_2);

 return VAR_4;
}
