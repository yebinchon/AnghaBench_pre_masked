
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mr_mfc {int dummy; } ;
struct mlxsw_sp_mr_table {TYPE_2__* mlxsw_sp; } ;
struct mfc6_cache {int mf6c_mcastgrp; int mf6c_origin; } ;
struct TYPE_4__ {TYPE_1__* bus_info; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static bool
FUNC_2(const struct mlxsw_sp_mr_table *VAR_0,
       const struct mr_mfc *VAR_1)
{
 struct mfc6_cache *VAR_2 = (struct mfc6_cache *) VAR_1;




 if (FUNC_1(&VAR_2->mf6c_origin) &&
     FUNC_1(&VAR_2->mf6c_mcastgrp)) {
  FUNC_0(VAR_0->mlxsw_sp->bus_info->dev,
    "Offloading proxy routes is not supported.\n");
  return 0;
 }
 return 1;
}
