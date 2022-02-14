
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_wqe_srq_next_seg {int next_wqe_index; } ;
struct mlx5_wq_param {int buf_numa_node; int db_numa_node; } ;
struct mlx5_frag_buf_ctrl {int sz_m1; } ;
struct mlx5_wq_ll {int * tail_next; int db; struct mlx5_frag_buf_ctrl fbc; } ;
struct TYPE_5__ {int db; } ;
struct TYPE_4__ {int frags; } ;
struct mlx5_wq_ctrl {TYPE_2__ db; struct mlx5_core_dev* mdev; TYPE_1__ buf; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_wq_ll*,void*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_3 (struct mlx5_core_dev*,TYPE_2__*,int ) ;
 int FUNC_4 (struct mlx5_core_dev*,TYPE_2__*) ;
 int FUNC_5 (struct mlx5_core_dev*,int ,TYPE_1__*,int ) ;
 int FUNC_6 (int ,int ,int ,struct mlx5_frag_buf_ctrl*) ;
 struct mlx5_wqe_srq_next_seg* FUNC_7 (struct mlx5_wq_ll*,int) ;
 int FUNC_8 (int ,int ) ;

int FUNC_9(struct mlx5_core_dev *VAR_2, struct mlx5_wq_param *VAR_3,
        void *VAR_4, struct mlx5_wq_ll *VAR_5,
        struct mlx5_wq_ctrl *VAR_6)
{
 u8 VAR_7 = FUNC_0(VAR_5, VAR_4, VAR_7);
 u8 VAR_8 = FUNC_0(VAR_5, VAR_4, VAR_8);
 struct mlx5_frag_buf_ctrl *VAR_9 = &VAR_5->fbc;
 struct mlx5_wqe_srq_next_seg *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3(VAR_2, &VAR_6->db, VAR_3->db_numa_node);
 if (VAR_11) {
  FUNC_2(VAR_2, "mlx5_db_alloc_node() failed, %d\n", VAR_11);
  return VAR_11;
 }

 VAR_5->db = VAR_6->db.db;

 VAR_11 = FUNC_5(VAR_2, FUNC_8(VAR_8, VAR_7),
           &VAR_6->buf, VAR_3->buf_numa_node);
 if (VAR_11) {
  FUNC_2(VAR_2, "mlx5_frag_buf_alloc_node() failed, %d\n", VAR_11);
  goto err_db_free;
 }

 FUNC_6(VAR_6->buf.frags, VAR_7, VAR_8, VAR_9);

 for (VAR_12 = 0; VAR_12 < VAR_9->sz_m1; VAR_12++) {
  VAR_10 = FUNC_7(VAR_5, VAR_12);
  VAR_10->next_wqe_index = FUNC_1(VAR_12 + 1);
 }
 VAR_10 = FUNC_7(VAR_5, VAR_12);
 VAR_5->tail_next = &VAR_10->next_wqe_index;

 VAR_6->mdev = VAR_2;

 return 0;

err_db_free:
 FUNC_4(VAR_2, &VAR_6->db);

 return VAR_11;
}
