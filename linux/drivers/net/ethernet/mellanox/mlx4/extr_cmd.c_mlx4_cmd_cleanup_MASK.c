
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ initialized; int * hcr; int * pool; } ;
struct TYPE_7__ {int * vhcr; int vhcr_dma; } ;
struct mlx4_priv {TYPE_4__ cmd; TYPE_3__ mfunc; } ;
struct mlx4_dev {TYPE_2__* persist; } ;
struct TYPE_6__ {TYPE_1__* pdev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_5 (struct mlx4_dev*) ;

void FUNC_6(struct mlx4_dev *VAR_5, int VAR_6)
{
 struct mlx4_priv *VAR_7 = FUNC_5(VAR_5);

 if (VAR_7->cmd.pool && (VAR_6 & VAR_1)) {
  FUNC_1(VAR_7->cmd.pool);
  VAR_7->cmd.pool = ((void*)0);
 }

 if (!FUNC_4(VAR_5) && VAR_7->cmd.hcr &&
     (VAR_6 & VAR_0)) {
  FUNC_2(VAR_7->cmd.hcr);
  VAR_7->cmd.hcr = ((void*)0);
 }
 if (FUNC_3(VAR_5) && VAR_7->mfunc.vhcr &&
     (VAR_6 & VAR_3)) {
  FUNC_0(&VAR_5->persist->pdev->dev, VAR_4,
      VAR_7->mfunc.vhcr, VAR_7->mfunc.vhcr_dma);
  VAR_7->mfunc.vhcr = ((void*)0);
 }
 if (VAR_7->cmd.initialized && (VAR_6 & VAR_2))
  VAR_7->cmd.initialized = 0;
}
