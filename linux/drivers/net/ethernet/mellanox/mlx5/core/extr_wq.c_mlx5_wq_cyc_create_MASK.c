
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_wq_param {int buf_numa_node; int db_numa_node; } ;
struct mlx5_frag_buf_ctrl {int dummy; } ;
struct mlx5_wq_cyc {int sz; int db; struct mlx5_frag_buf_ctrl fbc; } ;
struct TYPE_5__ {int db; } ;
struct TYPE_4__ {int frags; } ;
struct mlx5_wq_ctrl {TYPE_2__ db; struct mlx5_core_dev* mdev; TYPE_1__ buf; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_wq_cyc*,void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_2 (struct mlx5_core_dev*,TYPE_2__*,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,TYPE_2__*) ;
 int FUNC_4 (struct mlx5_core_dev*,int ,TYPE_1__*,int ) ;
 int FUNC_5 (int ,int ,int ,struct mlx5_frag_buf_ctrl*) ;
 int FUNC_6 (struct mlx5_wq_cyc*) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(struct mlx5_core_dev *VAR_2, struct mlx5_wq_param *VAR_3,
         void *VAR_4, struct mlx5_wq_cyc *VAR_5,
         struct mlx5_wq_ctrl *VAR_6)
{
 u8 VAR_7 = FUNC_0(VAR_5, VAR_4, VAR_7);
 u8 VAR_8 = FUNC_0(VAR_5, VAR_4, VAR_8);
 struct mlx5_frag_buf_ctrl *VAR_9 = &VAR_5->fbc;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_2, &VAR_6->db, VAR_3->db_numa_node);
 if (VAR_10) {
  FUNC_1(VAR_2, "mlx5_db_alloc_node() failed, %d\n", VAR_10);
  return VAR_10;
 }

 VAR_5->db = VAR_6->db.db;

 VAR_10 = FUNC_4(VAR_2, FUNC_7(VAR_8, VAR_7),
           &VAR_6->buf, VAR_3->buf_numa_node);
 if (VAR_10) {
  FUNC_1(VAR_2, "mlx5_frag_buf_alloc_node() failed, %d\n", VAR_10);
  goto err_db_free;
 }

 FUNC_5(VAR_6->buf.frags, VAR_7, VAR_8, VAR_9);
 VAR_5->sz = FUNC_6(VAR_5);

 VAR_6->mdev = VAR_2;

 return 0;

err_db_free:
 FUNC_3(VAR_2, &VAR_6->db);

 return VAR_10;
}
