
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlxsw_sp_mr_tcam_erif_list {int kvdl_index; } ;
struct mlxsw_sp {int afa; } ;
struct mlxsw_afa_block {int dummy; } ;
typedef enum mlxsw_sp_mr_route_action { ____Placeholder_mlxsw_sp_mr_route_action } mlxsw_sp_mr_route_action ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlxsw_afa_block* FUNC_0 (int) ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mlxsw_afa_block*,int ) ;
 int FUNC_2 (struct mlxsw_afa_block*,int ,int ,int,int ) ;
 int FUNC_3 (struct mlxsw_afa_block*,int ) ;
 int FUNC_4 (struct mlxsw_afa_block*,int ) ;
 int FUNC_5 (struct mlxsw_afa_block*) ;
 struct mlxsw_afa_block* FUNC_6 (int ) ;
 int FUNC_7 (struct mlxsw_afa_block*) ;
 int FUNC_8 (struct mlxsw_sp*,struct mlxsw_sp_mr_tcam_erif_list*) ;

__attribute__((used)) static struct mlxsw_afa_block *
FUNC_9(struct mlxsw_sp *VAR_4,
      enum mlxsw_sp_mr_route_action VAR_5,
      u16 VAR_6, u32 VAR_7,
      u16 VAR_8,
      struct mlxsw_sp_mr_tcam_erif_list *VAR_9)
{
 struct mlxsw_afa_block *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_6(VAR_4->afa);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_11 = FUNC_1(VAR_10,
             VAR_7);
 if (VAR_11)
  goto err;

 switch (VAR_5) {
 case 129:
  VAR_11 = FUNC_3(VAR_10,
        VAR_2);
  if (VAR_11)
   goto err;
  break;
 case 128:
 case 130:



  VAR_11 = FUNC_8(VAR_4, VAR_9);
  if (VAR_11)
   goto err;

  VAR_11 = FUNC_2(VAR_10, VAR_6,
            VAR_8, 0,
            VAR_9->kvdl_index);
  if (VAR_11)
   goto err;

  if (VAR_5 == 128) {
   VAR_11 = FUNC_4(VAR_10,
              VAR_3);
   if (VAR_11)
    goto err;
  }
  break;
 default:
  VAR_11 = -VAR_0;
  goto err;
 }

 VAR_11 = FUNC_5(VAR_10);
 if (VAR_11)
  goto err;
 return VAR_10;
err:
 FUNC_7(VAR_10);
 return FUNC_0(VAR_11);
}
