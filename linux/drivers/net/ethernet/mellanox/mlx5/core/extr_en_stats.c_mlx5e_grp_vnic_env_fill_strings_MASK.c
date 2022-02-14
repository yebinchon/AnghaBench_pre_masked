
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx5e_priv {int mdev; } ;
struct TYPE_4__ {int format; } ;
struct TYPE_3__ {int format; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct mlx5e_priv *VAR_3, u8 *VAR_4,
        int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_3->mdev); VAR_6++)
  FUNC_2(VAR_4 + (VAR_5++) * VAR_0,
         VAR_2[VAR_6].format);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->mdev); VAR_6++)
  FUNC_2(VAR_4 + (VAR_5++) * VAR_0,
         VAR_1[VAR_6].format);
 return VAR_5;
}
