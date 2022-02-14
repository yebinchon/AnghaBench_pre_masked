
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct mlx5e_priv {int ipsec; } ;
struct TYPE_4__ {int format; } ;
struct TYPE_3__ {int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (int *,int ) ;

int FUNC_1(struct mlx5e_priv *VAR_6, uint8_t *VAR_7)
{
 unsigned int VAR_8, VAR_9 = 0;

 if (!VAR_6->ipsec)
  return 0;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  FUNC_0(VAR_7 + (VAR_9++) * VAR_0,
         VAR_4[VAR_8].format);

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  FUNC_0(VAR_7 + (VAR_9++) * VAR_0,
         VAR_5[VAR_8].format);

 return VAR_1;
}
