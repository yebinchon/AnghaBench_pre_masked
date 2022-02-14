
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct semaphore {int dummy; } ;
struct mlx5_cmd {int log_sz; struct mlx5_cmd_stats* stats; int checksum_disabled; struct semaphore sem; struct semaphore pages_sem; struct mlx5_cmd_work_ent** ent_arr; } ;
struct mlx5_core_dev {struct mlx5_cmd cmd; } ;
struct mlx5_cmd_work_ent {int ret; int status; size_t op; int done; TYPE_6__* in; TYPE_4__* out; int uout; int uout_size; void* context; int (* callback ) (int,void*) ;scalar_t__ ts1; scalar_t__ ts2; int idx; TYPE_2__* lay; scalar_t__ page_queue; int cb_timeout_work; int state; } ;
struct mlx5_cmd_stats {int lock; int n; int sum; } ;
typedef scalar_t__ s64 ;
typedef int (* mlx5_cmd_cbk_t ) (int,void*) ;
struct TYPE_9__ {int data; } ;
struct TYPE_11__ {TYPE_3__ first; } ;
struct TYPE_7__ {int data; } ;
struct TYPE_10__ {TYPE_1__ first; } ;
struct TYPE_8__ {int status_own; int out; } ;


 size_t FUNC_0 (struct mlx5_cmd_stats*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mlx5_core_dev*,struct mlx5_cmd_work_ent*,int ) ;
 int FUNC_5 (struct mlx5_cmd_work_ent*) ;
 int FUNC_6 (struct mlx5_cmd*,int ) ;
 int FUNC_7 (struct mlx5_core_dev*,TYPE_6__*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (struct mlx5_core_dev*,int ,int ) ;
 int FUNC_11 (int ,TYPE_4__*,int ) ;
 int FUNC_12 (struct mlx5_core_dev*,char*,int,int ,int) ;
 int FUNC_13 (struct mlx5_core_dev*,char*,int ) ;
 int FUNC_14 (struct mlx5_core_dev*,TYPE_4__*) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (int,unsigned long*) ;
 int FUNC_19 (struct semaphore*) ;
 int FUNC_20 (struct mlx5_cmd_work_ent*) ;

__attribute__((used)) static void FUNC_21(struct mlx5_core_dev *VAR_3, u64 VAR_4, bool VAR_5)
{
 struct mlx5_cmd *VAR_6 = &VAR_3->cmd;
 struct mlx5_cmd_work_ent *VAR_7;
 mlx5_cmd_cbk_t VAR_8;
 void *VAR_9;
 int VAR_10;
 int VAR_11;
 s64 VAR_12;
 struct mlx5_cmd_stats *VAR_13;
 unsigned long VAR_14;
 unsigned long VAR_15;


 VAR_15 = VAR_4 & 0xffffffff;
 for (VAR_11 = 0; VAR_11 < (1 << VAR_6->log_sz); VAR_11++) {
  if (FUNC_18(VAR_11, &VAR_15)) {
   struct semaphore *VAR_16;

   VAR_7 = VAR_6->ent_arr[VAR_11];


   if (!FUNC_17(VAR_0,
      &VAR_7->state)) {

    if (!VAR_5) {
     FUNC_13(VAR_3, "Command completion arrived after timeout (entry idx = %d).\n",
            VAR_7->idx);
     FUNC_6(VAR_6, VAR_7->idx);
     FUNC_5(VAR_7);
    }
    continue;
   }

   if (VAR_7->callback)
    FUNC_1(&VAR_7->cb_timeout_work);
   if (VAR_7->page_queue)
    VAR_16 = &VAR_6->pages_sem;
   else
    VAR_16 = &VAR_6->sem;
   VAR_7->ts2 = FUNC_8();
   FUNC_9(VAR_7->out->first.data, VAR_7->lay->out, sizeof(VAR_7->lay->out));
   FUNC_4(VAR_3, VAR_7, 0);
   if (!VAR_7->ret) {
    if (!VAR_6->checksum_disabled)
     VAR_7->ret = FUNC_20(VAR_7);
    else
     VAR_7->ret = 0;
    if (VAR_4 & VAR_2)
     VAR_7->status = VAR_1;
    else
     VAR_7->status = VAR_7->lay->status_own >> 1;

    FUNC_12(VAR_3, "command completed. ret 0x%x, delivery status %s(0x%x)\n",
           VAR_7->ret, FUNC_3(VAR_7->status), VAR_7->status);
   }


   if (!VAR_5)
    FUNC_6(VAR_6, VAR_7->idx);

   if (VAR_7->callback) {
    VAR_12 = VAR_7->ts2 - VAR_7->ts1;
    if (VAR_7->op < FUNC_0(VAR_6->stats)) {
     VAR_13 = &VAR_6->stats[VAR_7->op];
     FUNC_15(&VAR_13->lock, VAR_14);
     VAR_13->sum += VAR_12;
     ++VAR_13->n;
     FUNC_16(&VAR_13->lock, VAR_14);
    }

    VAR_8 = VAR_7->callback;
    VAR_9 = VAR_7->context;
    VAR_10 = VAR_7->ret;
    if (!VAR_10) {
     VAR_10 = FUNC_11(VAR_7->uout,
         VAR_7->out,
         VAR_7->uout_size);

     VAR_10 = VAR_10 ? VAR_10 : FUNC_10(VAR_3,
         VAR_7->in->first.data,
         VAR_7->uout);
    }

    FUNC_14(VAR_3, VAR_7->out);
    FUNC_7(VAR_3, VAR_7->in);

    VAR_10 = VAR_10 ? VAR_10 : VAR_7->status;
    if (!VAR_5)
     FUNC_5(VAR_7);
    VAR_8(VAR_10, VAR_9);
   } else {
    FUNC_2(&VAR_7->done);
   }
   FUNC_19(VAR_16);
  }
 }
}
