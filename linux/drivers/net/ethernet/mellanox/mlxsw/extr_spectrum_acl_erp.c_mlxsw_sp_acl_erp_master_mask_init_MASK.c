
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_atcam_region {TYPE_1__* region; } ;
struct mlxsw_sp {int core; } ;
struct TYPE_2__ {int id; struct mlxsw_sp* mlxsw_sp; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sp_acl_atcam_region *VAR_2)
{
 struct mlxsw_sp *VAR_3 = VAR_2->region->mlxsw_sp;
 char VAR_4[VAR_0];

 FUNC_1(VAR_4, VAR_2->region->id);
 return FUNC_2(VAR_3->core, FUNC_0(VAR_1), VAR_4);
}
