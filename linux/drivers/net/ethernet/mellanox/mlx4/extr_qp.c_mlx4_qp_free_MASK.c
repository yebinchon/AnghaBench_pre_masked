
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_qp {int qpn; int free; int refcount; } ;
struct mlx4_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx4_dev*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mlx4_dev *VAR_0, struct mlx4_qp *VAR_1)
{
 if (FUNC_2(&VAR_1->refcount))
  FUNC_0(&VAR_1->free);
 FUNC_3(&VAR_1->free);

 FUNC_1(VAR_0, VAR_1->qpn);
}
