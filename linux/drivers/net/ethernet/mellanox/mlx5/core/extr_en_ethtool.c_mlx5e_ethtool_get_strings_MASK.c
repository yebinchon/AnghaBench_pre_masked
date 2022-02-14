
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx5e_priv {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct mlx5e_priv*,int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct mlx5e_priv*) ;
 int * VAR_3 ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct mlx5e_priv *VAR_4, u32 VAR_5, u8 *VAR_6)
{
 int VAR_7;

 switch (VAR_5) {
 case 130:
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
   FUNC_2(VAR_6 + VAR_7 * VAR_0,
          VAR_2[VAR_7].name);
  break;

 case 128:
  for (VAR_7 = 0; VAR_7 < FUNC_1(VAR_4); VAR_7++)
   FUNC_2(VAR_6 + VAR_7 * VAR_0,
          VAR_3[VAR_7]);
  break;

 case 129:
  FUNC_0(VAR_4, VAR_6);
  break;
 }
}
