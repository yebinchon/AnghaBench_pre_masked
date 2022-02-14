
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct mlxsw_sp_port {int dummy; } ;
struct mlxsw_sp_fid {TYPE_2__* fid_family; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* port_vid_map ) (struct mlxsw_sp_fid*,struct mlxsw_sp_port*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp_fid*,struct mlxsw_sp_port*,int ) ;

int FUNC_2(struct mlxsw_sp_fid *VAR_1,
         struct mlxsw_sp_port *VAR_2, u16 VAR_3)
{
 if (FUNC_0(!VAR_1->fid_family->ops->port_vid_map))
  return -VAR_0;
 return VAR_1->fid_family->ops->port_vid_map(VAR_1, VAR_2, VAR_3);
}
