
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5e_xsk_param {int dummy; } ;
struct mlx5e_rq_frags_info {int num_frags; int wqe_bulk; int log_num_frags; TYPE_1__* arr; } ;
struct mlx5e_params {int sw_mtu; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {int frag_size; int frag_stride; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mlx5e_params*,int ) ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct mlx5e_params*,struct mlx5e_xsk_param*) ;
 scalar_t__ FUNC_5 (struct mlx5e_params*,struct mlx5e_xsk_param*) ;
 int FUNC_6 (int) ;
 void* FUNC_7 (int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_8(struct mlx5_core_dev *VAR_5,
          struct mlx5e_params *VAR_6,
          struct mlx5e_xsk_param *VAR_7,
          struct mlx5e_rq_frags_info *VAR_8)
{
 u32 VAR_9 = FUNC_0(VAR_6, VAR_6->sw_mtu);
 int VAR_10 = VAR_0;
 u32 VAR_11 = 0;
 int VAR_12;






 if (FUNC_5(VAR_6, VAR_7)) {
  int VAR_13;

  VAR_13 = FUNC_4(VAR_6, VAR_7);
  VAR_13 = FUNC_7(VAR_13);

  VAR_8->arr[0].frag_size = VAR_9;
  VAR_8->arr[0].frag_stride = VAR_13;
  VAR_8->num_frags = 1;
  VAR_8->wqe_bulk = VAR_3 / VAR_13;
  goto out;
 }

 if (VAR_9 > VAR_3 +
     (VAR_1 - 1) * VAR_10)
  VAR_10 = VAR_3;

 VAR_12 = 0;
 while (VAR_11 < VAR_9) {
  int VAR_14 = VAR_9 - VAR_11;

  if (VAR_12 < VAR_1 - 1)
   VAR_14 = FUNC_3(VAR_14, VAR_10);

  VAR_8->arr[VAR_12].frag_size = VAR_14;
  VAR_8->arr[VAR_12].frag_stride = FUNC_7(VAR_14);

  VAR_11 += VAR_14;
  VAR_12++;
 }
 VAR_8->num_frags = VAR_12;

 VAR_8->wqe_bulk = 1 + (VAR_8->num_frags % 2);

out:
 VAR_8->wqe_bulk = FUNC_2(VAR_4, VAR_8->wqe_bulk, 8);
 VAR_8->log_num_frags = FUNC_6(VAR_8->num_frags);
}
