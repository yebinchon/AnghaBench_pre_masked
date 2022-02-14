
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mlxsw_sp_fid_family {int fids_bitmap; scalar_t__ start_index; TYPE_2__* ops; int fids_list; int fid_size; } ;
struct mlxsw_sp_fid {struct mlxsw_sp_fid_family* fid_family; int ref_count; int list; int ht_node; scalar_t__ fid_index; } ;
struct mlxsw_sp {TYPE_1__* fid_core; } ;
typedef enum mlxsw_sp_fid_type { ____Placeholder_mlxsw_sp_fid_type } mlxsw_sp_fid_type ;
struct TYPE_4__ {int (* index_alloc ) (struct mlxsw_sp_fid*,void const*,scalar_t__*) ;int (* configure ) (struct mlxsw_sp_fid*) ;int (* deconfigure ) (struct mlxsw_sp_fid*) ;int (* setup ) (struct mlxsw_sp_fid*,void const*) ;} ;
struct TYPE_3__ {int fid_ht; struct mlxsw_sp_fid_family** fid_family_arr; } ;


 int VAR_0 ;
 struct mlxsw_sp_fid* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct mlxsw_sp_fid*) ;
 struct mlxsw_sp_fid* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int VAR_2 ;
 struct mlxsw_sp_fid* FUNC_6 (struct mlxsw_sp*,int,void const*) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (struct mlxsw_sp_fid*,void const*,scalar_t__*) ;
 int FUNC_9 (struct mlxsw_sp_fid*,void const*) ;
 int FUNC_10 (struct mlxsw_sp_fid*) ;
 int FUNC_11 (struct mlxsw_sp_fid*) ;

__attribute__((used)) static struct mlxsw_sp_fid *FUNC_12(struct mlxsw_sp *VAR_3,
          enum mlxsw_sp_fid_type VAR_4,
          const void *VAR_5)
{
 struct mlxsw_sp_fid_family *VAR_6;
 struct mlxsw_sp_fid *VAR_7;
 u16 VAR_8;
 int VAR_9;

 VAR_7 = FUNC_6(VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_6 = VAR_3->fid_core->fid_family_arr[VAR_4];
 VAR_7 = FUNC_4(VAR_6->fid_size, VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);
 VAR_7->fid_family = VAR_6;

 VAR_9 = VAR_7->fid_family->ops->index_alloc(VAR_7, VAR_5, &VAR_8);
 if (VAR_9)
  goto err_index_alloc;
 VAR_7->fid_index = VAR_8;
 FUNC_2(VAR_8 - VAR_6->start_index, VAR_6->fids_bitmap);

 if (VAR_7->fid_family->ops->setup)
  VAR_7->fid_family->ops->setup(VAR_7, VAR_5);

 VAR_9 = VAR_7->fid_family->ops->configure(VAR_7);
 if (VAR_9)
  goto err_configure;

 VAR_9 = FUNC_7(&VAR_3->fid_core->fid_ht, &VAR_7->ht_node,
         VAR_2);
 if (VAR_9)
  goto err_rhashtable_insert;

 FUNC_5(&VAR_7->list, &VAR_6->fids_list);
 VAR_7->ref_count++;
 return VAR_7;

err_rhashtable_insert:
 VAR_7->fid_family->ops->deconfigure(VAR_7);
err_configure:
 FUNC_1(VAR_8 - VAR_6->start_index,
      VAR_6->fids_bitmap);
err_index_alloc:
 FUNC_3(VAR_7);
 return FUNC_0(VAR_9);
}
