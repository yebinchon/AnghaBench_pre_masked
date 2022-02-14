
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5dr_icm_pool {int icm_mr_list; TYPE_2__* dmn; int icm_type; int max_log_chunk_sz; } ;
struct TYPE_3__ {int type; int length; size_t addr; int obj_id; } ;
struct mlx5dr_icm_mr {size_t icm_start_addr; size_t used_length; TYPE_1__ dm; int mr_list; int mkey; struct mlx5dr_icm_pool* pool; } ;
struct mlx5_core_dev {int dummy; } ;
typedef enum mlx5_sw_icm_type { ____Placeholder_mlx5_sw_icm_type } mlx5_sw_icm_type ;
struct TYPE_4__ {int pdn; struct mlx5_core_dev* mdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct mlx5_core_dev*,int ,int,size_t,int ,int *) ;
 int FUNC_2 (struct mlx5dr_icm_mr*) ;
 struct mlx5dr_icm_mr* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct mlx5_core_dev*,int,int,int ,size_t*,int *) ;
 int FUNC_6 (struct mlx5_core_dev*,int,int,int ,size_t,int ) ;
 int FUNC_7 (TYPE_2__*,char*,int) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static struct mlx5dr_icm_mr *
FUNC_9(struct mlx5dr_icm_pool *VAR_2,
        enum mlx5_sw_icm_type VAR_3,
        size_t VAR_4)
{
 struct mlx5_core_dev *VAR_5 = VAR_2->dmn->mdev;
 struct mlx5dr_icm_mr *VAR_6;
 size_t VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->pool = VAR_2;
 FUNC_0(&VAR_6->mr_list);

 VAR_6->dm.type = VAR_3;


 VAR_6->dm.length = FUNC_8(VAR_2->max_log_chunk_sz,
              VAR_2->icm_type) * 2;

 VAR_8 = FUNC_5(VAR_5, VAR_6->dm.type, VAR_6->dm.length, 0,
       &VAR_6->dm.addr, &VAR_6->dm.obj_id);
 if (VAR_8) {
  FUNC_7(VAR_2->dmn, "Failed to allocate SW ICM memory, err (%d)\n", VAR_8);
  goto free_icm_mr;
 }


 VAR_8 = FUNC_1(VAR_5, VAR_2->dmn->pdn,
        VAR_6->dm.length,
        VAR_6->dm.addr,
        VAR_1,
        &VAR_6->mkey);
 if (VAR_8) {
  FUNC_7(VAR_2->dmn, "Failed to create SW ICM MKEY, err (%d)\n", VAR_8);
  goto free_dm;
 }

 VAR_6->icm_start_addr = VAR_6->dm.addr;


 VAR_7 = VAR_6->icm_start_addr & (VAR_4 - 1);
 if (VAR_7)
  VAR_6->used_length = VAR_4 - VAR_7;

 FUNC_4(&VAR_6->mr_list, &VAR_2->icm_mr_list);

 return VAR_6;

free_dm:
 FUNC_6(VAR_5, VAR_6->dm.type, VAR_6->dm.length, 0,
          VAR_6->dm.addr, VAR_6->dm.obj_id);
free_icm_mr:
 FUNC_2(VAR_6);
 return ((void*)0);
}
