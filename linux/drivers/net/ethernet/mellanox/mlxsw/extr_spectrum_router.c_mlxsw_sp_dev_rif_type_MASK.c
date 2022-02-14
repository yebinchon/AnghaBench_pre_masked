
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_sp_rif_type { ____Placeholder_mlxsw_sp_rif_type } mlxsw_sp_rif_type ;
typedef enum mlxsw_sp_fid_type { ____Placeholder_mlxsw_sp_fid_type } mlxsw_sp_fid_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct net_device const*) ;
 scalar_t__ FUNC_1 (struct net_device const*) ;
 int FUNC_2 (struct mlxsw_sp const*,int) ;
 scalar_t__ FUNC_3 (struct mlxsw_sp const*,struct net_device const*,int *) ;
 scalar_t__ FUNC_4 (struct net_device const*) ;
 struct net_device const* FUNC_5 (struct net_device const*) ;

__attribute__((used)) static enum mlxsw_sp_rif_type
FUNC_6(const struct mlxsw_sp *VAR_4,
        const struct net_device *VAR_5)
{
 enum mlxsw_sp_fid_type VAR_6;

 if (FUNC_3(VAR_4, VAR_5, ((void*)0)))
  return VAR_3;


 if (FUNC_1(VAR_5) && FUNC_4(FUNC_5(VAR_5)))
  VAR_6 = VAR_1;
 else if (FUNC_4(VAR_5) && FUNC_0(VAR_5))
  VAR_6 = VAR_1;
 else if (FUNC_4(VAR_5))
  VAR_6 = VAR_0;
 else
  VAR_6 = VAR_2;

 return FUNC_2(VAR_4, VAR_6);
}
