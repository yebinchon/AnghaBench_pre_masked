
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlxsw_sp_acl_tcam_region {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_acl_atcam_region_12kb {int lkey_ht; } ;
struct mlxsw_sp_acl_atcam_region {struct mlxsw_sp_acl_tcam_region* region; struct mlxsw_sp_acl_atcam_region_12kb* priv; } ;
struct TYPE_2__ {int member_0; } ;
struct mlxsw_sp_acl_atcam_lkey_id_ht_key {int erp_id; int enc_key; TYPE_1__ member_0; } ;
struct mlxsw_sp_acl_atcam_lkey_id {int refcnt; } ;
struct mlxsw_sp {int acl; } ;
struct mlxsw_afk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mlxsw_afk*,int ,int ,int ) ;
 struct mlxsw_afk* FUNC_2 (int ) ;
 struct mlxsw_sp_acl_atcam_lkey_id* FUNC_3 (struct mlxsw_sp_acl_atcam_region*,struct mlxsw_sp_acl_atcam_lkey_id_ht_key*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 struct mlxsw_sp_acl_atcam_lkey_id* FUNC_5 (int *,struct mlxsw_sp_acl_atcam_lkey_id_ht_key*,int ) ;

__attribute__((used)) static struct mlxsw_sp_acl_atcam_lkey_id *
FUNC_6(struct mlxsw_sp_acl_atcam_region *VAR_3,
        char *VAR_4, u8 VAR_5)
{
 struct mlxsw_sp_acl_atcam_region_12kb *VAR_6 = VAR_3->priv;
 struct mlxsw_sp_acl_tcam_region *VAR_7 = VAR_3->region;
 struct mlxsw_sp_acl_atcam_lkey_id_ht_key VAR_8 = { 0 };
 struct mlxsw_sp *VAR_9 = VAR_7->mlxsw_sp;
 struct mlxsw_afk *VAR_10 = FUNC_2(VAR_9->acl);
 struct mlxsw_sp_acl_atcam_lkey_id *VAR_11;

 FUNC_0(VAR_8.enc_key, VAR_4, sizeof(VAR_8.enc_key));
 FUNC_1(VAR_10, VAR_8.enc_key,
   VAR_1,
   VAR_0);
 VAR_8.erp_id = VAR_5;
 VAR_11 = FUNC_5(&VAR_6->lkey_ht, &VAR_8,
      VAR_2);
 if (VAR_11) {
  FUNC_4(&VAR_11->refcnt);
  return VAR_11;
 }

 return FUNC_3(VAR_3, &VAR_8);
}
