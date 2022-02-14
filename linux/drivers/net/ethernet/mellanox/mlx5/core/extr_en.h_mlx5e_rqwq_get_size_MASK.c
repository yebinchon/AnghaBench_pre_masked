
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int wq; } ;
struct TYPE_3__ {int wq; } ;
struct mlx5e_rq {int wq_type; TYPE_2__ wqe; TYPE_1__ mpwqe; } ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline u32 FUNC_2(struct mlx5e_rq *VAR_0)
{
 switch (VAR_0->wq_type) {
 case 128:
  return FUNC_1(&VAR_0->mpwqe.wq);
 default:
  return FUNC_0(&VAR_0->wqe.wq);
 }
}
