
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int owner; scalar_t__ state; int from_state; int to_state; } ;
struct res_cq {TYPE_3__ com; int ref_count; } ;
struct mlx4_resource_tracker {int * res_tree; } ;
struct TYPE_4__ {struct mlx4_resource_tracker res_tracker; } ;
struct TYPE_5__ {TYPE_1__ master; } ;
struct mlx4_priv {TYPE_2__ mfunc; } ;
struct mlx4_dev {int dummy; } ;
typedef enum res_cq_states { ____Placeholder_res_cq_states } res_cq_states ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*) ;
 struct res_cq* FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct mlx4_dev *VAR_8, int VAR_9, int VAR_10,
    enum res_cq_states VAR_11, struct res_cq **VAR_12)
{
 struct mlx4_priv *VAR_13 = FUNC_1(VAR_8);
 struct mlx4_resource_tracker *VAR_14 = &VAR_13->mfunc.master.res_tracker;
 struct res_cq *VAR_15;
 int VAR_16;

 FUNC_4(FUNC_2(VAR_8));
 VAR_15 = FUNC_3(&VAR_14->res_tree[VAR_4], VAR_10);
 if (!VAR_15) {
  VAR_16 = -VAR_2;
 } else if (VAR_15->com.owner != VAR_9) {
  VAR_16 = -VAR_3;
 } else if (VAR_11 == VAR_5) {
  if (VAR_15->com.state != VAR_7)
   VAR_16 = -VAR_1;
  else if (FUNC_0(&VAR_15->ref_count))
   VAR_16 = -VAR_0;
  else
   VAR_16 = 0;
 } else if (VAR_11 != VAR_7 || VAR_15->com.state != VAR_5) {
  VAR_16 = -VAR_1;
 } else {
  VAR_16 = 0;
 }

 if (!VAR_16) {
  VAR_15->com.from_state = VAR_15->com.state;
  VAR_15->com.to_state = VAR_11;
  VAR_15->com.state = VAR_6;
  if (VAR_12)
   *VAR_12 = VAR_15;
 }

 FUNC_5(FUNC_2(VAR_8));

 return VAR_16;
}
