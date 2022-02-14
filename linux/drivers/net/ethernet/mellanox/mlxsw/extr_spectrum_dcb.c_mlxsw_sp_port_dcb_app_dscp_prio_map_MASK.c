
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mlxsw_sp_port {int dev; } ;
struct dcb_ieee_app_dscp_map {scalar_t__* map; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ,struct dcb_ieee_app_dscp_map*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct mlxsw_sp_port *VAR_0,
        u8 VAR_1,
        struct dcb_ieee_app_dscp_map *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_0->dev, VAR_2);
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->map); ++VAR_3) {
  if (VAR_2->map[VAR_3])
   VAR_2->map[VAR_3] = FUNC_2(VAR_2->map[VAR_3]) - 1;
  else
   VAR_2->map[VAR_3] = VAR_1;
 }
}
