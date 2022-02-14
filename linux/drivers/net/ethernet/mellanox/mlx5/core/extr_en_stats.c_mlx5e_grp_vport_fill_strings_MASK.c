
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx5e_priv {int dummy; } ;
struct TYPE_2__ {int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct mlx5e_priv *VAR_3, u8 *VAR_4,
     int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_0(VAR_4 + (VAR_5++) * VAR_0, VAR_2[VAR_6].format);
 return VAR_5;
}
