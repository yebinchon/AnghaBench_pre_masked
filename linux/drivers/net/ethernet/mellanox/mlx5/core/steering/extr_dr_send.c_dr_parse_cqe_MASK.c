
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct mlx5dr_cq {TYPE_2__* qp; } ;
struct mlx5_cqe64 {int wqe_counter; } ;
struct TYPE_3__ {int wqe_cnt; scalar_t__* wqe_head; scalar_t__ cc; } ;
struct TYPE_4__ {TYPE_1__ sq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mlx5_cqe64*) ;

__attribute__((used)) static int FUNC_2(struct mlx5dr_cq *VAR_4, struct mlx5_cqe64 *VAR_5)
{
 unsigned int VAR_6;
 u8 VAR_7;

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7 == VAR_2) {
  VAR_6 = FUNC_0(VAR_5->wqe_counter) &
   (VAR_4->qp->sq.wqe_cnt - 1);
  VAR_4->qp->sq.cc = VAR_4->qp->sq.wqe_head[VAR_6] + 1;
 } else if (VAR_7 == VAR_3) {
  ++VAR_4->qp->sq.cc;
 } else {
  VAR_6 = FUNC_0(VAR_5->wqe_counter) &
   (VAR_4->qp->sq.wqe_cnt - 1);
  VAR_4->qp->sq.cc = VAR_4->qp->sq.wqe_head[VAR_6] + 1;

  return VAR_0;
 }

 return VAR_1;
}
