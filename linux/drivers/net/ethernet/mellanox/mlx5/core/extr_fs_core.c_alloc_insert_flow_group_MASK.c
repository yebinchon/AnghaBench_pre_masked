
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int version; } ;
struct mlx5_flow_table {TYPE_3__ node; int fgs_hash; } ;
struct mlx5_flow_steering {int dummy; } ;
struct TYPE_5__ {int list; } ;
struct mlx5_flow_group {TYPE_1__ node; int hash; } ;
struct list_head {int dummy; } ;


 struct mlx5_flow_group* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mlx5_flow_group*) ;
 struct mlx5_flow_group* FUNC_2 (struct mlx5_flow_steering*,int ,void const*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mlx5_flow_steering*,struct mlx5_flow_group*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mlx5_flow_steering* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,struct list_head*) ;
 int VAR_2 ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static struct mlx5_flow_group *FUNC_10(struct mlx5_flow_table *VAR_3,
             u8 VAR_4,
             const void *VAR_5,
             int VAR_6,
             int VAR_7,
             struct list_head *VAR_8)
{
 struct mlx5_flow_steering *VAR_9 = FUNC_5(&VAR_3->node);
 struct mlx5_flow_group *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(VAR_9, VAR_4, VAR_5,
         VAR_6, VAR_7);
 if (FUNC_1(VAR_10))
  return VAR_10;


 VAR_11 = FUNC_7(&VAR_3->fgs_hash,
         &VAR_10->hash,
         VAR_2);
 if (VAR_11) {
  FUNC_4(VAR_9, VAR_10);
  return FUNC_0(VAR_11);
 }

 FUNC_9(&VAR_10->node, VAR_0, VAR_1);
 FUNC_8(&VAR_10->node, &VAR_3->node);

 FUNC_6(&VAR_10->node.list, VAR_8);
 FUNC_3(&VAR_3->node.version);

 return VAR_10;
}
