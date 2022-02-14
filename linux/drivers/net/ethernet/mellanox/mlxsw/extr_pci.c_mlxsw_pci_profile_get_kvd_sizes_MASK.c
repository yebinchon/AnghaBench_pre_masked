
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlxsw_res {int dummy; } ;
struct mlxsw_pci {int core; } ;
struct mlxsw_config_profile {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlxsw_res*,int ,int ) ;
 int FUNC_1 (int ,struct mlxsw_config_profile const*,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_2(const struct mlxsw_pci *VAR_3,
    const struct mlxsw_config_profile *VAR_4,
    struct mlxsw_res *VAR_5)
{
 u64 VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_3->core, VAR_4,
           &VAR_6, &VAR_7,
           &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_0(VAR_5, VAR_2, VAR_6);
 FUNC_0(VAR_5, VAR_0, VAR_7);
 FUNC_0(VAR_5, VAR_1, VAR_8);

 return 0;
}
