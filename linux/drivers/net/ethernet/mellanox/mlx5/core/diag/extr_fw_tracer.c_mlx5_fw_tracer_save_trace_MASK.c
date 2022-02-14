
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_2__ {size_t saved_traces_index; int lock; struct mlx5_fw_trace_data* straces; } ;
struct mlx5_fw_tracer {TYPE_1__ st_arr; } ;
struct mlx5_fw_trace_data {int lost; int msg; int event_id; int timestamp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct mlx5_fw_tracer *VAR_2,
          u64 VAR_3, bool VAR_4,
          u8 VAR_5, char *VAR_6)
{
 struct mlx5_fw_trace_data *VAR_7;

 FUNC_0(&VAR_2->st_arr.lock);
 VAR_7 = &VAR_2->st_arr.straces[VAR_2->st_arr.saved_traces_index];
 VAR_7->timestamp = VAR_3;
 VAR_7->lost = VAR_4;
 VAR_7->event_id = VAR_5;
 FUNC_2(VAR_7->msg, VAR_6, VAR_1);

 VAR_2->st_arr.saved_traces_index =
  (VAR_2->st_arr.saved_traces_index + 1) & (VAR_0 - 1);
 FUNC_1(&VAR_2->st_arr.lock);
}
