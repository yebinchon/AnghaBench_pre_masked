
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlxsw_sp_acl_erp_table {int erp_index_bitmap; int base_index; TYPE_1__* aregion; TYPE_3__* erp_core; } ;
struct TYPE_5__ {int mask; } ;
struct mlxsw_sp_acl_erp {int index; TYPE_2__ key; int id; } ;
struct mlxsw_sp {int core; } ;
typedef enum mlxsw_reg_perpt_key_size { ____Placeholder_mlxsw_reg_perpt_key_size } mlxsw_reg_perpt_key_size ;
struct TYPE_6__ {struct mlxsw_sp* mlxsw_sp; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,int ,int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (struct mlxsw_sp_acl_erp_table*,struct mlxsw_sp_acl_erp*,int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_6(struct mlxsw_sp_acl_erp_table *VAR_3,
          struct mlxsw_sp_acl_erp *VAR_4)
{
 struct mlxsw_sp *VAR_5 = VAR_3->erp_core->mlxsw_sp;
 enum mlxsw_reg_perpt_key_size VAR_6;
 char VAR_7[VAR_0];
 u8 VAR_8, VAR_9;

 FUNC_5(VAR_3, VAR_4, &VAR_8, &VAR_9);
 VAR_6 = (enum mlxsw_reg_perpt_key_size) VAR_3->aregion->type;
 FUNC_3(VAR_7, VAR_8, VAR_9, VAR_6, VAR_4->id,
        0, VAR_3->base_index, VAR_4->index,
        VAR_4->key.mask);
 FUNC_1(VAR_7, VAR_3->erp_index_bitmap,
     VAR_1);
 FUNC_2(VAR_7, VAR_4->index, 1);
 return FUNC_4(VAR_5->core, FUNC_0(VAR_2), VAR_7);
}
