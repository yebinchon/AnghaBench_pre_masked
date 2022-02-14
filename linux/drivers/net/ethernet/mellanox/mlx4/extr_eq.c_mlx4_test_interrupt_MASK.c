
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* eq; } ;
struct mlx4_priv {TYPE_2__ eq_table; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_3__ {int eqn; } ;


 size_t FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*,int ,int ,int ) ;
 int FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_6 (struct mlx4_dev*) ;
 int FUNC_7 (struct mlx4_dev*,char*) ;

int FUNC_8(struct mlx4_dev *VAR_1, int VAR_2)
{
 struct mlx4_priv *VAR_3 = FUNC_6(VAR_1);
 int VAR_4;


 FUNC_5(VAR_1);


 VAR_4 = FUNC_2(VAR_1, FUNC_1(VAR_1), 0,
     VAR_3->eq_table.eq[FUNC_0(VAR_2)].eqn);
 if (VAR_4) {
  FUNC_7(VAR_1, "Failed mapping eq for interrupt test\n");
  goto out;
 }


 FUNC_4(VAR_1);
 VAR_4 = FUNC_3(VAR_1);


 FUNC_5(VAR_1);
out:
 FUNC_2(VAR_1, FUNC_1(VAR_1), 0,
      VAR_3->eq_table.eq[VAR_0].eqn);
 FUNC_4(VAR_1);

 return VAR_4;
}
