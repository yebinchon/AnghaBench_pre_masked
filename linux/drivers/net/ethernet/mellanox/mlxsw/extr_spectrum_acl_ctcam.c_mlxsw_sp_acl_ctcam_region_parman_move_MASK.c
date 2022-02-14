
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_region {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_acl_ctcam_region {struct mlxsw_sp_acl_tcam_region* region; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_region*,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_1(void *VAR_0,
        unsigned long VAR_1,
        unsigned long VAR_2,
        unsigned long VAR_3)
{
 struct mlxsw_sp_acl_ctcam_region *VAR_4 = VAR_0;
 struct mlxsw_sp_acl_tcam_region *VAR_5 = VAR_4->region;
 struct mlxsw_sp *VAR_6 = VAR_5->mlxsw_sp;

 FUNC_0(VAR_6, VAR_5,
           VAR_1, VAR_2, VAR_3);
}
