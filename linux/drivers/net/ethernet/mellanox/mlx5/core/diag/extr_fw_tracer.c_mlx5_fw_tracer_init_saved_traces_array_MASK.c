
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; scalar_t__ saved_traces_index; } ;
struct mlx5_fw_tracer {TYPE_1__ st_arr; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct mlx5_fw_tracer *VAR_0)
{
 VAR_0->st_arr.saved_traces_index = 0;
 FUNC_0(&VAR_0->st_arr.lock);
}
