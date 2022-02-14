
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct nlmsghdr {int nlmsg_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sock* FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct sock*,int ) ;
 struct nlmsghdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*,struct sk_buff*,int ,int ,int ) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_5(struct sk_buff *VAR_3)
{
 struct sk_buff *VAR_4;
 struct sock *VAR_5 = FUNC_0(&VAR_2);
 struct nlmsghdr *VAR_6;




 if (!FUNC_1(VAR_5, VAR_0))
  return;
 VAR_4 = FUNC_4(VAR_3, VAR_1);
 if (!VAR_4)
  return;
 VAR_6 = FUNC_2(VAR_4);
 VAR_6->nlmsg_len = VAR_3->len;

 FUNC_3(VAR_5, VAR_4, 0, VAR_0, VAR_1);
}
