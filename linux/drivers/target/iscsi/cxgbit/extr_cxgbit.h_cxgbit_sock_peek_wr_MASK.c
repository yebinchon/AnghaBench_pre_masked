
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct cxgbit_sock {struct sk_buff* wr_pending_head; } ;



__attribute__((used)) static inline struct sk_buff *FUNC_0(const struct cxgbit_sock *VAR_0)
{
 return VAR_0->wr_pending_head;
}
