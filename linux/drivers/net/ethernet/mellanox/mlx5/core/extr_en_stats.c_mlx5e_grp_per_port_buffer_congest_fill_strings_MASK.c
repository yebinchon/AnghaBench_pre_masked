
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_4__ {char* format; } ;
struct TYPE_3__ {char* format; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static int FUNC_2(struct mlx5e_priv *VAR_7,
         u8 *VAR_8, int VAR_9)
{
 struct mlx5_core_dev *VAR_10 = VAR_7->mdev;
 int VAR_11, VAR_12;

 if (!FUNC_0(VAR_10, VAR_6))
  return VAR_9;

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
   FUNC_1(VAR_8 + (VAR_9++) * VAR_0,
    VAR_5[VAR_11].format, VAR_12);
  for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
   FUNC_1(VAR_8 + (VAR_9++) * VAR_0,
    VAR_4[VAR_11].format, VAR_12);
 }

 return VAR_9;
}
