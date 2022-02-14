
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mlxsw_sp_fid {int dummy; } ;
struct mlxsw_sp_bridge_device {TYPE_1__* dev; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_2__ {int ifindex; } ;


 struct mlxsw_sp_fid* FUNC_0 (struct mlxsw_sp*,int ) ;
 struct mlxsw_sp* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static struct mlxsw_sp_fid *
FUNC_2(struct mlxsw_sp_bridge_device *VAR_0,
     u16 VAR_1)
{
 struct mlxsw_sp *VAR_2 = FUNC_1(VAR_0->dev);


 if (VAR_1)
  return ((void*)0);

 return FUNC_0(VAR_2, VAR_0->dev->ifindex);
}
