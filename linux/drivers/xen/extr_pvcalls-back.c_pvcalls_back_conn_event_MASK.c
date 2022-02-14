
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pvcalls_ioworker {int register_work; int wq; } ;
struct sock_mapping {int io; int write; struct pvcalls_ioworker ioworker; TYPE_2__* sock; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {TYPE_1__* sk; } ;
struct TYPE_3__ {struct sock_mapping* sk_user_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct sock_mapping *VAR_3 = VAR_2;
 struct pvcalls_ioworker *VAR_4;

 if (VAR_3 == ((void*)0) || VAR_3->sock == ((void*)0) || VAR_3->sock->sk == ((void*)0) ||
  VAR_3->sock->sk->sk_user_data != VAR_3)
  return VAR_0;

 VAR_4 = &VAR_3->ioworker;

 FUNC_0(&VAR_3->write);
 FUNC_0(&VAR_3->io);
 FUNC_1(VAR_4->wq, &VAR_4->register_work);

 return VAR_0;
}
