
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ steering_mode; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
typedef enum mlx4_protocol { ____Placeholder_mlx4_protocol } mlx4_protocol ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mlx4_dev*,int,int) ;

__attribute__((used)) static int FUNC_1(struct mlx4_dev *VAR_4, int VAR_5,
       u8 *VAR_6, enum mlx4_protocol VAR_7)
{
 int VAR_8;

 if (VAR_7 != VAR_1)
  return 0;

 if (VAR_4->caps.steering_mode == VAR_2 ||
     VAR_4->caps.steering_mode == VAR_3) {
  VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6[5]);
  if (VAR_8 < 0)
   return -VAR_0;
  VAR_6[5] = VAR_8;
 }

 return 0;
}
