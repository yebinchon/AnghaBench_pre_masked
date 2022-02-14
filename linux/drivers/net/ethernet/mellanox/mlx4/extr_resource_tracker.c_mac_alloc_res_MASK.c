
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_dev*,int,int ) ;
 int FUNC_1 (struct mlx4_dev*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx4_dev*,int,int ,int,int) ;
 int FUNC_4 (struct mlx4_dev*,int,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(struct mlx4_dev *VAR_2, int VAR_3, int VAR_4, int VAR_5,
    u64 VAR_6, u64 *VAR_7, int VAR_8)
{
 int VAR_9 = -VAR_0;
 int VAR_10;
 u64 VAR_11;
 u8 VAR_12;

 if (VAR_4 != VAR_1)
  return VAR_9;

 VAR_10 = !VAR_8 ? FUNC_2(VAR_7) : VAR_8;
 VAR_10 = FUNC_4(
   VAR_2, VAR_3, VAR_10);

 if (VAR_10 < 0)
  return -VAR_0;
 VAR_11 = VAR_6;

 VAR_9 = FUNC_0(VAR_2, VAR_10, VAR_11);
 if (VAR_9 >= 0) {
  VAR_12 = VAR_9;
  FUNC_5(VAR_7, VAR_9);
  VAR_9 = 0;
 }

 if (!VAR_9) {
  VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_11, VAR_10, VAR_12);
  if (VAR_9)
   FUNC_1(VAR_2, VAR_10, VAR_11);
 }
 return VAR_9;
}
