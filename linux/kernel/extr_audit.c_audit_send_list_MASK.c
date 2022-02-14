
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct audit_netlink_list {int net; int portid; int q; } ;


 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct sock* FUNC_3 (int ) ;
 int FUNC_4 (struct audit_netlink_list*) ;
 int FUNC_5 (struct sock*,struct sk_buff*,int ,int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(void *VAR_0)
{
 struct audit_netlink_list *VAR_1 = VAR_0;
 struct sk_buff *VAR_2;
 struct sock *VAR_3 = FUNC_3(VAR_1->net);


 FUNC_1();
 FUNC_2();

 while ((VAR_2 = FUNC_0(&VAR_1->q)) != ((void*)0))
  FUNC_5(VAR_3, VAR_2, VAR_1->portid, 0);

 FUNC_6(VAR_1->net);
 FUNC_4(VAR_1);

 return 0;
}
