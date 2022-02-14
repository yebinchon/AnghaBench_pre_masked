
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx5e_priv {int mdev; } ;
struct TYPE_6__ {int format; } ;
struct TYPE_5__ {int format; } ;
struct TYPE_4__ {int format; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 TYPE_2__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_2(struct mlx5e_priv *VAR_10, u8 *VAR_11,
           int VAR_12)
{
 int VAR_13;

 if (FUNC_0((VAR_10)->mdev, VAR_8))
  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++)
   FUNC_1(VAR_11 + (VAR_12++) * VAR_0,
          VAR_6[VAR_13].format);

 if (FUNC_0((VAR_10)->mdev, VAR_9))
  for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++)
   FUNC_1(VAR_11 + (VAR_12++) * VAR_0,
          VAR_7[VAR_13].format);

 if (FUNC_0((VAR_10)->mdev, VAR_4))
  for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++)
   FUNC_1(VAR_11 + (VAR_12++) * VAR_0,
          VAR_5[VAR_13].format);
 return VAR_12;
}
