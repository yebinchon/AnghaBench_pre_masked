
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_fid {TYPE_1__* fid_family; } ;
struct TYPE_2__ {int lag_vid_valid; } ;



bool FUNC_0(const struct mlxsw_sp_fid *VAR_0)
{
 return VAR_0->fid_family->lag_vid_valid;
}
