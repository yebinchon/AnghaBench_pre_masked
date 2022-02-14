
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct mlx4_en_dev {void** pndev; } ;
struct mlx4_dev {int dummy; } ;



__attribute__((used)) static void *FUNC_0(struct mlx4_dev *VAR_0, void *VAR_1, u8 VAR_2)
{
 struct mlx4_en_dev *VAR_3 = VAR_1;

 return VAR_3->pndev[VAR_2];
}
