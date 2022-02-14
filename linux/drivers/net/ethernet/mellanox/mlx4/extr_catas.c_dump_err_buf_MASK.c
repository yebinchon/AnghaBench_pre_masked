
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ map; } ;
struct TYPE_3__ {int catas_size; } ;
struct mlx4_priv {TYPE_2__ catas_err; TYPE_1__ fw; } ;
struct mlx4_dev {int dummy; } ;


 int FUNC_0 (struct mlx4_dev*,char*,...) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mlx4_dev *VAR_0)
{
 struct mlx4_priv *VAR_1 = FUNC_1(VAR_0);

 int VAR_2;

 FUNC_0(VAR_0, "Internal error detected:\n");
 for (VAR_2 = 0; VAR_2 < VAR_1->fw.catas_size; ++VAR_2)
  FUNC_0(VAR_0, "  buf[%02x]: %08x\n",
    VAR_2, FUNC_3(FUNC_2(VAR_1->catas_err.map + VAR_2)));
}
