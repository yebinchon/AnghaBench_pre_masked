
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_bus_info {int psid; int vsd; } ;
struct mlxsw_pci {int core; struct mlxsw_bus_info bus_info; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct mlxsw_pci *VAR_0, char *VAR_1)
{
 struct mlxsw_bus_info *VAR_2 = &VAR_0->bus_info;
 int VAR_3;

 FUNC_3(VAR_1);
 VAR_3 = FUNC_0(VAR_0->core, VAR_1);
 if (VAR_3)
  return VAR_3;
 FUNC_2(VAR_1, VAR_2->vsd);
 FUNC_1(VAR_1, VAR_2->psid);
 return 0;
}
