
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp {TYPE_1__* bus_info; int core; } ;
typedef enum mlxsw_reg_rauhtd_type { ____Placeholder_mlxsw_reg_rauhtd_type } mlxsw_reg_rauhtd_type ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct mlxsw_sp*,char*,int) ;
 scalar_t__ FUNC_6 (char*) ;
 int VAR_0 ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int
FUNC_9(struct mlxsw_sp *VAR_1,
           char *VAR_2,
           enum mlxsw_reg_rauhtd_type VAR_3)
{
 int VAR_4, VAR_5;
 int VAR_6;




 FUNC_7();
 do {
  FUNC_4(VAR_2, VAR_3);
  VAR_6 = FUNC_2(VAR_1->core, FUNC_0(VAR_0),
          VAR_2);
  if (VAR_6) {
   FUNC_1(VAR_1->bus_info->dev, "Failed to dump neighbour table\n");
   break;
  }
  VAR_5 = FUNC_3(VAR_2);
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
   FUNC_5(VAR_1, VAR_2,
         VAR_4);
 } while (FUNC_6(VAR_2));
 FUNC_8();

 return VAR_6;
}
