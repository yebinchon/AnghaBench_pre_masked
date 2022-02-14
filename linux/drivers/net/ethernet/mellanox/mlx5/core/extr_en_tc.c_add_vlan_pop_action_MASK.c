
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlx5e_priv {int dummy; } ;
struct mlx5_esw_flow_attr {TYPE_2__* parse_attr; } ;
struct flow_action_entry {int id; } ;
struct TYPE_4__ {TYPE_1__* filter_dev; } ;
struct TYPE_3__ {int lower_level; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5e_priv*,struct flow_action_entry*,struct mlx5_esw_flow_attr*,int *) ;

__attribute__((used)) static int FUNC_1(struct mlx5e_priv *VAR_1,
          struct mlx5_esw_flow_attr *VAR_2,
          u32 *VAR_3)
{
 int VAR_4 = VAR_2->parse_attr->filter_dev->lower_level;
 struct flow_action_entry VAR_5 = {
  .id = VAR_0,
 };
 int VAR_6 = 0;

 while (VAR_4--) {
  VAR_6 = FUNC_0(VAR_1, &VAR_5, VAR_2, VAR_3);
  if (VAR_6)
   return VAR_6;
 }

 return VAR_6;
}
