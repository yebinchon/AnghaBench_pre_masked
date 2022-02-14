
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int truesize; } ;
struct audit_buffer {int gfp_mask; struct sk_buff* skb; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct sk_buff*,int ,int,int ) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_3(struct audit_buffer *VAR_0, int VAR_1)
{
 struct sk_buff *VAR_2 = VAR_0->skb;
 int VAR_3 = FUNC_2(VAR_2);
 int VAR_4 = FUNC_1(VAR_2, 0, VAR_1, VAR_0->gfp_mask);
 int VAR_5 = FUNC_2(VAR_2);

 if (VAR_4 < 0) {
  FUNC_0("out of memory in audit_expand");
  return 0;
 }

 VAR_2->truesize += VAR_5 - VAR_3;
 return VAR_5;
}
