
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_dev_cap {int flags2; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_dev*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct mlx4_dev *VAR_2, struct mlx4_dev_cap *VAR_3,
         int *VAR_4)
{
 int VAR_5 = VAR_4[0] + VAR_4[1] + VAR_4[2];

 if (!(VAR_3->flags2 & VAR_1) &&
     VAR_5 >= 64) {
  FUNC_0(VAR_2, "Requested %d VFs, but FW does not support more than 64\n",
    VAR_5);
  return VAR_0;
 }
 return 0;
}
