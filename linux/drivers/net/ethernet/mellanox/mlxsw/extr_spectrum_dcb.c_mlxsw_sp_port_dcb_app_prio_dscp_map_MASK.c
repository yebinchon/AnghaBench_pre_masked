
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_port {int dev; } ;
struct dcb_ieee_app_prio_map {scalar_t__* map; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ,struct dcb_ieee_app_prio_map*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_3(struct mlxsw_sp_port *VAR_0,
        struct dcb_ieee_app_prio_map *VAR_1)
{
 bool VAR_2 = 0;
 int VAR_3;

 FUNC_1(VAR_0->dev, VAR_1);
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->map); ++VAR_3) {
  if (VAR_1->map[VAR_3]) {
   VAR_1->map[VAR_3] = FUNC_2(VAR_1->map[VAR_3]) - 1;
   VAR_2 = 1;
  }
 }

 return VAR_2;
}
