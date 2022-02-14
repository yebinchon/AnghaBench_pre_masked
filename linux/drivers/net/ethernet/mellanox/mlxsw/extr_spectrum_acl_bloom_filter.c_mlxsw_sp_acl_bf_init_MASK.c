
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_bf {unsigned int bank_size; int lock; } ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlxsw_sp_acl_bf* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 struct mlxsw_sp_acl_bf* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (struct mlxsw_sp_acl_bf*,int ,unsigned int) ;

struct mlxsw_sp_acl_bf *
FUNC_6(struct mlxsw_sp *VAR_5, unsigned int VAR_6)
{
 struct mlxsw_sp_acl_bf *VAR_7;
 unsigned int VAR_8;

 if (!FUNC_2(VAR_5->core, VAR_0))
  return FUNC_0(-VAR_1);




 VAR_8 = 1 << FUNC_1(VAR_5->core, VAR_0);
 VAR_7 = FUNC_3(FUNC_5(VAR_7, VAR_4, VAR_8 * VAR_6),
       VAR_3);
 if (!VAR_7)
  return FUNC_0(-VAR_2);

 VAR_7->bank_size = VAR_8;
 FUNC_4(&VAR_7->lock);

 return VAR_7;
}
