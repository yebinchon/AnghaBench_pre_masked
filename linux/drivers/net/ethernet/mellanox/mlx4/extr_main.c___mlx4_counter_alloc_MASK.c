
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx4_priv {int counters_bitmap; } ;
struct TYPE_2__ {int flags; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (int *) ;
 struct mlx4_priv* FUNC_2 (struct mlx4_dev*) ;

int FUNC_3(struct mlx4_dev *VAR_3, u32 *VAR_4)
{
 struct mlx4_priv *VAR_5 = FUNC_2(VAR_3);

 if (!(VAR_3->caps.flags & VAR_2))
  return -VAR_0;

 *VAR_4 = FUNC_1(&VAR_5->counters_bitmap);
 if (*VAR_4 == -1) {
  *VAR_4 = FUNC_0(VAR_3);
  return -VAR_1;
 }

 return 0;
}
