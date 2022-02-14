
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct mlx5e_priv {int tls; } ;
struct TYPE_2__ {int format; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *,int ) ;

int FUNC_1(struct mlx5e_priv *VAR_3, uint8_t *VAR_4)
{
 unsigned int VAR_5, VAR_6 = 0;

 if (!VAR_3->tls)
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_0(VAR_4 + (VAR_6++) * VAR_0,
         VAR_2[VAR_5].format);

 return VAR_1;
}
