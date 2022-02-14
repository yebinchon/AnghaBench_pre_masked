
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlxsw_sp_acl_atcam_region {TYPE_2__* region; } ;
struct TYPE_3__ {int erp_id; } ;
struct mlxsw_sp_acl_atcam_entry {int * enc_key; TYPE_1__ ht_key; } ;
struct mlxsw_afk_key_info {int dummy; } ;
typedef int erp_region_id ;
typedef int __be16 ;
struct TYPE_4__ {int id; struct mlxsw_afk_key_info* key_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t* VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int *,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (struct mlxsw_afk_key_info*) ;

__attribute__((used)) static void
FUNC_4(struct mlxsw_sp_acl_atcam_region *VAR_6,
      struct mlxsw_sp_acl_atcam_entry *VAR_7,
      char *VAR_8, u8 *VAR_9)
{
 struct mlxsw_afk_key_info *VAR_10 = VAR_6->region->key_info;
 u8 VAR_11, VAR_12, VAR_13;
 char *VAR_14 = VAR_8;
 __be16 VAR_15;

 VAR_13 = FUNC_3(VAR_10);
 VAR_12 = 1 + ((VAR_13 - 1) >> 2);
 VAR_15 = FUNC_0(VAR_7->ht_key.erp_id |
       (VAR_6->region->id << 4));
 for (VAR_11 = VAR_3 - VAR_12;
      VAR_11 < VAR_3; VAR_11++) {
  FUNC_2(VAR_14, 0, VAR_2);
  FUNC_1(VAR_14 + VAR_2, &VAR_15,
         sizeof(VAR_15));
  FUNC_1(VAR_14 + VAR_1,
         &VAR_7->enc_key[VAR_5[VAR_11]],
         VAR_0);
  VAR_14 += VAR_4;
 }
 *VAR_9 = VAR_12 * VAR_4;
}
