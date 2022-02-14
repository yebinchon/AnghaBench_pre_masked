
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct mlx4_eq* eq; } ;
struct mlx4_priv {TYPE_2__ eq_table; } ;
struct mlx4_eq {int affinity_mask; } ;
struct TYPE_3__ {int num_comp_vectors; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct mlx4_dev*,int) ;
 struct mlx4_priv* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct mlx4_dev *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 struct mlx4_priv *VAR_8 = FUNC_2(VAR_4);
 struct mlx4_eq *VAR_9;
 int VAR_10 = 0;
 int VAR_11;

 if (VAR_6 > VAR_4->caps.num_comp_vectors)
  return -VAR_0;

 for (VAR_11 = 1; VAR_11 < VAR_5; VAR_11++)
  VAR_10 += FUNC_1(VAR_4, VAR_11);

 VAR_7 = VAR_6 - VAR_10 - !!(VAR_6 > VAR_3);


 if (VAR_7 < 0)
  return 0;

 VAR_9 = &VAR_8->eq_table.eq[VAR_6];

 if (!FUNC_3(&VAR_9->affinity_mask, VAR_2))
  return -VAR_1;

 FUNC_0(VAR_7, VAR_9->affinity_mask);

 return 0;
}
