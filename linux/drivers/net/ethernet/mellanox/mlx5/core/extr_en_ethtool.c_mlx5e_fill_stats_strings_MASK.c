
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx5e_priv {int dummy; } ;
struct TYPE_2__ {int (* fill_strings ) (struct mlx5e_priv*,int *,int) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct mlx5e_priv*,int *,int) ;

__attribute__((used)) static void FUNC_1(struct mlx5e_priv *VAR_2, u8 *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_5 = VAR_1[VAR_4].fill_strings(VAR_2, VAR_3, VAR_5);
}
