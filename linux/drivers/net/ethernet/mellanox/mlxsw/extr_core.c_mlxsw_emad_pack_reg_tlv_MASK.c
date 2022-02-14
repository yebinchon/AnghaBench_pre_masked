
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_reg_info {int len; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(char *VAR_1,
        const struct mlxsw_reg_info *VAR_2,
        char *VAR_3)
{
 FUNC_2(VAR_1, VAR_0);
 FUNC_1(VAR_1, VAR_2->len / sizeof(u32) + 1);
 FUNC_0(VAR_1 + sizeof(u32), VAR_3, VAR_2->len);
}
