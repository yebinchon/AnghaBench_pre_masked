
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {size_t saved_traces_index; int lock; struct mlx5_fw_trace_data* straces; } ;
struct mlx5_fw_tracer {TYPE_1__ st_arr; } ;
struct mlx5_fw_trace_data {scalar_t__ timestamp; } ;
struct devlink_fmsg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct devlink_fmsg*) ;
 int FUNC_1 (struct devlink_fmsg*,char*) ;
 int FUNC_2 (struct devlink_fmsg*,struct mlx5_fw_trace_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct mlx5_fw_tracer *VAR_2,
         struct devlink_fmsg *VAR_3)
{
 struct mlx5_fw_trace_data *VAR_4 = VAR_2->st_arr.straces;
 u32 VAR_5, VAR_6, VAR_7;
 u32 VAR_8;
 int VAR_9;

 if (!VAR_4[0].timestamp)
  return -VAR_0;

 FUNC_3(&VAR_2->st_arr.lock);
 VAR_8 = VAR_2->st_arr.saved_traces_index;
 if (VAR_4[VAR_8].timestamp)
  VAR_6 = VAR_8;
 else
  VAR_6 = 0;
 VAR_7 = (VAR_8 - 1) & (VAR_1 - 1);

 VAR_9 = FUNC_1(VAR_3, "dump fw traces");
 if (VAR_9)
  goto unlock;
 VAR_5 = VAR_6;
 while (VAR_5 != VAR_7) {
  VAR_9 = FUNC_2(VAR_3, &VAR_4[VAR_5]);
  if (VAR_9)
   goto unlock;

  VAR_5 = (VAR_5 + 1) & (VAR_1 - 1);
 }

 VAR_9 = FUNC_0(VAR_3);
unlock:
 FUNC_4(&VAR_2->st_arr.lock);
 return VAR_9;
}
