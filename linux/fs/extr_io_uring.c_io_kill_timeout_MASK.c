
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timer; } ;
struct io_kiocb {int user_data; TYPE_2__* ctx; int list; TYPE_1__ timeout; } ;
struct TYPE_4__ {int cq_timeouts; } ;


 int FUNC_0 (struct io_kiocb*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct io_kiocb *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(&VAR_0->timeout.timer);
 if (VAR_1 != -1) {
  FUNC_1(&VAR_0->ctx->cq_timeouts);
  FUNC_4(&VAR_0->list);
  FUNC_3(VAR_0->ctx, VAR_0->user_data, 0);
  FUNC_0(VAR_0);
 }
}
