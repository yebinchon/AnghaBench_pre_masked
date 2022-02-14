
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_fid_family {int fids_bitmap; scalar_t__ start_index; TYPE_2__* ops; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_fid {scalar_t__ ref_count; scalar_t__ fid_index; struct mlxsw_sp_fid_family* fid_family; int ht_node; int list; } ;
struct mlxsw_sp {TYPE_1__* fid_core; } ;
struct TYPE_4__ {int (* deconfigure ) (struct mlxsw_sp_fid*) ;} ;
struct TYPE_3__ {int fid_ht; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct mlxsw_sp_fid*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (struct mlxsw_sp_fid*) ;

void FUNC_5(struct mlxsw_sp_fid *VAR_1)
{
 struct mlxsw_sp_fid_family *VAR_2 = VAR_1->fid_family;
 struct mlxsw_sp *VAR_3 = VAR_2->mlxsw_sp;

 if (--VAR_1->ref_count != 0)
  return;

 FUNC_2(&VAR_1->list);
 FUNC_3(&VAR_3->fid_core->fid_ht,
          &VAR_1->ht_node, VAR_0);
 VAR_1->fid_family->ops->deconfigure(VAR_1);
 FUNC_0(VAR_1->fid_index - VAR_2->start_index,
      VAR_2->fids_bitmap);
 FUNC_1(VAR_1);
}
