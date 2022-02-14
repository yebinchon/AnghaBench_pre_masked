
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct mlx5dr_fw_recalc_cs_ft {int rx_icm_addr; } ;
struct TYPE_2__ {struct mlx5dr_fw_recalc_cs_ft** recalc_cs_ft; } ;
struct mlx5dr_domain {TYPE_1__ cache; } ;


 int VAR_0 ;
 struct mlx5dr_fw_recalc_cs_ft* FUNC_0 (struct mlx5dr_domain*,size_t) ;

int FUNC_1(struct mlx5dr_domain *VAR_1,
           u32 VAR_2,
           u64 *VAR_3)
{
 struct mlx5dr_fw_recalc_cs_ft *VAR_4;

 VAR_4 = VAR_1->cache.recalc_cs_ft[VAR_2];
 if (!VAR_4) {

  VAR_4 = FUNC_0(VAR_1, VAR_2);
  if (!VAR_4)
   return -VAR_0;

  VAR_1->cache.recalc_cs_ft[VAR_2] = VAR_4;
 }

 *VAR_3 = VAR_4->rx_icm_addr;

 return 0;
}
