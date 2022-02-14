
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* db; } ;
struct TYPE_7__ {int page_shift; int npages; } ;
struct mlx4_hwq_resources {TYPE_1__ db; TYPE_3__ buf; int mtt; } ;
struct mlx4_dev {int dummy; } ;


 int FUNC_0 (struct mlx4_dev*,int,TYPE_3__*) ;
 int FUNC_1 (struct mlx4_dev*,int,TYPE_3__*) ;
 int FUNC_2 (struct mlx4_dev*,int *,TYPE_3__*) ;
 int FUNC_3 (struct mlx4_dev*,TYPE_1__*,int) ;
 int FUNC_4 (struct mlx4_dev*,TYPE_1__*) ;
 int FUNC_5 (struct mlx4_dev*,int *) ;
 int FUNC_6 (struct mlx4_dev*,int ,int ,int *) ;

int FUNC_7(struct mlx4_dev *VAR_0, struct mlx4_hwq_resources *VAR_1,
         int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_0, &VAR_1->db, 1);
 if (VAR_3)
  return VAR_3;

 *VAR_1->db.db = 0;

 VAR_3 = FUNC_0(VAR_0, VAR_2, &VAR_1->buf);
 if (VAR_3)
  goto err_db;

 VAR_3 = FUNC_6(VAR_0, VAR_1->buf.npages, VAR_1->buf.page_shift,
       &VAR_1->mtt);
 if (VAR_3)
  goto err_buf;

 VAR_3 = FUNC_2(VAR_0, &VAR_1->mtt, &VAR_1->buf);
 if (VAR_3)
  goto err_mtt;

 return 0;

err_mtt:
 FUNC_5(VAR_0, &VAR_1->mtt);
err_buf:
 FUNC_1(VAR_0, VAR_2, &VAR_1->buf);
err_db:
 FUNC_4(VAR_0, &VAR_1->db);

 return VAR_3;
}
