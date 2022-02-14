
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_mapping {int irq; int read; } ;
struct sock {struct sock_mapping* sk_user_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0)
{
 struct sock_mapping *VAR_1 = VAR_0->sk_user_data;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_0(&VAR_1->read);
 FUNC_1(VAR_1->irq);
}
