
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct audit_reply {int net; int portid; int skb; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct sock* FUNC_2 (int ) ;
 int FUNC_3 (struct audit_reply*) ;
 int FUNC_4 (struct sock*,int ,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(void *VAR_0)
{
 struct audit_reply *VAR_1 = (struct audit_reply *)VAR_0;
 struct sock *VAR_2 = FUNC_2(VAR_1->net);

 FUNC_0();
 FUNC_1();



 FUNC_4(VAR_2, VAR_1->skb, VAR_1->portid, 0);
 FUNC_5(VAR_1->net);
 FUNC_3(VAR_1);
 return 0;
}
