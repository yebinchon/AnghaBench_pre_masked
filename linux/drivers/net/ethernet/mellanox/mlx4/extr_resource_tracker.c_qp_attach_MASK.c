
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct mlx4_qp {int dummy; } ;
struct TYPE_2__ {int steering_mode; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
typedef enum mlx4_steer_type { ____Placeholder_mlx4_steer_type } mlx4_steer_type ;
typedef enum mlx4_protocol { ____Placeholder_mlx4_protocol } mlx4_protocol ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct mlx4_dev*,struct mlx4_qp*,int*,int,int,int) ;
 int FUNC_1 (struct mlx4_dev*,int,int) ;
 int FUNC_2 (struct mlx4_dev*,struct mlx4_qp*,int*,int,int,int,int *) ;

__attribute__((used)) static int FUNC_3(struct mlx4_dev *VAR_2, int VAR_3, struct mlx4_qp *VAR_4,
       u8 VAR_5[16], int VAR_6, enum mlx4_protocol VAR_7,
       enum mlx4_steer_type VAR_8, u64 *VAR_9)
{
 switch (VAR_2->caps.steering_mode) {
 case 128: {
  int VAR_10 = FUNC_1(VAR_2, VAR_3, VAR_5[5]);
  if (VAR_10 < 0)
   return VAR_10;
  return FUNC_2(VAR_2, VAR_4, VAR_5, VAR_10,
      VAR_6, VAR_7,
      VAR_9);
 }
 case 129:
  if (VAR_7 == VAR_1) {
   int VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_5[5]);
   if (VAR_11 < 0)
    return VAR_11;
   VAR_5[5] = VAR_11;
  }
  return FUNC_0(VAR_2, VAR_4, VAR_5,
         VAR_6, VAR_7, VAR_8);
 default:
  return -VAR_0;
 }
}
