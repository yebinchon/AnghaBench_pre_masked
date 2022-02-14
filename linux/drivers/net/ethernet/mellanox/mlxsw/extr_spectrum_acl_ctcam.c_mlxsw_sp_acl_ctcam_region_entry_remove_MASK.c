
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlxsw_sp_acl_ctcam_region {TYPE_3__* ops; TYPE_1__* region; } ;
struct TYPE_5__ {int index; } ;
struct mlxsw_sp_acl_ctcam_entry {TYPE_2__ parman_item; } ;
struct mlxsw_sp {int core; } ;
struct TYPE_6__ {int (* entry_remove ) (struct mlxsw_sp_acl_ctcam_region*,struct mlxsw_sp_acl_ctcam_entry*) ;} ;
struct TYPE_4__ {int tcam_region_info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_2 ;
 int FUNC_3 (struct mlxsw_sp_acl_ctcam_region*,struct mlxsw_sp_acl_ctcam_entry*) ;

__attribute__((used)) static void
FUNC_4(struct mlxsw_sp *VAR_3,
           struct mlxsw_sp_acl_ctcam_region *VAR_4,
           struct mlxsw_sp_acl_ctcam_entry *VAR_5)
{
 char VAR_6[VAR_0];

 FUNC_1(VAR_6, 0, VAR_1,
        VAR_4->region->tcam_region_info,
        VAR_5->parman_item.index, 0);
 FUNC_2(VAR_3->core, FUNC_0(VAR_2), VAR_6);
 VAR_4->ops->entry_remove(VAR_4, VAR_5);
}
