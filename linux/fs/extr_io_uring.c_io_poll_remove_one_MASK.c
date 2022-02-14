
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entry; } ;
struct io_poll_iocb {TYPE_2__* head; TYPE_1__ wait; int canceled; } ;
struct io_kiocb {int list; int ctx; struct io_poll_iocb poll; } ;
struct TYPE_4__ {int lock; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,struct io_kiocb*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct io_kiocb *VAR_0)
{
 struct io_poll_iocb *VAR_1 = &VAR_0->poll;

 FUNC_4(&VAR_1->head->lock);
 FUNC_0(VAR_1->canceled, 1);
 if (!FUNC_3(&VAR_1->wait.entry)) {
  FUNC_2(&VAR_1->wait.entry);
  FUNC_1(VAR_0->ctx, VAR_0);
 }
 FUNC_5(&VAR_1->head->lock);

 FUNC_2(&VAR_0->list);
}
