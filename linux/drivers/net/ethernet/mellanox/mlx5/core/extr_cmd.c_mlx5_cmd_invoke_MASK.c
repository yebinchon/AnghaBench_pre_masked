
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct mlx5_cmd {struct mlx5_cmd_stats* stats; int wq; } ;
struct mlx5_core_dev {struct mlx5_cmd cmd; } ;
struct mlx5_cmd_work_ent {int polling; int status; scalar_t__ ts1; scalar_t__ ts2; int work; int cb_timeout_work; int done; int token; } ;
struct mlx5_cmd_stats {int lock; int n; int sum; } ;
struct TYPE_2__ {int data; } ;
struct mlx5_cmd_msg {TYPE_1__ first; } ;
typedef scalar_t__ s64 ;
typedef int mlx5_cmd_cbk_t ;


 size_t FUNC_0 (struct mlx5_cmd_stats*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int (*) (int *)) ;
 scalar_t__ FUNC_3 (struct mlx5_cmd_work_ent*) ;
 int VAR_3 ;
 size_t FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct mlx5_cmd_work_ent*) ;
 struct mlx5_cmd_work_ent* FUNC_6 (struct mlx5_cmd*,struct mlx5_cmd_msg*,struct mlx5_cmd_msg*,void*,int,int ,void*,int) ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mlx5_cmd_work_ent*) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int FUNC_10 (size_t) ;
 int FUNC_11 (struct mlx5_core_dev*,int,char*,int ,scalar_t__) ;
 int FUNC_12 (struct mlx5_core_dev*,char*) ;
 int VAR_6 ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct mlx5_core_dev*,struct mlx5_cmd_work_ent*) ;

__attribute__((used)) static int FUNC_17(struct mlx5_core_dev *VAR_7, struct mlx5_cmd_msg *VAR_8,
      struct mlx5_cmd_msg *VAR_9, void *VAR_10, int VAR_11,
      mlx5_cmd_cbk_t VAR_12,
      void *VAR_13, int VAR_14, u8 *VAR_15,
      u8 VAR_16, bool VAR_17)
{
 struct mlx5_cmd *VAR_18 = &VAR_7->cmd;
 struct mlx5_cmd_work_ent *VAR_19;
 struct mlx5_cmd_stats *VAR_20;
 int VAR_21 = 0;
 s64 VAR_22;
 u16 VAR_23;

 if (VAR_12 && VAR_14)
  return -VAR_0;

 VAR_19 = FUNC_6(VAR_18, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
   VAR_14);
 if (FUNC_3(VAR_19))
  return FUNC_5(VAR_19);

 VAR_19->token = VAR_16;
 VAR_19->polling = VAR_17;

 if (!VAR_12)
  FUNC_9(&VAR_19->done);

 FUNC_1(&VAR_19->cb_timeout_work, VAR_4);
 FUNC_2(&VAR_19->work, FUNC_7);
 if (VAR_14) {
  FUNC_7(&VAR_19->work);
 } else if (!FUNC_13(VAR_18->wq, &VAR_19->work)) {
  FUNC_12(VAR_7, "failed to queue work\n");
  VAR_21 = -VAR_1;
  goto out_free;
 }

 if (VAR_12)
  goto out;

 VAR_21 = FUNC_16(VAR_7, VAR_19);
 if (VAR_21 == -VAR_2)
  goto out;

 VAR_22 = VAR_19->ts2 - VAR_19->ts1;
 VAR_23 = FUNC_4(VAR_5, VAR_8->first.data, VAR_6);
 if (VAR_23 < FUNC_0(VAR_18->stats)) {
  VAR_20 = &VAR_18->stats[VAR_23];
  FUNC_14(&VAR_20->lock);
  VAR_20->sum += VAR_22;
  ++VAR_20->n;
  FUNC_15(&VAR_20->lock);
 }
 FUNC_11(VAR_7, 1 << VAR_3,
      "fw exec time for %s is %lld nsec\n",
      FUNC_10(VAR_23), VAR_22);
 *VAR_15 = VAR_19->status;

out_free:
 FUNC_8(VAR_19);
out:
 return VAR_21;
}
