
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp {TYPE_2__* bus_info; TYPE_1__* router; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int aborted; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mlxsw_sp*) ;
 int FUNC_2 (struct mlxsw_sp*) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sp *VAR_0)
{
 int VAR_1;

 if (VAR_0->router->aborted)
  return;
 FUNC_0(VAR_0->bus_info->dev, "FIB abort triggered. Note that FIB entries are no longer being offloaded to this device.\n");
 FUNC_1(VAR_0);
 VAR_0->router->aborted = 1;
 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  FUNC_0(VAR_0->bus_info->dev, "Failed to set abort trap.\n");
}
