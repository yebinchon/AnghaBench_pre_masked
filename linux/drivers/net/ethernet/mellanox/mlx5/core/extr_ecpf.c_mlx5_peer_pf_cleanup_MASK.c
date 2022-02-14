
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int peer_pf_pages; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*,int *) ;

__attribute__((used)) static void FUNC_4(struct mlx5_core_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_0(VAR_0, "Failed to disable peer PF HCA err(%d)\n",
         VAR_1);
  return;
 }

 VAR_1 = FUNC_3(VAR_0, &VAR_0->priv.peer_pf_pages);
 if (VAR_1)
  FUNC_1(VAR_0, "Timeout reclaiming peer PF pages err(%d)\n",
          VAR_1);
}
