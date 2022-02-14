
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t bytes; } ;
struct mlxsw_item {TYPE_1__ size; } ;


 char* FUNC_0 (char*,struct mlxsw_item const*,int ) ;
 int FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_2(const struct mlxsw_item *VAR_0,
        const struct mlxsw_item *VAR_1,
        char *VAR_2, char *VAR_3)
{
 char *VAR_4 = FUNC_0(VAR_2, VAR_0, 0);
 char *VAR_5 = FUNC_0(VAR_3, VAR_1, 0);
 size_t VAR_6 = VAR_1->size.bytes;

 FUNC_1(VAR_5, VAR_4, VAR_6);
}
