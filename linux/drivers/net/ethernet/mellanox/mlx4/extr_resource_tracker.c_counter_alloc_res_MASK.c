
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx4_dev*,int *) ;
 int FUNC_1 (struct mlx4_dev*,int ) ;
 int FUNC_2 (struct mlx4_dev*,int,int ,int,int ,int) ;
 int FUNC_3 (struct mlx4_dev*,int,int ,int,int ) ;
 int FUNC_4 (struct mlx4_dev*,int,int ,int,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct mlx4_dev *VAR_3, int VAR_4, int VAR_5, int VAR_6,
        u64 VAR_7, u64 *VAR_8, int VAR_9)
{
 u32 VAR_10;
 int VAR_11;

 if (VAR_5 != VAR_2)
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_3, VAR_4, VAR_1, 1, 0);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_0(VAR_3, &VAR_10);
 if (VAR_11) {
  FUNC_4(VAR_3, VAR_4, VAR_1, 1, 0);
  return VAR_11;
 }

 VAR_11 = FUNC_2(VAR_3, VAR_4, VAR_10, 1, VAR_1, VAR_9);
 if (VAR_11) {
  FUNC_1(VAR_3, VAR_10);
  FUNC_4(VAR_3, VAR_4, VAR_1, 1, 0);
 } else {
  FUNC_5(VAR_8, VAR_10);
 }

 return VAR_11;
}
