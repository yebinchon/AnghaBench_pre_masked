
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * eq; int clr_int; int clr_mask; } ;
struct mlx4_priv {TYPE_1__ eq_table; } ;
struct TYPE_4__ {int num_comp_vectors; } ;
struct mlx4_dev {TYPE_2__ caps; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mlx4_dev*,int *) ;
 struct mlx4_priv* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_0, void *VAR_1)
{
 struct mlx4_dev *VAR_2 = VAR_1;
 struct mlx4_priv *VAR_3 = FUNC_2(VAR_2);
 int VAR_4 = 0;
 int VAR_5;

 FUNC_3(VAR_3->eq_table.clr_mask, VAR_3->eq_table.clr_int);

 for (VAR_5 = 0; VAR_5 < VAR_2->caps.num_comp_vectors + 1; ++VAR_5)
  VAR_4 |= FUNC_1(VAR_2, &VAR_3->eq_table.eq[VAR_5]);

 return FUNC_0(VAR_4);
}
