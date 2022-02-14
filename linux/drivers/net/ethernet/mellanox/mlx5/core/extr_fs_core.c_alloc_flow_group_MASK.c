
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_flow_steering {int fgs_cache; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int match_criteria; int match_criteria_enable; } ;
struct mlx5_flow_group {int start_index; int max_ftes; TYPE_2__ node; TYPE_1__ mask; int fte_allocator; int ftes_hash; } ;


 int VAR_0 ;
 struct mlx5_flow_group* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct mlx5_flow_group*) ;
 struct mlx5_flow_group* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,void const*,int) ;
 int VAR_3 ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static struct mlx5_flow_group *FUNC_6(struct mlx5_flow_steering *VAR_4,
      u8 VAR_5,
      const void *VAR_6,
      int VAR_7,
      int VAR_8)
{
 struct mlx5_flow_group *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_4->fgs_cache, VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_5(&VAR_9->ftes_hash, &VAR_3);
 if (VAR_10) {
  FUNC_2(VAR_4->fgs_cache, VAR_9);
  return FUNC_0(VAR_10);
 }

 FUNC_1(&VAR_9->fte_allocator);
 VAR_9->mask.match_criteria_enable = VAR_5;
 FUNC_4(&VAR_9->mask.match_criteria, VAR_6,
        sizeof(VAR_9->mask.match_criteria));
 VAR_9->node.type = VAR_1;
 VAR_9->start_index = VAR_7;
 VAR_9->max_ftes = VAR_8 - VAR_7 + 1;

 return VAR_9;
}
