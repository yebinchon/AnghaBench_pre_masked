
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx4_dev*,int) ;
 int FUNC_1 (struct mlx4_dev*,int,int) ;
 int FUNC_2 (struct mlx4_dev*,int,int,int,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mlx4_dev*,int,int ,int,int ) ;
 int FUNC_5 (struct mlx4_dev*,int,int ,int,int ) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(struct mlx4_dev *VAR_4, int VAR_5, int VAR_6, int VAR_7,
    u64 VAR_8, u64 *VAR_9)
{
 int VAR_10 = -VAR_0;
 int VAR_11;
 int VAR_12;

 if (VAR_6 != VAR_3)
  return VAR_10;

 VAR_12 = FUNC_3(&VAR_8);

 VAR_10 = FUNC_4(VAR_4, VAR_5, VAR_2, 1 << VAR_12, 0);
 if (VAR_10)
  return VAR_10;

 VAR_11 = FUNC_0(VAR_4, VAR_12);
 if (VAR_11 == -1) {
  FUNC_5(VAR_4, VAR_5, VAR_2, 1 << VAR_12, 0);
  return -VAR_1;
 }

 VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_11, 1, VAR_2, VAR_12);
 if (VAR_10) {
  FUNC_5(VAR_4, VAR_5, VAR_2, 1 << VAR_12, 0);
  FUNC_1(VAR_4, VAR_11, VAR_12);
 } else {
  FUNC_6(VAR_9, VAR_11);
 }

 return VAR_10;
}
