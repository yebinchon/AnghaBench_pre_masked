
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mlxsw_sp_fid_family {size_t type; int fids_bitmap; scalar_t__ flood_tables; int fids_list; struct mlxsw_sp* mlxsw_sp; scalar_t__ start_index; scalar_t__ end_index; } ;
struct mlxsw_sp {TYPE_1__* fid_core; } ;
struct TYPE_2__ {struct mlxsw_sp_fid_family** fid_family_arr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct mlxsw_sp_fid_family*) ;
 struct mlxsw_sp_fid_family* FUNC_4 (struct mlxsw_sp_fid_family const*,int,int ) ;
 int FUNC_5 (struct mlxsw_sp_fid_family*) ;

__attribute__((used)) static int FUNC_6(struct mlxsw_sp *VAR_2,
     const struct mlxsw_sp_fid_family *VAR_3)
{
 u16 VAR_4 = VAR_3->end_index - VAR_3->start_index + 1;
 struct mlxsw_sp_fid_family *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_3, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->mlxsw_sp = VAR_2;
 FUNC_0(&VAR_5->fids_list);
 VAR_5->fids_bitmap = FUNC_2(VAR_4, VAR_1);
 if (!VAR_5->fids_bitmap) {
  VAR_6 = -VAR_0;
  goto err_alloc_fids_bitmap;
 }

 if (VAR_5->flood_tables) {
  VAR_6 = FUNC_5(VAR_5);
  if (VAR_6)
   goto err_fid_flood_tables_init;
 }

 VAR_2->fid_core->fid_family_arr[VAR_3->type] = VAR_5;

 return 0;

err_fid_flood_tables_init:
 FUNC_1(VAR_5->fids_bitmap);
err_alloc_fids_bitmap:
 FUNC_3(VAR_5);
 return VAR_6;
}
