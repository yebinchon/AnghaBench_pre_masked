
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_state; } ;
struct pppox_sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pppox_sock*) ;
 int FUNC_1 (struct sock*) ;
 struct pppox_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct socket *VAR_3)
{
 struct sock *VAR_4 = VAR_3->sk;
 struct pppox_sock *VAR_5;
 int VAR_6 = 0;

 if (!VAR_4)
  return 0;

 FUNC_1(VAR_4);

 if (FUNC_5(VAR_4, VAR_2)) {
  FUNC_4(VAR_4);
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_4);
 FUNC_0(VAR_5);
 FUNC_8();

 FUNC_3(VAR_4);
 VAR_4->sk_state = VAR_1;

 FUNC_6(VAR_4);
 VAR_3->sk = ((void*)0);

 FUNC_4(VAR_4);
 FUNC_7(VAR_4);

 return VAR_6;
}
