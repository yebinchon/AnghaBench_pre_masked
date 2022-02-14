
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mlxsw_sp {TYPE_2__* sb_vals; } ;
struct TYPE_4__ {int pool_count; TYPE_1__* pool_dess; } ;
struct TYPE_3__ {scalar_t__ dir; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static void FUNC_1(struct mlxsw_sp *VAR_1,
    u16 *VAR_2, u16 *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->sb_vals->pool_count; ++VAR_4) {
  if (VAR_1->sb_vals->pool_dess[VAR_4].dir ==
      VAR_0)
   (*VAR_2)++;
  else
   (*VAR_3)++;
 }

 FUNC_0(*VAR_3 == 0, "No egress pools\n");
}
