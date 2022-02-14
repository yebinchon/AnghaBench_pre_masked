
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam {int max_regions; } ;
struct mlxsw_sp2_acl_tcam {int kvdl_count; scalar_t__ kvdl_index; int atcam; } ;
struct mlxsw_sp {int core; int afa; } ;
struct mlxsw_afa_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mlxsw_afa_block*) ;
 struct mlxsw_afa_block* FUNC_3 (int ) ;
 char* FUNC_4 (struct mlxsw_afa_block*) ;
 int FUNC_5 (struct mlxsw_afa_block*) ;
 int FUNC_6 (char*,scalar_t__,int,char*) ;
 int FUNC_7 (char*,scalar_t__) ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (struct mlxsw_sp*,int *) ;
 int FUNC_10 (struct mlxsw_sp*,int ,int,scalar_t__*) ;
 int FUNC_11 (struct mlxsw_sp*,int ,int,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_12(struct mlxsw_sp *VAR_6, void *VAR_7,
       struct mlxsw_sp_acl_tcam *VAR_8)
{
 struct mlxsw_sp2_acl_tcam *VAR_9 = VAR_7;
 struct mlxsw_afa_block *VAR_10;
 char VAR_11[VAR_1];
 char VAR_12[VAR_2];
 char *VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_9->kvdl_count = VAR_8->max_regions;
 VAR_15 = FUNC_10(VAR_6, VAR_3,
      VAR_9->kvdl_count, &VAR_9->kvdl_index);
 if (VAR_15)
  return VAR_15;





 VAR_10 = FUNC_3(VAR_6->afa);
 if (!VAR_10) {
  VAR_15 = -VAR_0;
  goto err_afa_block;
 }
 VAR_15 = FUNC_2(VAR_10);
 if (FUNC_1(VAR_15))
  goto err_afa_block_continue;
 VAR_13 = FUNC_4(VAR_10);

 for (VAR_14 = 0; VAR_14 < VAR_9->kvdl_count; VAR_14++) {
  FUNC_6(VAR_11, VAR_9->kvdl_index + VAR_14,
        1, VAR_13);
  VAR_15 = FUNC_8(VAR_6->core, FUNC_0(VAR_4), VAR_11);
  if (VAR_15)
   goto err_pefa_write;
 }
 FUNC_7(VAR_12, VAR_9->kvdl_index);
 VAR_15 = FUNC_8(VAR_6->core, FUNC_0(VAR_5), VAR_12);
 if (VAR_15)
  goto err_pgcr_write;

 VAR_15 = FUNC_9(VAR_6, &VAR_9->atcam);
 if (VAR_15)
  goto err_atcam_init;

 FUNC_5(VAR_10);
 return 0;

err_atcam_init:
err_pgcr_write:
err_pefa_write:
err_afa_block_continue:
 FUNC_5(VAR_10);
err_afa_block:
 FUNC_11(VAR_6, VAR_3,
      VAR_9->kvdl_count, VAR_9->kvdl_index);
 return VAR_15;
}
