
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int cur_sz; } ;
struct TYPE_8__ {TYPE_3__ wq; } ;
struct TYPE_5__ {int cur_sz; } ;
struct TYPE_6__ {TYPE_1__ wq; } ;
struct mlx5e_rq {int wq_type; TYPE_4__ wqe; TYPE_2__ mpwqe; } ;




__attribute__((used)) static inline u32 FUNC_0(struct mlx5e_rq *VAR_0)
{
 switch (VAR_0->wq_type) {
 case 128:
  return VAR_0->mpwqe.wq.cur_sz;
 default:
  return VAR_0->wqe.wq.cur_sz;
 }
}
