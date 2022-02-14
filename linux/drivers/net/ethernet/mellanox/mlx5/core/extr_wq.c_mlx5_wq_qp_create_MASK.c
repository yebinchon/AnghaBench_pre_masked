
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int * db; int fbc; } ;
struct TYPE_6__ {int * db; int fbc; } ;
struct mlx5_wq_qp {TYPE_2__ sq; TYPE_1__ rq; } ;
struct mlx5_wq_param {int buf_numa_node; int db_numa_node; } ;
struct TYPE_9__ {int * db; } ;
struct TYPE_8__ {int frags; } ;
struct mlx5_wq_ctrl {TYPE_4__ db; struct mlx5_core_dev* mdev; TYPE_3__ buf; } ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ FUNC_0 (void*,void*,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_3 (struct mlx5_core_dev*,TYPE_4__*,int ) ;
 int FUNC_4 (struct mlx5_core_dev*,TYPE_4__*) ;
 int FUNC_5 (struct mlx5_core_dev*,int,TYPE_3__*,int ) ;
 int FUNC_6 (int,scalar_t__,scalar_t__,int *) ;
 int FUNC_7 (int,scalar_t__,scalar_t__,int,int *) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;

int FUNC_9(struct mlx5_core_dev *VAR_8, struct mlx5_wq_param *VAR_9,
        void *VAR_10, struct mlx5_wq_qp *VAR_11,
        struct mlx5_wq_ctrl *VAR_12)
{
 u8 VAR_13 = FUNC_0(VAR_10, VAR_10, VAR_13) + 4;
 u8 VAR_14 = FUNC_0(VAR_10, VAR_10, VAR_5);
 u8 VAR_15 = FUNC_1(VAR_1);
 u8 VAR_16 = FUNC_0(VAR_10, VAR_10, VAR_7);

 u32 VAR_17;
 int VAR_18;



 VAR_18 = FUNC_3(VAR_8, &VAR_12->db, VAR_9->db_numa_node);
 if (VAR_18) {
  FUNC_2(VAR_8, "mlx5_db_alloc_node() failed, %d\n", VAR_18);
  return VAR_18;
 }

 VAR_18 = FUNC_5(VAR_8,
           FUNC_8(VAR_14, VAR_13) +
           FUNC_8(VAR_16, VAR_15),
           &VAR_12->buf, VAR_9->buf_numa_node);
 if (VAR_18) {
  FUNC_2(VAR_8, "mlx5_frag_buf_alloc_node() failed, %d\n", VAR_18);
  goto err_db_free;
 }

 FUNC_6(VAR_12->buf.frags, VAR_13, VAR_14, &VAR_11->rq.fbc);

 VAR_17 = FUNC_8(VAR_14, VAR_13);

 if (VAR_17 < VAR_4) {

  u16 VAR_19 = VAR_17 / VAR_1;

  FUNC_7(VAR_12->buf.frags,
         VAR_15, VAR_16, VAR_19,
         &VAR_11->sq.fbc);
 } else {
  u16 VAR_20 = VAR_17 >> VAR_3;

  FUNC_6(VAR_12->buf.frags + VAR_20,
         VAR_15, VAR_16, &VAR_11->sq.fbc);
 }

 VAR_11->rq.db = &VAR_12->db.db[VAR_0];
 VAR_11->sq.db = &VAR_12->db.db[VAR_2];

 VAR_12->mdev = VAR_8;

 return 0;

err_db_free:
 FUNC_4(VAR_8, &VAR_12->db);

 return VAR_18;
}
