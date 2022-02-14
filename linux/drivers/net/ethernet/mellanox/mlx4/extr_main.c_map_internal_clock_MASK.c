
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ clock_offset; int clock_bar; } ;
struct mlx4_priv {int clock_mapping; TYPE_2__ fw; } ;
struct mlx4_dev {TYPE_1__* persist; } ;
struct TYPE_3__ {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mlx4_dev *VAR_2)
{
 struct mlx4_priv *VAR_3 = FUNC_1(VAR_2);

 VAR_3->clock_mapping =
  FUNC_0(FUNC_2(VAR_2->persist->pdev,
        VAR_3->fw.clock_bar) +
   VAR_3->fw.clock_offset, VAR_1);

 if (!VAR_3->clock_mapping)
  return -VAR_0;

 return 0;
}
