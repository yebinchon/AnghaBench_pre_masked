
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct mlxsw_sx {int core; TYPE_1__* bus_info; int hw_id; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct mlxsw_sx*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sx *VAR_0, u8 VAR_1,
        u8 VAR_2, u8 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(VAR_0->core, VAR_1,
       VAR_2 + 1, 0, 0,
       VAR_0->hw_id, sizeof(VAR_0->hw_id));
 if (VAR_4) {
  FUNC_1(VAR_0->bus_info->dev, "Port %d: Failed to init core port\n",
   VAR_1);
  return VAR_4;
 }
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  goto err_port_create;

 return 0;

err_port_create:
 FUNC_2(VAR_0->core, VAR_1);
 return VAR_4;
}
