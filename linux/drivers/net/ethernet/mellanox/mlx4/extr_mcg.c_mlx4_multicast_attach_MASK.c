
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
typedef enum mlx4_protocol { ____Placeholder_mlx4_protocol } mlx4_protocol ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct mlx4_dev*,struct mlx4_qp*,int*,int,int,int) ;
 int FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*,struct mlx4_qp*,int*,int,int,int) ;
 int FUNC_3 (struct mlx4_dev*,struct mlx4_qp*,int*,int,int,int,int *) ;

int FUNC_4(struct mlx4_dev *VAR_3, struct mlx4_qp *VAR_4, u8 VAR_5[16],
     u8 VAR_6, int VAR_7,
     enum mlx4_protocol VAR_8, u64 *VAR_9)
{
 switch (VAR_3->caps.steering_mode) {
 case 130:
  if (VAR_8 == VAR_2)
   return 0;


 case 129:
  if (VAR_8 == VAR_2)
   VAR_5[7] |= (VAR_1 << 1);

  if (FUNC_1(VAR_3))
   return FUNC_0(VAR_3, VAR_4, VAR_5, 1,
           VAR_7, VAR_8);
  return FUNC_2(VAR_3, VAR_4, VAR_5,
          VAR_7, VAR_8,
          VAR_1);

 case 128:
  return FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6,
       VAR_7,
       VAR_8, VAR_9);
 default:
  return -VAR_0;
 }
}
