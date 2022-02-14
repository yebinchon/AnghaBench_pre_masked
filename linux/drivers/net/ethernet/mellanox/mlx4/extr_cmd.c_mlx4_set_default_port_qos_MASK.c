
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_qos_manager {int priority_bm; } ;
struct TYPE_3__ {struct mlx4_qos_manager* qos_ctl; } ;
struct TYPE_4__ {TYPE_1__ master; } ;
struct mlx4_priv {TYPE_2__ mfunc; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mlx4_dev *VAR_2, int VAR_3)
{
 struct mlx4_qos_manager *VAR_4;
 struct mlx4_priv *VAR_5 = FUNC_1(VAR_2);

 VAR_4 = &VAR_5->mfunc.master.qos_ctl[VAR_3];
 FUNC_0(VAR_4->priority_bm, VAR_1);


 FUNC_2(VAR_0, VAR_4->priority_bm);
}
