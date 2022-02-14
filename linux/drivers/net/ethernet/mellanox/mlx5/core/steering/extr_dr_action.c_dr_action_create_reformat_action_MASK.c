
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int hdr_modify_icm_addr; } ;
struct TYPE_9__ {TYPE_2__ caps; } ;
struct mlx5dr_domain {TYPE_3__ info; int action_icm_pool; int mdev; } ;
struct TYPE_10__ {int index; TYPE_5__* chunk; } ;
struct TYPE_7__ {size_t reformat_size; int reformat_id; } ;
struct mlx5dr_action {int action_type; TYPE_4__ rewrite; TYPE_1__ reformat; } ;
typedef enum mlx5_reformat_ctx_type { ____Placeholder_mlx5_reformat_ctx_type } mlx5_reformat_ctx_type ;
struct TYPE_11__ {int icm_addr; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mlx5dr_domain*,struct mlx5dr_action*,void*,size_t) ;
 int FUNC_1 (int ,int,size_t,void*,int *) ;
 TYPE_5__* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (struct mlx5dr_domain*,char*,int const) ;

__attribute__((used)) static int
FUNC_5(struct mlx5dr_domain *VAR_8,
     size_t VAR_9, void *VAR_10,
     struct mlx5dr_action *VAR_11)
{
 u32 VAR_12;
 int VAR_13;

 switch (VAR_11->action_type) {
 case 131:
 case 130:
 {
  enum mlx5_reformat_ctx_type VAR_14;

  if (VAR_11->action_type == 131)
   VAR_14 = VAR_6;
  else
   VAR_14 = VAR_7;

  VAR_13 = FUNC_1(VAR_8->mdev, VAR_14, VAR_9, VAR_10,
           &VAR_12);
  if (VAR_13)
   return VAR_13;

  VAR_11->reformat.reformat_id = VAR_12;
  VAR_11->reformat.reformat_size = VAR_9;
  return 0;
 }
 case 129:
 {
  return 0;
 }
 case 128:
 {

  if (VAR_9 != VAR_4 && VAR_9 != VAR_5)
   return -VAR_2;

  VAR_11->rewrite.chunk = FUNC_2(VAR_8->action_icm_pool,
              VAR_1);
  if (!VAR_11->rewrite.chunk)
   return -VAR_3;

  VAR_11->rewrite.index = (VAR_11->rewrite.chunk->icm_addr -
      VAR_8->info.caps.hdr_modify_icm_addr) /
      VAR_0;

  VAR_13 = FUNC_0(VAR_8, VAR_11, VAR_10, VAR_9);
  if (VAR_13) {
   FUNC_3(VAR_11->rewrite.chunk);
   return VAR_13;
  }
  return 0;
 }
 default:
  FUNC_4(VAR_8, "Reformat type is not supported %d\n", VAR_11->action_type);
  return -VAR_2;
 }
}
