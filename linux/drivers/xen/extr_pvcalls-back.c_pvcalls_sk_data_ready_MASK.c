
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvcalls_ioworker {int register_work; int wq; } ;
struct sock_mapping {int io; int read; struct pvcalls_ioworker ioworker; } ;
struct sock {struct sock_mapping* sk_user_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0)
{
 struct sock_mapping *VAR_1 = VAR_0->sk_user_data;
 struct pvcalls_ioworker *VAR_2;

 if (VAR_1 == ((void*)0))
  return;

 VAR_2 = &VAR_1->ioworker;
 FUNC_0(&VAR_1->read);
 FUNC_0(&VAR_1->io);
 FUNC_1(VAR_2->wq, &VAR_2->register_work);
}
