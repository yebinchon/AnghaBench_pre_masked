
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_afk {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* clear_block ) (char*,int) ;} ;


 int FUNC_0 (char*,int) ;

void FUNC_1(struct mlxsw_afk *VAR_0, char *VAR_1,
       int VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_2; VAR_4 <= VAR_3; VAR_4++)
  VAR_0->ops->clear_block(VAR_1, VAR_4);
}
