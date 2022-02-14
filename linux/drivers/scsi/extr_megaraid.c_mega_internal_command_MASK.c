
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int state; int list; int * pthru; int raw_mbox; int idx; } ;
typedef TYPE_2__ scb_t ;
struct TYPE_12__ {scalar_t__ cmd; int status; int subopcode; int opcode; } ;
typedef TYPE_3__ megacmd_t ;
typedef int mega_passthru ;
struct TYPE_13__ {int int_status; int int_mtx; TYPE_1__* dev; int int_waitq; int lock; int quiescent; int pending_list; TYPE_2__ int_scb; } ;
typedef TYPE_4__ adapter_t ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,scalar_t__,int ,int ,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,TYPE_3__*,int) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(adapter_t *VAR_5, megacmd_t *VAR_6, mega_passthru *VAR_7)
{
 unsigned long VAR_8;
 scb_t *VAR_9;
 int VAR_10;






 FUNC_6(&VAR_5->int_mtx);

 VAR_9 = &VAR_5->int_scb;
 FUNC_5(VAR_9, 0, sizeof(scb_t));

 VAR_9->idx = VAR_0;
 VAR_9->state |= VAR_2 | VAR_3;

 FUNC_4(VAR_9->raw_mbox, VAR_6, sizeof(megacmd_t));




 if (VAR_6->cmd == VAR_1)
  VAR_9->pthru = VAR_7;

 FUNC_8(&VAR_5->lock, VAR_8);
 FUNC_2(&VAR_9->list, &VAR_5->pending_list);





 if (FUNC_0(&VAR_5->quiescent) == 0)
  FUNC_3(VAR_5);
 FUNC_9(&VAR_5->lock, VAR_8);

 FUNC_10(&VAR_5->int_waitq);

 VAR_6->status = VAR_10 = VAR_5->int_status;





 if (VAR_10 && VAR_4) {
  FUNC_1(&VAR_5->dev->dev, "cmd [%x, %x, %x] status:[%x]\n",
   VAR_6->cmd, VAR_6->opcode, VAR_6->subopcode, VAR_10);
 }

 FUNC_7(&VAR_5->int_mtx);
 return VAR_10;
}
