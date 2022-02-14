
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx5e_priv {int dummy; } ;
struct TYPE_2__ {char* format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static int FUNC_1(struct mlx5e_priv *VAR_4,
         u8 *VAR_5,
         int VAR_6)
{
 int VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
   FUNC_0(VAR_5 + (VAR_6++) * VAR_0,
    VAR_3[VAR_7].format, VAR_8);
 }

 return VAR_6;
}
