
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_acl_ctcam_region {TYPE_1__* region; } ;
struct TYPE_4__ {int index; } ;
struct mlxsw_sp_acl_ctcam_entry {TYPE_2__ parman_item; } ;
struct mlxsw_sp {int core; } ;
struct mlxsw_afa_block {int dummy; } ;
struct TYPE_3__ {int tcam_region_info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (struct mlxsw_afa_block*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int,int ,int ,int ,unsigned int) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(struct mlxsw_sp *VAR_3,
            struct mlxsw_sp_acl_ctcam_region *VAR_4,
            struct mlxsw_sp_acl_ctcam_entry *VAR_5,
            struct mlxsw_afa_block *VAR_6,
            unsigned int VAR_7)
{
 char VAR_8[VAR_0];
 char *VAR_9;

 FUNC_3(VAR_8, 1, VAR_1,
        VAR_4->region->tcam_region_info,
        VAR_5->parman_item.index, VAR_7);

 VAR_9 = FUNC_1(VAR_6);
 FUNC_2(VAR_8, VAR_9);

 return FUNC_4(VAR_3->core, FUNC_0(VAR_2), VAR_8);
}
