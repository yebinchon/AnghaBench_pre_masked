
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ csum; } ;
struct cxgbi_sock {struct sk_buff* wr_pending_head; } ;


 struct sk_buff* FUNC_0 (struct sk_buff const*) ;

__attribute__((used)) static inline int FUNC_1(const struct cxgbi_sock *VAR_0)
{
 int VAR_1 = 0;
 const struct sk_buff *VAR_2 = VAR_0->wr_pending_head;

 while (VAR_2) {
  VAR_1 += VAR_2->csum;
  VAR_2 = FUNC_0(VAR_2);
 }
 return VAR_1;
}
