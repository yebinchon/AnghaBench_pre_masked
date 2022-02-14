
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_wq_param {int buf_numa_node; int db_numa_node; } ;
struct TYPE_5__ {int db; } ;
struct TYPE_4__ {int frags; } ;
struct mlx5_wq_ctrl {TYPE_2__ db; struct mlx5_core_dev* mdev; TYPE_1__ buf; } ;
struct mlx5_cqwq {int fbc; int db; } ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*,void*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_2 (struct mlx5_core_dev*,TYPE_2__*,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,TYPE_2__*) ;
 int FUNC_4 (struct mlx5_core_dev*,int ,TYPE_1__*,int ) ;
 int FUNC_5 (int ,int,int,int *) ;
 int FUNC_6 (int,int) ;

int FUNC_7(struct mlx5_core_dev *VAR_3, struct mlx5_wq_param *VAR_4,
       void *VAR_5, struct mlx5_cqwq *VAR_6,
       struct mlx5_wq_ctrl *VAR_7)
{

 u8 VAR_8 = FUNC_0(VAR_5, VAR_5, VAR_1) == VAR_0 ? 6 : 7;
 u8 VAR_9 = FUNC_0(VAR_5, VAR_5, VAR_2);
 int VAR_10;

 VAR_10 = FUNC_2(VAR_3, &VAR_7->db, VAR_4->db_numa_node);
 if (VAR_10) {
  FUNC_1(VAR_3, "mlx5_db_alloc_node() failed, %d\n", VAR_10);
  return VAR_10;
 }

 VAR_6->db = VAR_7->db.db;

 VAR_10 = FUNC_4(VAR_3, FUNC_6(VAR_9, VAR_8),
           &VAR_7->buf,
           VAR_4->buf_numa_node);
 if (VAR_10) {
  FUNC_1(VAR_3, "mlx5_frag_buf_alloc_node() failed, %d\n",
          VAR_10);
  goto err_db_free;
 }

 FUNC_5(VAR_7->buf.frags, VAR_8, VAR_9, &VAR_6->fbc);

 VAR_7->mdev = VAR_3;

 return 0;

err_db_free:
 FUNC_3(VAR_3, &VAR_7->db);

 return VAR_10;
}
