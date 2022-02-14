
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tz_name ;
struct mlxsw_thermal_module {int module; int mode; int tzdev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char*,int ,int ,struct mlxsw_thermal_module*,int *,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct mlxsw_thermal_module *VAR_5)
{
 char VAR_6[VAR_2];

 FUNC_2(VAR_6, sizeof(VAR_6), "mlxsw-gearbox%d",
   VAR_5->module + 1);
 VAR_5->tzdev = FUNC_3(VAR_6,
      VAR_0,
      VAR_1,
      VAR_5,
      &VAR_4,
      ((void*)0), 0, 0);
 if (FUNC_0(VAR_5->tzdev))
  return FUNC_1(VAR_5->tzdev);

 VAR_5->mode = VAR_3;
 return 0;
}
