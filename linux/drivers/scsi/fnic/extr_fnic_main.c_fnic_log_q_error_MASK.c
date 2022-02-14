
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct fnic {unsigned int raw_wq_count; unsigned int rq_count; unsigned int wq_copy_count; TYPE_7__* lport; TYPE_6__* wq_copy; TYPE_4__* rq; TYPE_2__* wq; } ;
struct TYPE_14__ {int host; } ;
struct TYPE_13__ {TYPE_5__* ctrl; } ;
struct TYPE_12__ {int error_status; } ;
struct TYPE_11__ {TYPE_3__* ctrl; } ;
struct TYPE_10__ {int error_status; } ;
struct TYPE_9__ {TYPE_1__* ctrl; } ;
struct TYPE_8__ {int error_status; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,char*,unsigned int,scalar_t__) ;

void FUNC_2(struct fnic *VAR_1)
{
 unsigned int VAR_2;
 u32 VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->raw_wq_count; VAR_2++) {
  VAR_3 = FUNC_0(&VAR_1->wq[VAR_2].ctrl->error_status);
  if (VAR_3)
   FUNC_1(VAR_0, VAR_1->lport->host,
         "WQ[%d] error_status"
         " %d\n", VAR_2, VAR_3);
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->rq_count; VAR_2++) {
  VAR_3 = FUNC_0(&VAR_1->rq[VAR_2].ctrl->error_status);
  if (VAR_3)
   FUNC_1(VAR_0, VAR_1->lport->host,
         "RQ[%d] error_status"
         " %d\n", VAR_2, VAR_3);
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->wq_copy_count; VAR_2++) {
  VAR_3 = FUNC_0(&VAR_1->wq_copy[VAR_2].ctrl->error_status);
  if (VAR_3)
   FUNC_1(VAR_0, VAR_1->lport->host,
         "CWQ[%d] error_status"
         " %d\n", VAR_2, VAR_3);
 }
}
