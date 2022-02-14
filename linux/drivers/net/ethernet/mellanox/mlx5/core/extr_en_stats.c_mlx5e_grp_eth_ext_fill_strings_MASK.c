
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx5e_priv {int mdev; } ;
struct TYPE_2__ {int format; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct mlx5e_priv *VAR_4, u8 *VAR_5,
       int VAR_6)
{
 int VAR_7;

 if (FUNC_0((VAR_4)->mdev, VAR_3))
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
   FUNC_1(VAR_5 + (VAR_6++) * VAR_0,
          VAR_2[VAR_7].format);
 return VAR_6;
}
