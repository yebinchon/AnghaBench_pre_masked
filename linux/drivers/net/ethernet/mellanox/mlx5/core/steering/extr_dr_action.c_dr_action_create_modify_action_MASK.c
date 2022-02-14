
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct mlx5dr_icm_chunk {int icm_addr; } ;
struct TYPE_5__ {int hdr_modify_icm_addr; } ;
struct TYPE_6__ {TYPE_2__ caps; } ;
struct mlx5dr_domain {TYPE_3__ info; int action_icm_pool; } ;
struct TYPE_4__ {int modify_ttl; size_t num_of_actions; int index; int * data; struct mlx5dr_icm_chunk* chunk; } ;
struct mlx5dr_action {TYPE_1__ rewrite; } ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mlx5dr_domain*,size_t,size_t,int *,int *,size_t*,int*) ;
 int * FUNC_1 (int,size_t,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx5dr_domain*,char*,size_t,size_t) ;
 struct mlx5dr_icm_chunk* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct mlx5dr_icm_chunk*) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (struct mlx5dr_domain*,struct mlx5dr_action*) ;

__attribute__((used)) static int FUNC_8(struct mlx5dr_domain *VAR_6,
       size_t VAR_7,
       __be64 VAR_8[],
       struct mlx5dr_action *VAR_9)
{
 struct mlx5dr_icm_chunk *VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 __be64 *VAR_14;
 bool VAR_15;
 int VAR_16;

 VAR_13 = VAR_7 / VAR_2;
 VAR_11 = FUNC_6(VAR_1);

 if (VAR_13 > VAR_11) {
  FUNC_3(VAR_6, "Max number of actions %d exceeds limit %d\n",
      VAR_13, VAR_11);
  return -VAR_3;
 }

 VAR_10 = FUNC_4(VAR_6->action_icm_pool, VAR_1);
 if (!VAR_10)
  return -VAR_4;

 VAR_14 = FUNC_1(1, VAR_11 * VAR_2, VAR_5);
 if (!VAR_14) {
  VAR_16 = -VAR_4;
  goto free_chunk;
 }

 VAR_16 = FUNC_0(VAR_6,
            VAR_11,
            VAR_13,
            VAR_8,
            VAR_14,
            &VAR_12,
            &VAR_15);
 if (VAR_16)
  goto free_hw_actions;

 VAR_9->rewrite.chunk = VAR_10;
 VAR_9->rewrite.modify_ttl = VAR_15;
 VAR_9->rewrite.data = (u8 *)VAR_14;
 VAR_9->rewrite.num_of_actions = VAR_12;
 VAR_9->rewrite.index = (VAR_10->icm_addr -
     VAR_6->info.caps.hdr_modify_icm_addr) /
     VAR_0;

 VAR_16 = FUNC_7(VAR_6, VAR_9);
 if (VAR_16)
  goto free_hw_actions;

 return 0;

free_hw_actions:
 FUNC_2(VAR_14);
free_chunk:
 FUNC_5(VAR_10);
 return VAR_16;
}
