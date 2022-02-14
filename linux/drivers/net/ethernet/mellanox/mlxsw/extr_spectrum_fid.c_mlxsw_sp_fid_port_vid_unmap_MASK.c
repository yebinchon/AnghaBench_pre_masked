
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
struct TYPE_3__ {int (* port_vid_unmap ) (struct mlxsw_sp_fid*,struct mlxsw_sp_port*,int ) ;} ;


 int FUNC_0 (struct mlxsw_sp_fid*,struct mlxsw_sp_port*,int ) ;

void FUNC_1(struct mlxsw_sp_fid *VAR_0,
     struct mlxsw_sp_port *VAR_1, u16 VAR_2)
{
 VAR_0->fid_family->ops->port_vid_unmap(VAR_0, VAR_1, VAR_2);
}
