
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct mlxsw_sp {TYPE_2__* sb; int core; TYPE_1__* sb_vals; } ;
struct TYPE_5__ {int cell_size; int max_headroom_cells; void* sb_size; } ;
struct TYPE_4__ {int pool_count; int prs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,void*,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int,int ) ;
 int FUNC_5 (struct mlxsw_sp*) ;
 int FUNC_6 (struct mlxsw_sp*) ;
 int FUNC_7 (struct mlxsw_sp*,int *,int *) ;
 int FUNC_8 (struct mlxsw_sp*) ;
 int FUNC_9 (struct mlxsw_sp*) ;
 int FUNC_10 (struct mlxsw_sp*) ;
 int FUNC_11 (struct mlxsw_sp*,int ,int ) ;
 int FUNC_12 (int ) ;

int FUNC_13(struct mlxsw_sp *VAR_8)
{
 u32 VAR_9;
 u16 VAR_10 = 0;
 u16 VAR_11 = 0;
 int VAR_12;

 if (!FUNC_1(VAR_8->core, VAR_0))
  return -VAR_1;

 if (!FUNC_1(VAR_8->core, VAR_4))
  return -VAR_1;

 if (!FUNC_1(VAR_8->core, VAR_5))
  return -VAR_1;

 VAR_8->sb = FUNC_4(sizeof(*VAR_8->sb), VAR_3);
 if (!VAR_8->sb)
  return -VAR_2;
 VAR_8->sb->cell_size = FUNC_0(VAR_8->core, VAR_0);
 VAR_8->sb->sb_size = FUNC_0(VAR_8->core,
         VAR_4);
 VAR_9 = FUNC_0(VAR_8->core,
            VAR_5);

 VAR_8->sb->max_headroom_cells = VAR_9 /
      VAR_8->sb->cell_size;

 VAR_12 = FUNC_10(VAR_8);
 if (VAR_12)
  goto err_sb_ports_init;
 VAR_12 = FUNC_11(VAR_8, VAR_8->sb_vals->prs,
       VAR_8->sb_vals->pool_count);
 if (VAR_12)
  goto err_sb_prs_init;
 VAR_12 = FUNC_5(VAR_8);
 if (VAR_12)
  goto err_sb_cpu_port_sb_cms_init;
 VAR_12 = FUNC_6(VAR_8);
 if (VAR_12)
  goto err_sb_cpu_port_pms_init;
 VAR_12 = FUNC_8(VAR_8);
 if (VAR_12)
  goto err_sb_mms_init;
 FUNC_7(VAR_8, &VAR_10, &VAR_11);
 VAR_12 = FUNC_2(FUNC_12(VAR_8->core), 0,
      VAR_8->sb->sb_size,
      VAR_10,
      VAR_11,
      VAR_7,
      VAR_6);
 if (VAR_12)
  goto err_devlink_sb_register;

 return 0;

err_devlink_sb_register:
err_sb_mms_init:
err_sb_cpu_port_pms_init:
err_sb_cpu_port_sb_cms_init:
err_sb_prs_init:
 FUNC_9(VAR_8);
err_sb_ports_init:
 FUNC_3(VAR_8->sb);
 return VAR_12;
}
