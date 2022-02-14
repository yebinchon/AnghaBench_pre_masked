
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlxsw_sp_acl_tcam_region {int tcam_region_info; } ;
struct mlxsw_sp_acl_atcam_region {TYPE_2__* ops; struct mlxsw_sp_acl_tcam_region* region; } ;
struct mlxsw_sp_acl_atcam_lkey_id {int id; int refcnt; } ;
struct TYPE_3__ {int value; int mask; int start; } ;
struct mlxsw_sp_acl_atcam_entry {TYPE_1__ delta_info; int enc_key; int erp_mask; struct mlxsw_sp_acl_atcam_lkey_id* lkey_id; } ;
struct mlxsw_sp {int core; } ;
struct TYPE_4__ {int (* lkey_id_put ) (struct mlxsw_sp_acl_atcam_region*,struct mlxsw_sp_acl_atcam_lkey_id*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mlxsw_sp_acl_atcam_region*,struct mlxsw_sp_acl_atcam_lkey_id*) ;

__attribute__((used)) static void
FUNC_6(struct mlxsw_sp *VAR_3,
           struct mlxsw_sp_acl_atcam_region *VAR_4,
           struct mlxsw_sp_acl_atcam_entry *VAR_5)
{
 struct mlxsw_sp_acl_atcam_lkey_id *VAR_6 = VAR_5->lkey_id;
 struct mlxsw_sp_acl_tcam_region *VAR_7 = VAR_4->region;
 u8 VAR_8 = FUNC_3(VAR_5->erp_mask);
 char VAR_9[VAR_0];

 FUNC_1(VAR_9, 0, VAR_1, 0,
        VAR_7->tcam_region_info,
        VAR_5->enc_key, VAR_8,
        VAR_5->delta_info.start,
        VAR_5->delta_info.mask,
        VAR_5->delta_info.value,
        FUNC_4(&VAR_6->refcnt) != 1,
        VAR_6->id, 0);
 FUNC_2(VAR_3->core, FUNC_0(VAR_2), VAR_9);
 VAR_4->ops->lkey_id_put(VAR_4, VAR_6);
}
