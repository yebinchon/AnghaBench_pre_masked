
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct audit_buffer {struct sk_buff* skb; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct audit_buffer*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int VAR_2 ;
 struct nlmsghdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct audit_buffer *VAR_3)
{
 struct sk_buff *VAR_4;
 struct nlmsghdr *VAR_5;

 if (!VAR_3)
  return;

 if (FUNC_2()) {
  VAR_4 = VAR_3->skb;
  VAR_3->skb = ((void*)0);



  VAR_5 = FUNC_3(VAR_4);
  VAR_5->nlmsg_len = VAR_4->len - VAR_0;


  FUNC_4(&VAR_1, VAR_4);
  FUNC_5(&VAR_2);
 } else
  FUNC_1("rate limit exceeded");

 FUNC_0(VAR_3);
}
