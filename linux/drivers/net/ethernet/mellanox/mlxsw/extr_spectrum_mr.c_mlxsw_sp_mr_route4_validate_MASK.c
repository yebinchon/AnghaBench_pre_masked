
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mr_mfc {int dummy; } ;
struct mlxsw_sp_mr_table {TYPE_2__* mlxsw_sp; } ;
struct mfc_cache {scalar_t__ mfc_origin; scalar_t__ mfc_mcastgrp; } ;
struct TYPE_4__ {TYPE_1__* bus_info; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(const struct mlxsw_sp_mr_table *VAR_1,
       const struct mr_mfc *VAR_2)
{
 struct mfc_cache *VAR_3 = (struct mfc_cache *) VAR_2;




 if (VAR_3->mfc_origin == FUNC_1(VAR_0) &&
     VAR_3->mfc_mcastgrp == FUNC_1(VAR_0)) {
  FUNC_0(VAR_1->mlxsw_sp->bus_info->dev,
    "Offloading proxy routes is not supported.\n");
  return 0;
 }
 return 1;
}
