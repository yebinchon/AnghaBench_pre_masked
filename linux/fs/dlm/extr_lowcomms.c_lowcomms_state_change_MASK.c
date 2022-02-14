
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_shutdown; scalar_t__ sk_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_2)
{





 if (VAR_2->sk_shutdown) {
  if (VAR_2->sk_shutdown == VAR_0)
   FUNC_0(VAR_2);
 } else if (VAR_2->sk_state == VAR_1) {
  FUNC_1(VAR_2);
 }
}
