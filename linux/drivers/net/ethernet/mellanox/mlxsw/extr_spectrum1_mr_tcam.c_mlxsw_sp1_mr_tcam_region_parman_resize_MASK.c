
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct mlxsw_sp1_mr_tcam_region {int rtar_key_type; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,int ,unsigned long) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(void *VAR_5,
        unsigned long VAR_6)
{
 struct mlxsw_sp1_mr_tcam_region *VAR_7 = VAR_5;
 struct mlxsw_sp *VAR_8 = VAR_7->mlxsw_sp;
 char VAR_9[VAR_2];
 u64 VAR_10;

 VAR_10 = FUNC_0(VAR_8->core, VAR_0);
 if (VAR_6 > VAR_10)
  return -VAR_1;
 FUNC_2(VAR_9, VAR_3,
       VAR_7->rtar_key_type, VAR_6);
 return FUNC_3(VAR_8->core, FUNC_1(VAR_4), VAR_9);
}
