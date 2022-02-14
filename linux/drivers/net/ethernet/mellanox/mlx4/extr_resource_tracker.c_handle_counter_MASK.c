
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ counter_index; } ;
struct mlx4_qp_context {TYPE_1__ pri_path; } ;
struct mlx4_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (struct mlx4_dev*,int ,int,scalar_t__) ;
 int FUNC_2 (struct mlx4_dev*,struct mlx4_qp_context*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mlx4_dev *VAR_0, struct mlx4_qp_context *VAR_1,
     u8 VAR_2, int VAR_3)
{
 if (VAR_1->pri_path.counter_index != FUNC_0(VAR_0))
  return FUNC_1(VAR_0, VAR_2, VAR_3,
            VAR_1->pri_path.counter_index);

 return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
}
