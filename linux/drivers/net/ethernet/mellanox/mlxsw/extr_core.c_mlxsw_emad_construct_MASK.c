
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct mlxsw_reg_info {int len; } ;
typedef enum mlxsw_core_reg_access_type { ____Placeholder_mlxsw_core_reg_access_type } mlxsw_core_reg_access_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,struct mlxsw_reg_info const*,int,int ) ;
 int FUNC_3 (char*,struct mlxsw_reg_info const*,char*) ;
 char* FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_5(struct sk_buff *VAR_2,
     const struct mlxsw_reg_info *VAR_3,
     char *VAR_4,
     enum mlxsw_core_reg_access_type VAR_5,
     u64 VAR_6)
{
 char *VAR_7;

 VAR_7 = FUNC_4(VAR_2, VAR_0 * sizeof(u32));
 FUNC_1(VAR_7);

 VAR_7 = FUNC_4(VAR_2, VAR_3->len + sizeof(u32));
 FUNC_3(VAR_7, VAR_3, VAR_4);

 VAR_7 = FUNC_4(VAR_2, VAR_1 * sizeof(u32));
 FUNC_2(VAR_7, VAR_3, VAR_5, VAR_6);

 FUNC_0(VAR_2);
}
