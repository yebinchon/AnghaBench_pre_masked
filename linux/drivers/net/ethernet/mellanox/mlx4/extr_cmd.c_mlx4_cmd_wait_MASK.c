
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct mlx4_dev {TYPE_1__* persist; } ;
struct mlx4_cmd_context {size_t next; scalar_t__ fw_status; int result; scalar_t__ out_param; int done; int token; } ;
struct mlx4_cmd {size_t free_head; int event_sem; int context_lock; struct mlx4_cmd_context* context; scalar_t__ token_mask; } ;
struct TYPE_4__ {struct mlx4_cmd cmd; } ;
struct TYPE_3__ {int state; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct mlx4_dev*,scalar_t__,scalar_t__,int,scalar_t__,scalar_t__,int ,int) ;
 int FUNC_4 (struct mlx4_dev*,scalar_t__,scalar_t__,int) ;
 int FUNC_5 (struct mlx4_dev*,char*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct mlx4_dev*,char*,scalar_t__,...) ;
 int FUNC_7 (struct mlx4_dev*,scalar_t__,scalar_t__) ;
 TYPE_2__* FUNC_8 (struct mlx4_dev*) ;
 int FUNC_9 (struct mlx4_dev*,char*,scalar_t__) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 long FUNC_15 (int *,int ) ;
 scalar_t__ FUNC_16 (int *,int ) ;

__attribute__((used)) static int FUNC_17(struct mlx4_dev *VAR_9, u64 VAR_10, u64 *VAR_11,
    int VAR_12, u32 VAR_13, u8 VAR_14,
    u16 VAR_15, unsigned long VAR_16)
{
 struct mlx4_cmd *VAR_17 = &FUNC_8(VAR_9)->cmd;
 struct mlx4_cmd_context *VAR_18;
 long VAR_19;
 int VAR_20 = 0;

 FUNC_1(&VAR_17->event_sem);

 FUNC_12(&VAR_17->context_lock);
 FUNC_0(VAR_17->free_head < 0);
 VAR_18 = &VAR_17->context[VAR_17->free_head];
 VAR_18->token += VAR_17->token_mask + 1;
 VAR_17->free_head = VAR_18->next;
 FUNC_13(&VAR_17->context_lock);

 if (VAR_12 && !VAR_11) {
  FUNC_6(VAR_9, "response expected while output mailbox is NULL for command 0x%x\n",
    VAR_15);
  VAR_20 = -VAR_2;
  goto out;
 }

 FUNC_11(&VAR_18->done);

 VAR_20 = FUNC_3(VAR_9, VAR_10, VAR_11 ? *VAR_11 : 0,
       VAR_13, VAR_14, VAR_15, VAR_18->token, 1);
 if (VAR_20)
  goto out_reset;

 if (VAR_15 == VAR_5) {
  VAR_19 =
   FUNC_15(&VAR_18->done,
          FUNC_10(VAR_16));
  if (VAR_19 < 0) {
   VAR_18->fw_status = 0;
   VAR_18->out_param = 0;
   VAR_18->result = 0;
  }
 } else {
  VAR_19 = (long)FUNC_16(&VAR_18->done,
            FUNC_10(VAR_16));
 }
 if (!VAR_19) {
  FUNC_9(VAR_9, "command 0x%x timed out (go bit not cleared)\n",
     VAR_15);
  if (VAR_15 == VAR_4) {
   VAR_20 = -VAR_1;
   goto out;
  } else {
   VAR_20 = -VAR_3;
   goto out_reset;
  }
 }

 VAR_20 = VAR_18->result;
 if (VAR_20) {





  if (VAR_15 == VAR_6 &&
      (VAR_13 == 1 || VAR_13 == 2) &&
      VAR_14 == VAR_8 &&
      VAR_18->fw_status == VAR_0)
   FUNC_5(VAR_9, "command 0x%x failed: fw status = 0x%x\n",
     VAR_15, VAR_18->fw_status);
  else
   FUNC_6(VAR_9, "command 0x%x failed: fw status = 0x%x\n",
     VAR_15, VAR_18->fw_status);
  if (VAR_9->persist->state & VAR_7)
   VAR_20 = FUNC_7(VAR_9, VAR_15, VAR_14);
  else if (FUNC_2(VAR_15, VAR_18->fw_status))
   goto out_reset;

  goto out;
 }

 if (VAR_12)
  *VAR_11 = VAR_18->out_param;

out_reset:
 if (VAR_20)
  VAR_20 = FUNC_4(VAR_9, VAR_15, VAR_14, VAR_20);
out:
 FUNC_12(&VAR_17->context_lock);
 VAR_18->next = VAR_17->free_head;
 VAR_17->free_head = VAR_18 - VAR_17->context;
 FUNC_13(&VAR_17->context_lock);

 FUNC_14(&VAR_17->event_sem);
 return VAR_20;
}
